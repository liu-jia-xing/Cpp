#include<iostream>
#include<stack>

using namespace std;

void test01()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);

	while (!s.empty())
	{
		//���ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
		//����ջ��Ԫ��
		s.pop();	
	}
	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}