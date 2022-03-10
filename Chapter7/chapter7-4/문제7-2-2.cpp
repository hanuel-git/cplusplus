#include<iostream>
#include<cstring>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* t, const char* i, int p)
		: price(p)
	{
		int len1 = strlen(t) + 1;
		title = new char[len1];
		strcpy_s(title, len1, t);

		int len2 = strlen(i) + 1;
		isbn = new char[len2];
		strcpy_s(isbn, len2, i);
	}
	void ShowBookInfo()
	{
		cout << "제목 : " << *title << endl;
		cout << "ISBN : " << *isbn << endl;
		cout << "가격 : " << price << endl;
	}
	~Book()
	{
		delete[]isbn;
		delete[]title;
	}
};

class EBook : public Book
{
private:
	char* DRMKey;
public:
	EBook(const char* t, const char* i, int p, const char* d)
		: Book(t, i, p)
	{
		int len = strlen(d) + 1;
		DRMKey = new char[len];
		strcpy_s(DRMKey, len, d);
	}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키 : " << *DRMKey << endl;
	}
	~EBook()
	{
		delete[]DRMKey;
	}
};

int main()
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;

	EBook ebook("좋은 C++", "555-12345-890-1", 10000, "fdx9w018kiw");
	ebook.ShowEBookInfo();
	return 0;
}