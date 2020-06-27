#include<iostream>
using namespace std;
void test (int x) throw (int,double)
{
	if(x==0)
	throw 'x';
	else if(x==1)
	throw x;
	else if(x==-1)
	throw 1.0;
	cout<<"end of func\n";
}
int main()
{
	try
	{
		cout<<"testing throwing restrictn \n";
		cout<<"x=0\n";
		test(0);
		cout<<"x=1\n";
		test(1);
		cout<<"x=-1\n";
		test(-1);
		cout<<"x=2\n";
		test(2);
	}
	catch(char c)
	{
		cout<<"caught char\n";
	}
	catch(int m)
	{
		cout<<"caught int\n";
	}
	catch(double d)
	{
		cout<<"caught double\n";
	}
	cout<<"end of syst\n\n";
	return 0;
}
