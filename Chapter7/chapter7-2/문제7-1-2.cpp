#include<iostream>
#include<cstring>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* inname, int inage) : age(inage)
	{
		int len = strlen(inname) + 1;
		name = new char[len];
		strcpy_s(name, len, inname);
	}
	~MyFriendInfo()
	{
		delete[]name;
	}
	void ShowMyFriendInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* inname, int inage, const char* addr, const char* phone)
		: MyFriendInfo(inname, inage)
	{
		int len1 = strlen(addr) + 1;
		this->addr = new char[len1];
		strcpy_s(this->addr, len1, addr);
		int len2 = strlen(phone) + 1;
		this->phone = new char[len2];
		strcpy_s(this->phone, len2, phone);
	}
	~MyFriendDetailInfo()
	{
		delete[]addr;
		delete[]phone;
	}
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "전화 : " << phone << endl << endl;
	}
};

int main()
{
	MyFriendDetailInfo f("KIM", 21, "SEOUL", "01040667523");
	f.ShowMyFriendDetailInfo();
	return 0;
}