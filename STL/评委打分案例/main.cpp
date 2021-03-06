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
		string name = "选手";
		name += nameseed[i];
		int score = 0;
		Person p(name, score);
		/*将创建的Person对象，放入到容器里*/
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
			sum += *dit;	//累加每个评委的分数
		}
		int avg = sum / d.size();
		it->m_Score = avg;
	}
}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 平均分： " << it->m_Score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建5名选手
	vector<Person>v; //存放选手容器
	create_Person(v);
	//2、给5名选手打分
	setScore(v);
	//3、显示最后得分
	showScore(v);
	system("pause");
	return 0;
}