#include<iostream>
using namespace std;

class Point
{
private:
	int xpos;
	int ypos;
public:
	Point(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point m;
	int r;
public:
	Circle(int x, int y, int a)
		: m(x,y), r(a)
	{}
	void ShowCircleInfo() const
	{
		cout << "radius: " << r << endl;
		m.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle in;
	Circle out;
public:
	Ring(int in_x, int in_y, int in_r, int out_x, int out_y, int out_r)
		:in(in_x, in_y, in_r), out(out_x, out_y, out_r)
	{}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		in.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		out.ShowCircleInfo();
	}
};

int main()
{
	Ring ring(1,1,4,2,2,9);
	ring.ShowRingInfo();

	return 0;
}