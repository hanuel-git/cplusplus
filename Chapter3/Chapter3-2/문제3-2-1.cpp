#include<iostream>
using namespace std;

class Calculator
{
private:
	int add_num;
	int min_num;
	int mul_num;
	int div_num;
public:
	void Init()
	{
		add_num = 0;
		min_num = 0;
		mul_num = 0;
		div_num = 0;
	};

	double Add(double a, double b)
	{
		add_num++;
		return a + b;
	}

	double Min(double a, double b)
	{
		min_num++;
		return a - b;
	}

	double Mul(double a, double b)
	{
		mul_num++;
		return a * b;
	}

	double Div(double a, double b)
	{
		div_num++;
		return a / b;
	}

	void ShowOpCount()
	{
		cout << "µ¡¼À : " << add_num << endl;
		cout << "»¬¼À : " << min_num << endl;
		cout << "°ö¼À : " << mul_num << endl;
		cout << "³ª´°¼À : " << div_num << endl;
	}

};

int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}