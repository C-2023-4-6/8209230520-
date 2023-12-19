#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int newx, int newy) {
		x = newx;
		y = newy;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display();
};
void Point::display()
{
	cout<<x<<" "<<y<<endl;
}
int main()
{
	int i, j;
	cin >> i >> j;
	Point a(60,80);
	a.setPoint(i, j);
	a.display();
	return 0;


}