#include<iostream>

int main(void)
{
	char name[100];
	char phone[100];

	std::cout << "�̸��� �Է��Ͻÿ� ";
	std::cin>>name;

	std::cout << "��ȣ�� �Է��Ͻÿ� ";
	std::cin >> phone;

	std::cout << "����� �̸��� " << name <<std::endl;
	std::cout << "����� ��ȣ�� " << phone;

	return 0;
}