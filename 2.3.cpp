#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float p;
	p = a + b + c;
	if (a + b > c && a - b < c)
	{
		cout << p;
	
		if (a == b || b == c || a == c)
			cout << "���������ǵ���������" << endl;
		else
			cout << "�������β��ǵ���������" << endl;
	}
	else
		cout << "���߹�����������" << endl;

	return 0;



}