#include <iostream>
#include "linked_lists.cpp"
using namespace std;
int main()
{
	linked_lists<int> ahmed;
	ahmed.Append(10);
	cout << ahmed.At(0);
}
