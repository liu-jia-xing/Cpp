#include<string>
#include <iostream>
using namespace std;

void test01()
{
	string s1;	//�������ַ����������޲ι��캯��
	cout << "str1 = " << s1 << endl;

	const char* str = "hello,world";
	string s2(str);			//��c_string������string

	cout << "str2 = " << s2 << endl;
	string s3(s2);			//���ÿ������캯��
	cout << "str3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "str3 = " << s4 << endl;
}

int main()
{
	test01();
	system("pause");
}