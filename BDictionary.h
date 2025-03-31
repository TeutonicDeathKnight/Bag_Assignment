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
	//Base constructor | default value is arbitrarily chosen
	//	Create ABag object for dictionary 4member variable using passed in or default size parameter
	BDictionary(size_t size=20)	{ dictionary = new ABag<KVpair<Key, E>>((int)size); }

	// Base destructor
	~BDictionary() { delete dictionary; }

	//clear()
	void clear() { dictionary->emptyBag(); }	//call dictionary's function emptyBag to clear the dictionary

	//insert()
	//	insert passed in values to dictionary using dictionary->addItem()
	//	return the true/false value based on the success of the function call
	bool insert(const Key& k, const E& e) { return dictionary->addItem(KVpair<Key, E>(k, e)); }

	//remove()
	//	remove a dictionary entry based on passed in parameter values
	bool remove(const Key& k, E& rtnVal)
	{
		KVpair<Key, E> kvPair(k, rtnVal);	//Create KVpair object to pass to dictionary->remove()
		if (dictionary->remove(kvPair))		//if dictionary->remove() is successful...
		{
			rtnVal = kvPair.value();		//set rtnVal function parameter to deleted KVpair value
			return true;
		}

		return false;
	}

	//removeAny()
	//	remove an arbitrarily chosen dictionary entry
	//		the top (most recently added and existing) entry is chosen
	//		simply because the top value can and is an arbitrary item
	bool removeAny(E& returnValue)
	{
		KVpair<Key, E> kvPair;				//Create KVpair object to pass to dictionary->removeTop()
		if (dictionary->removeTop(kvPair))	//if dictionary->removeTop() is successful...
		{
			returnValue = kvPair.value();	//set returnValue function parameter to deleted KVpair value
			return true;
		}

		return false;
	}

	//find()
	//	find dictionary entry based on passed in parameter values
	bool find(const Key& k, E& returnValue) const
	{
		KVpair<Key, E> kvPair(k, returnValue);	//Create KVpair object to pass to dictionary->find()
		if (dictionary->find(kvPair))			//if dictionary->find() is successful...
		{
			returnValue = kvPair.value();		//set returnValue function parameter to deleted KVpair value
			return true;
		}

		return false;
	}

	//size()
	//	return the size of the dictionary
	int size() { return dictionary->size(); }	//return the value given by the dictionary->size() function

private:
	//Pointer to a ABag object.  You'll need to instantiate the bag in your constructor:
	// dictionary = new ABag<KVpair<Key, E>>(size) or something similar depending on how
	// you've implemented your ABag constructor(s).
	//This pointer gives you access to the bag which stores your data and provides the 
	//functions you need to build your dictionary.
	ABag<KVpair<Key, E>>* dictionary;
};


#endif	/* BDICTIONARY_H */

