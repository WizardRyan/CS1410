#pragma once
#include <string>
#include <iostream>
#include <cassert>
#include "Person.h"

using namespace std;

class List;
class Iterator;

class Node
{
public:
	/**
	Constructs a node with a given data value.
	@param s the data to store in this node
	*/
	Node(Person* s);
private:
	Person* data;
	Node* previous;
	Node* next;
	friend class List;
	friend class Iterator;
};

class List
{
public:
	/**
	Constructs an empty list;
	*/
	List();
	/**
	Appends an element to the list.
	@param data the value to append
	*/

	//the get_size function, gets the size of the list
	//no parameters
	//returns an int designating the size of the list
	int get_size();

	void push_back(Person* data);
	/**
	Inserts an element into the list.
	@param iter the position before which to insert
	@param s the value to append
	*/
	void insert(Iterator iter, Person* s);
	/**
	Removes an element from the list.
	@param iter the position to remove
	@return an iterator pointing to the element after the
	erased element
	*/
	Iterator erase(Iterator iter);
	/**
	Gets the beginning position of the list.
	@return an iterator pointing to the beginning of the list
	*/
	Iterator begin();
	/**
	Gets the past-the-end position of the list.
	@return an iterator pointing past the end of the list
	*/
	Iterator end();

private:
	Node* first;
	Node* last;
	friend class Iterator;
};

class Iterator
{
public:
	/**
	Constructs an iterator that does not point into any list.
	*/
	Iterator();
	/**
	Looks up the value at a position.
	@return the value of the node to which the iterator points
	*/
	Person* get() const;
	/**
	Advances the iterator to the next node.
	*/
	void next();
	/**
	Moves the iterator to the previous node.
	*/
	void previous();
	/**
	Compares two iterators
	@param b the iterator to compare with this iterator
	@return true if this iterator and b are equal
	*/
	bool equals(Iterator b) const;
private:
	Node* position;
	List* container;
	friend class List;
};