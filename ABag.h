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
		capacity = cap;				//Initialize capacity member variable to passed in value
		data = new E[capacity];		//Initialize data member variable to array of size capacity
		used = 0;					//Initialize used member variable to 0 indicating nothing is in the array
	}

	~ABag()
	{
		for (int i = 0; i < used; i++)
		{
			data[i] = NULL;
		}

		delete data;

		used = NULL;

		capacity = NULL;
	}

	//addItem()
	bool addItem(const E& item)
	{
		bool returnBool = false;

		if (used < capacity)
		{
			data[used] = item;
			used++;
			returnBool = true;
		}
		
		return returnBool;
	}

	//remove()
	bool remove(E& item)
	{
		bool returnBool = false;

		return returnBool;
	}

	//removeTop()
	bool removeTop(E& returnValue)
	{
		bool returnBool = false;

		return returnBool;
	}

	//find()
	bool find(E& returnValue) const
	{
		bool returnBool = false;

		return returnBool;
	}

	//inspectTop()
	bool inspectTop(E& item) const
	{
		bool returnBool = false;

		return returnBool;
	}

	//emptyBag()
	void emptyBag()
	{

	}

	//operator+=
	bool operator+=(const E& addend)
	{
		bool returnBool = false;

		return returnBool;
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

