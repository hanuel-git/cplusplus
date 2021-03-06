#include<iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x=0, T y=0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
	}

	friend Point<int>operator+(const Point<int>&)
};