#include<iostream>
#include<deque>
#include <algorithm>
using namespace std;

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int>d2;
	d2 = d1;
	printDeque(d2);
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);
	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);
}

void test02()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	//判断容器是否为空
	if (d1.empty()) {
		cout << "d1为空!" << endl;
	}
	else {
		cout << "d1不为空!" << endl;
		//统计大小
		cout << "d1的大小为：" << d1.size() << endl;
	}
	//重新指定大小
	d1.resize(15, 1);
	printDeque(d1);
	d1.resize(5);
	printDeque(d1);
}
void test03(){
	/*排序*/
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);
	sort(d.begin(), d.end());
	printDeque(d);
}
int main()
{
//	test01();
	test02();
	system("pause");
	return 0;
}