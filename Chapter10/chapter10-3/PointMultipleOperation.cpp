#include<iostream>
using namespace std;

class point
{
private:
	int xpos, ypos;
public:
	point(int x=0, int y=0) : xpos(x), ypos(y)
	{ }
	void showposition() const
	{
		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
	}
	point operator*(int times)
	{
		point pos(xpos * times, ypos * times);
		return pos;
	}
};

int main()
{
	point pos(1, 2);
	point cpy;

	cpy = pos * 3;
	cpy.showposition();

	cpy = pos * 3 * 2;
	cpy.showposition();
	return 0;
}