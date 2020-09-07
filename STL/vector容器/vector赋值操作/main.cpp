#include<vector>
#include<iostream>
using namespace std;


void printVector(vector<int> & v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	vector<int> v1; //无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1 不为空" << endl;
		cout << "v1的容量 = "<<v1.capacity() << endl;
		cout << " v1的大小 = " << v1.size() << endl;
	}
	v1.resize(15,10);
	printVector(v1);
	v1.resize(5);
	printVector(v1);

}

int main()
{
	test01();
	system("pause");
}