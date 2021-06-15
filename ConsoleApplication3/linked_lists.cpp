#include "linked_lists.h"
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