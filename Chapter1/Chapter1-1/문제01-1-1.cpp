#include<iostream>

int main(void)
{
	int num1, num2, num3, num4, num5;

	for (int i = 0; i < 5; i++)
	{
		std::cout <<i+1<<"번째 정수 입력 : ";
		std::cin >> num1;
	}

	int sum;
	sum = num1 + num2 + num3 + num4 + num5;
	std::cout << "합계 : " << sum;

	return 0;
}