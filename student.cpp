#include<iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value()
{
	cout << "num:";
	cin >> num;
	cout << "name:";
	cin >> name;
	cout << "sex:";
	cin >> sex;
}