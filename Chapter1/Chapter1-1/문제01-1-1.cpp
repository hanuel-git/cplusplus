#include<iostream>

int main(void)
{
	int num1, num2, num3, num4, num5;

	for (int i = 0; i < 5; i++)
	{
		std::cout <<i+1<<"��° ���� �Է� : ";
		std::cin >> num1;
	}

	int sum;
	sum = num1 + num2 + num3 + num4 + num5;
	std::cout << "�հ� : " << sum;

	return 0;
}