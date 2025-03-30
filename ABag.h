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

		return false;
	}

	//removeTop()
	bool removeTop(E& returnValue)
	{

		return false;
	}

	//find()
	bool find(E& returnValue) const
	{
		for (int i = 0; i < used; i++)
		{
			if (data[i] == returnValue)
			{
				returnValue = data[i];
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

