#include<iostream>
using namespace std;
int main()
{
	char p;
	cout << "�����������" << endl;
	cin >> p;
	float num1, num2;
	cout << "����������" << endl;
	cin >> num1 >> num2;
	switch (p)
	{
	case'+':
		cout << num1 + num2;
		break;
	case'-':
		cout << num1 - num2;
		break;
	case'*':
		cout << num1 * num2;
		break;
	case'/':
		if (num2 == 0)
		{
			cout << "��������Ϊ0";
			break;
		}
		else
		{
			cout << num1 / num2;
			break;
		}
	case'%':
		if (num2 == 0)
		{
			cout << "��������Ϊ0";
			break;
		}
		else
		{
			cout << int(num1) % int(num2);
			break;
		}
	default:
		cout << "������Ƿ�";
		break;
	}
}