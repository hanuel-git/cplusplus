#include<iostream>

int main(void)
{
	int num;

	std::cout << "���ڸ� �Է��Ͻÿ� : ";
	std::cin >> num;

	for (int i = 0; i < 9; i++)
	{
		std::cout << num << 'x' << i + 1 << '=' << num * (i + 1) << std::endl;
	}

	return 0;
}