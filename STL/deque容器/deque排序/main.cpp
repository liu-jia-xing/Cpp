#include<deque>
#include<iostream>
#include<algorithm>
using namespace std;
void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(30);
	d.push_front(40);
	printDeque(d);
	sort(d.begin(),d.end());
	printDeque(d);
}

int main()
{
	test01();
	system("pause");
	return 0;
}