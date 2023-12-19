#include<iostream>
using namespace std;
class Volume 
{
public:
	int length;
	int width;
	int height;
	void set()
	{
		cout << "ÇëÊäÈë³¤¡¢¿í¡¢¸ß£º" << endl;
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void show()
	{
		cout << length * width * height << endl;
	}
};
int main()
{
	Volume v1;
	v1.set();
	v1.show();
	Volume v2;
	v2.set();
	v2.show(); 
	Volume v3;
	v3.set();
	v3.show();
	return 0;
}