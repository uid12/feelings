#include <iostream>
#include <string>
using namespace std;

static float classmoney;
static int i = 1;
static	string name[100];
class student {

public:
	student()
	{
		classmoney = 1000;
	}
	static void initstudent()
	{
		cin >> name[i];
		//name[i] = n;
		++i;
	}
	void showmoney()
	{
		cout << "目前余额为" << classmoney << endl;
	}
	void expendmoney(float n)
	{
		classmoney = classmoney - n;
		cout <<name[i] <<"花费了" << n << endl;
	}
};
int main()
{
	student A, B, C;
	A.initstudent();
	A.expendmoney(50);
	A.showmoney();
	B.initstudent();
	B.expendmoney(98.5);
	B.showmoney();
	C.initstudent();
	C.expendmoney(500.53);
	C.showmoney();

	return 0;
}