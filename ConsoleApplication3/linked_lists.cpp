#include "linked_lists.h"
#include <assert.h>
template <class T>
node<T>::node(T value)
{
	next = nullptr;
	this->value = value;
}
template <class T>
linked_lists<T>::linked_lists()
{
	head = tail = nullptr;
	elements = 0;
}
template <class T>
int linked_lists<T>::Lenght()
{
	return elements;
}
template <class T>
T linked_lists<T> ::At(int x)
{
	node<T>* tmp = head;
	for (int i = 0; i < x; i++)
	{
		tmp = tmp->next;
	}
	return tmp->value;
}
template <class T>
void linked_lists<T> :: Append(T newValue)
{
	node<T>* tmp = new node<T>(newValue);
	tmp->value = newValue;
	if (elements == 0)
		tail = head = tmp;
	else
	{
		tail->next= tmp;
		tail = tail->next;
	}
	elements++;
}
template <class T>
void linked_lists <T>::InsertAt(int index, T newValue)
{
	assert(index >= 0 && index < elements);
	node<T>* tmp = head;
	node<T>* newNode = new node<T>(newValue);
	if (index == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		for (int i = 0; i < index-1; i++)
			tmp = tmp->next;
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	elements++;
}
template <class T>
void linked_lists<T>::DeleteAt(int index)
{
	assert(index >= 0 && index < elements);
	node<T>* tmp = head;
	if (index == 0)
	{
		head = head->next;
		delete tmp;
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
			tmp = tmp->next;
		node<T>* del = tmp->next;
		tmp->next = del->next;
		delete del;
		if (index == elements - 1)
			tail = tmp;
	}
	elements--;
}