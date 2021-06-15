#pragma once
template <class T >
class node
{
public:
	T value;
	node* next;
	node(T);
};
template <class T >
class linked_lists
{
private :
	node<T>* head;
	node<T>* tail;
	int elements;
public :
	linked_lists();
	int Lenght();
	void Append(T);
	T At(int);
	/*void InsertAt(int);
	void DeleteAt(int);*/
};

