#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void my_print(int val)
{
	cout << val << endl;
}

void test01()
{
	/*创建verco人容器对象，通过模板参数指定存放的数据类型*/
	vector<int > v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	/*v.begin 返回容器中的第一个数据*/
	/*v.end返回容器中的最后一个数据的下一个位置*/
	/*vector<int>::iterator拿到vercor<int>这种类型的迭代器类型*/
	vector<int>::iterator pBegin = v.begin();
	vector<int> ::iterator pEnd = v.end();
	/*第一种遍历方式*/
	while (pBegin != pEnd)
	{
		cout << *pBegin ;
		pBegin++;
	}
	cout << endl;
	/*第二种遍历方式*/
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it;
	}
	cout << endl;
	/*第三种遍历方式，使用stl标准算法*/
	for_each(v.begin(), v.end(), my_print);
}

int main()
{
	test01();
	system("pause");
	return 0;
}