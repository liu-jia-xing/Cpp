#include<list>
#include<iostream>
#include<algorithm>
using namespace std;

void printList(const list<int> &L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool mycompare(int val1, int val2)
{
	return val1 > val2;
}

void test01()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);

	printList(L);
	//��ת������Ԫ��
	L.reverse();
	printList(L);
	//����
	L.sort(); //Ĭ�ϵ�������� ��С����
	printList(L);
	L.sort(mycompare); //ָ�����򣬴Ӵ�С
	printList(L);
}

int main()
{
	test01();
	system("pause");
}