#include<string>
#include<iostream>

using namespace std;


void test01()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;
	str.erase(1,3);
	cout << str << endl;
}

void test02()
{
	string str = "abcdefg";
	string substr = str.substr(1,3);
	cout << "substr = " << substr << endl;
	string email = "hello#sina.com";
	int pos = email.find("@");
	string username = email.substr(0,pos);
	cout << "username :" << username << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}