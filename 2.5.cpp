#include<iostream>
using namespace std;
int main()
{
	char a;
	int eng = 0, num = 0, space = 0, other = 0;
	while ((a=getchar()) != '\n')
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
		{
			eng++;
		}
		else if (a >= '0' && a <= '9')
		{
			num++;
		}
		else if (a == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	cout << "\nӢ���ַ�" << eng << "\n����" << num << "\n�ո�" << space << "\n����" << other << endl;
	return 0;
		
}