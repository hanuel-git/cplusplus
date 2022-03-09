#include<iostream>
#include<stdio.h>
using namespace std;

class Printer
{
private:
	char* ch;
public:
	void SetString(char* ch);
	void ShowString();
};

void Printer::SetString(char* input)
{
	ch = input;
};

void Printer::ShowString()
{
	cout << ch << endl;
};

int main()
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}