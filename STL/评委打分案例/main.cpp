#include<iostream>
#include<vector>
#include<deque>
#include <algorithm>
#include<ctime>
using namespace std;

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};

void create_Person(vector<Person> &v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5;i++)
	{
		string name = "ѡ��";
		name += nameseed[i];
		int score = 0;
		Person p(name, score);
		/*��������Person���󣬷��뵽������*/
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;	
		for (int i = 0; i < 10; i++)
		{
			int score = rand()%41 + 60;
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		d.pop_front();
		d.pop_back();
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;	//�ۼ�ÿ����ί�ķ���
		}
		int avg = sum / d.size();
		it->m_Score = avg;
	}
}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������ " << it->m_Name << " ƽ���֣� " << it->m_Score << endl;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1������5��ѡ��
	vector<Person>v; //���ѡ������
	create_Person(v);
	//2����5��ѡ�ִ��
	setScore(v);
	//3����ʾ���÷�
	showScore(v);
	system("pause");
	return 0;
}