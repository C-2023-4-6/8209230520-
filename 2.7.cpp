#include<iostream>
using namespace std;
int main()
{
	char c = '*';
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << c;
		}
		cout << endl;
	}
	return 0;
}