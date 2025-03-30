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
	// constructors/destructor

	ABag(int cap=20)	//default constructor with capacity parameter to initialize data member variable array size
	{
		capacity = cap;					//Initialize capacity member variable to passed in value
		data = new E[capacity];			//Initialize data member variable to array of size capacity
		for (int i = 0; i < capacity; i++)
			data[i] = E();
		used = 0;						//Initialize used member variable to 0 indicating nothing is in the array
	}

	~ABag() {}

	//addItem()
	bool addItem(const E& item)
	{
		if (used < capacity)
		{
			data[used] = item;
			used++;
			return true;
		}
		
		return false;
	}

	//remove()
	bool remove(E& item)
	{
		for (int i = 0; i < used; i++)
		{
			if (data[i] == item)
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
	bool removeTop(E& returnValue)
	{
		if (used > 0)
		{
			returnValue = data[used - 1];	//set returnValue value to last added item's value
			data[used - 1] = E();			//set the last item in the array to empty E item using default constructor
			used--;							//decrement used member variable value to indicate the item was removed

			return true;
		}

		return false;
	}

	//find()
	bool find(E& returnValue) const
	{
		for (int i = 0; i < used; i++)
		{
			if (data[i] == returnValue)
			{
				returnValue = data[i];	//set returnValue value to the found data item's value
				return true;
			}
		}
		
		return false;
	}

	//inspectTop()
	bool inspectTop(E& item) const
	{

		return false;
	}

	//emptyBag()
	void emptyBag()
	{

	}

	//operator+=
	bool operator+=(const E& addend)
	{

		return false;
	}

	//size()
	int size() const { return used; }

	//bagCapacity()
	int bagCapacity() const { return capacity; }

private:
	E *data;            // an array of items
	int used;           // number of items the data array currently holds
	int capacity;       // the number of items the bag can hold (size of array)
};

#endif	/* ABAG_H */

