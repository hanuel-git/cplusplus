#include<iostream>

int main(void)
{
	char name[100];
	char phone[100];

	std::cout << "이름을 입력하시오 ";
	std::cin>>name;

	std::cout << "번호를 입력하시오 ";
	std::cin >> phone;

	std::cout << "당신의 이름은 " << name <<std::endl;
	std::cout << "당신의 번호는 " << phone;

	return 0;
}