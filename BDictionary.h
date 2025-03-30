/*
* File:   BDictionary.h -- implement a dictionary use an array-based bag
* Author: Prof Terri Sipantzi
*
* You may use this template to implement your Dictionary
*/

#ifndef BDICTIONARY_H
#define	BDICTIONARY_H

#include "ABag.h"
#include "dictionaryADT.h"
#include "kvpair.h"

template <typename Key, typename E>
class BDictionary : public Dictionary<Key, E> {
public:
	// constructors/destructor
	BDictionary(size_t size=20)	// Default constructor | default value is arbitrarily chosen
	{
		dictionary = new ABag<KVpair<Key, E>>((int)size);
	}			
	~BDictionary() { delete dictionary; }			// Base destructor
	
	// methods: clear, insert, remove, removeAny, find, size, etc.

	//clear()
	void clear()
	{

	}

	//insert()
	bool insert(const Key& k, const E& e)
	{


		return false;
	}

	//remove()
	bool remove(const Key& k, E& rtnVal)
	{


		return false;
	}

	//removeAny()
	bool removeAny(E& returnValue)
	{


		return false;
	}

	//find()
	bool find(const Key& k, E& returnValue) const
	{


		return false;
	}

	//size()
	int size() { return dictionary->size(); }

private:
	//Pointer to a ABag object.  You'll need to instantiate the bag in your constructor:
	// dictionary = new ABag<KVpair<Key, E>>(size) or something similar depending on how
	// you've implemented your ABag constructor(s).
	//This pointer gives you access to the bag which stores your data and provides the 
	//functions you need to build your dictionary.
	ABag<KVpair<Key, E>>* dictionary;
};


#endif	/* BDICTIONARY_H */

