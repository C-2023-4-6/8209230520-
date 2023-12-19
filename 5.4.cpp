#include<iostream>
#include<string>
using namespace std;
class Score
{
public:
	Score() {}
	Score(string n, double s) :no(n), score(s) {}
	string no;
	double score;
};
void max(Score* p)
{
	Score* t, * s;
	double max;
	for (t = p, s = t, max = t->score; t < (p + 5); t++)
	{
		if (t->score > max)
		{
			max = t->score;
			s = t;
		}
	}
	cout << "成绩最高者学号为：" << s->no << endl;
}
int main()
{
	Score s[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i].no >> s[i].score;
	}
	max(s);
	return 0;
}