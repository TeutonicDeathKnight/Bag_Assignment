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
	void clear() { dictionary->emptyBag(); }

	//insert()
	bool insert(const Key& k, const E& e) { return dictionary->addItem(KVpair<Key, E>(k, e)); }

	//remove()
	bool remove(const Key& k, E& rtnVal)
	{
		KVpair<Key, E> kvPair(k, rtnVal);
		if (dictionary->remove(kvPair))
		{
			rtnVal = kvPair.value();
			return true;
		}

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
		KVpair<Key, E> kvPair(k, returnValue);
		if (dictionary->find(kvPair))
		{
			returnValue = kvPair.value();
			return true;
		}

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

