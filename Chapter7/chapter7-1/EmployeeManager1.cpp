#include<iostream>
#include<cstring>
using namespace std;

// �������� ���� ����
// ����� ������ ���ؼ� ���Ͽ� ������ �����͸� ������ ����
class PermanentWorker
{
private:
	char name[100];
	int salary;
public:
	PermanentWorker(const char* name, int money)
		: salary(money)
	{
		int len = strlen(name) + 1;
		strcpy_s(this->name, len, name);
	}
	int Getpay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << Getpay() << endl << endl;
	}
};

// ����� ���� ���� (=> ��Ʈ�� Ŭ����, �ڵ鷯 Ŭ����)
// ���α׷��� �����ϴ� ��ǥ���� ~��ɵ��� ó��
class EmployeeHandler
{
private:
	PermanentWorker* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->Getpay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main()
{
	//���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// ���� ���
	handler.AddEmployee(new PermanentWorker("Kim", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}