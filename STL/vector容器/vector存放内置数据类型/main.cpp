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
	/*����verco����������ͨ��ģ�����ָ����ŵ���������*/
	vector<int > v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	/*v.begin ���������еĵ�һ������*/
	/*v.end���������е����һ�����ݵ���һ��λ��*/
	/*vector<int>::iterator�õ�vercor<int>�������͵ĵ���������*/
	vector<int>::iterator pBegin = v.begin();
	vector<int> ::iterator pEnd = v.end();
	/*��һ�ֱ�����ʽ*/
	while (pBegin != pEnd)
	{
		cout << *pBegin ;
		pBegin++;
	}
	cout << endl;
	/*�ڶ��ֱ�����ʽ*/
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it;
	}
	cout << endl;
	/*�����ֱ�����ʽ��ʹ��stl��׼�㷨*/
	for_each(v.begin(), v.end(), my_print);
}

int main()
{
	test01();
	system("pause");
	return 0;
}