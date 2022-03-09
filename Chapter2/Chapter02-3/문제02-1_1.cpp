#include<iostream>
using namespace std;

void ADD(int& ref)
{
	ref++;
}

void CHANGE(int& ref)
{
	ref = 0 - ref;
}

int main()
{
	int num = 3;

	ADD(num);
	cout << num << endl;

	CHANGE(num);
	cout << num << endl;

	return 0;
}