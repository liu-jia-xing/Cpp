#include <set>
#include<iostream>

using namespace std;
void test01()
{
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}
	//multiset
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	pair<string, int>p(string("tom"), 20);
	cout << "����:" << p.first << "���䣺" << p.second << endl;
	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;
}