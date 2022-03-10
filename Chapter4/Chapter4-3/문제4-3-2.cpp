//#pragma warning(disable: 4996)
#include<iostream>
#include<cstring>
using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK = 0,
		SENIOR = 1,
		ASSIST = 2,
		MANAGER = 3
	};
}

class NameCard
{
private:
	char* Name;
	char* Company;
	char* Phone;
	int Rule;
public:
	NameCard(char* n, char* c, char* p, int r)
	{
		int len = strlen(n) + 1;
		Name = new char[len];
		strcpy_s(Name, len, n);

		len = strlen(c) + 1;
		Company = new char[len];
		strcpy_s(Company, len, c);

		len = strlen(p) + 1;
		Phone = new char[len];
		strcpy_s(Phone, len, p);

		Rule = r;
	}
	void ShowNameCardInfo()
	{
		cout << "이름 : " << Name << endl;
		cout << "회사 : " << Company << endl;
		cout << "전화번호 : " << Phone << endl;
		cout << "직급 : " << Rule << endl;
	}
};

int main()
{
	NameCard manClerk("LEE", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}