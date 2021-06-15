#include <iostream>
#include "linked_lists.cpp"
using namespace std;
int main()
{
	linked_lists<int> ahmed;
	for (int i = 0; i <= 50; i++)
		ahmed.Append(i);
	ahmed.DeleteAt(15);
	for (int i = 0; i < ahmed.Lenght(); i++)
		cout << ahmed.At(i)<<endl;
}
