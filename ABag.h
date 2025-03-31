/*
* File:   ABag.h
* Author: Prof Terri Sipantzi
*
* You may use this template to implement your ABag. 
* 
* edited by Zachary Seeley 3/30/2025
*/

#ifndef ABAG_H
#define	ABAG_H

#include "book.h"
#include "bagADT.h"

template <typename E>
class ABag : public Bag<E> {
public:
	//default constructor with capacity parameter to initialize data member variable array size
	//	default value is arbitrary number of 20
	ABag(int cap=20)	
	{
		capacity = cap;						//Initialize capacity member variable to passed in value
		data = new E[capacity];				//Initialize data member variable to array of size capacity
		used = 0;							//Initialize used member variable to 0 indicating nothing is in the array
	}

	//default destructor
	~ABag() {}

	//addItem()
	//	add passed in parameter value to data member variable if array is not full
	bool addItem(const E& item)
	{
		if (used < capacity)	//check if array is at capacity or not
		{
			data[used] = item;	//set next available array slot value to passed in parameter value
			used++;				//increment used member variable by +1
			return true;
		}
		
		return false;
	}

	//remove()
	//	remove item based on passed in parameter value
	bool remove(E& item)
	{
		for (int i = 0; i < used; i++)		//loop through data member variable array
		{
			if (data[i] == item)			//if current item in array is equal to passed in parameter value...
			{
				item = data[i];				//set the item value to the found data member variable array position's value
				for (i; i < used - 1; i++)	//loop through data member variable including found item
					data[i] = data[i + 1];	//set its value to the value of the next item in array
				data[used - 1] = E();		//set last item in used portion of array to empty E item using default constructor
				used--;						//decrement used member variable value to indicate the item was removed
				return true;
			}
		}

		return false;
	}

	//removeTop()
	//	remove the last inserted and existing item in data member variable array
	bool removeTop(E& returnValue)
	{
		if (used > 0)						//if data member variable array is not empty...
		{
			returnValue = data[used - 1];	//set returnValue value to last added item's value
			data[used - 1] = E();			//set the last item in the array to empty E item using default constructor
			used--;							//decrement used member variable value to indicate the item was removed
			return true;
		}

		return false;
	}

	//find()
	//	find specific value in data member variable array based on passed in parameter value
	bool find(E& returnValue) const
	{
		for (int i = 0; i < used; i++)	//loop through data member array variable
		{
			if (data[i] == returnValue)	//if current data member variable array value is equal to passed in parameter value...
			{
				returnValue = data[i];	//set returnValue value to the found data item's value
				return true;
			}
		}
		
		return false;
	}

	//inspectTop()
	//	set passed in parameter value equal to the last inserted and existing data member variable value
	bool inspectTop(E& item) const
	{
		if (used > 0)				//if data member variable array is not empty...
		{
			item = data[used - 1];	//sets item value to top array item's value
			return true;
		}

		return false;
	}

	//emptyBag()
	//	clears all existing entries in the data member variable array to empty E objects
	void emptyBag()
	{
		if (used > 0)						//if data member variable array is not empty...
		{
			for (int i = 0; i < used; i++)	//loop through data member variable array values
				data[i] = E();				//set current data member variable value to empty E object using default constructor
			used = 0;						//set number of objects in data member variable array to 0
		}
	}

	//operator+=
	//	overload the += operator
	bool operator+=(const E& addend)
	{
		if (addItem(addend))	//if the addItem function using the passed in addend parameter is successful...
			return true;

		return false;
	}

	//size()
	//	return the used member variable variable to show the current size of the data member variable array
	int size() const { return used; }

	//bagCapacity()
	// return the capacity member variable value
	int bagCapacity() const { return capacity; }

private:
	E *data;            // an array of items
	int used;           // number of items the data array currently holds
	int capacity;       // the number of items the bag can hold (size of array)
};

#endif	/* ABAG_H */

