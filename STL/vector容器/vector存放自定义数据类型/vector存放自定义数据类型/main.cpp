#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Person {
public:
	Person(string name, int age)
	{
		mName = name;
		mAge = age;
	}
public:
	string mName;
	int mAge;
};

void test01()
{
	vector<Person> v;
	/*创建数据*/
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	/*存放对象*/
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	/*遍历对象*/
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name = " << (*it).mName << " age = " << (*it).mAge << endl;
	}
}

int main()
{
	test01();
	system("pause");
}