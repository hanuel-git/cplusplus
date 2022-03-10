#include<iostream>
using namespace std;

class Rectangle
{
private:
	int len;
	int bre;
public:
	Rectangle(int l, int b)
		: len(l), bre(b)
	{ }
	void ShowAreaInfo()
	{
		cout << "¸éÀû : " << len * bre << endl;
	}
};

class Square : public Rectangle
{
public:
	Square(int a)
		: Rectangle(a, a)
	{ }
};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}