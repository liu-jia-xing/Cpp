#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


void printlist(const list<int> &L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printlist(L1);
	
	list<int>L2;
	L2 = L1;
	printlist(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printlist(L3);

	list<int>L4;
	L4.assign(10, 100);
	printlist(L4);
}

void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	list<int>L2;
	L2.assign(10, 100);
	cout << "����ǰ�� " << endl;
	printlist(L1);
	printlist(L2);
	cout << endl;
	L1.swap(L2);
	cout << "������ " << endl;
	printlist(L1);
	printlist(L2);
}

int main()
{
	test01();
	system("pause");
}