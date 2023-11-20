#include<iostream>
using namespace std;
int main()
{
	double a,x,t,x1;
	cin >> a;
	x = a;
	if (a < 0) {
		cout << "error" << endl;
	}
	do
	{
		x1 = (x + a / x) / 2;
		t = x;
		x = x1;
		x1 = t;
	}
	while (fabs(x - x1) > 1 / 100000);
	cout << x << endl;
	return 0;
}