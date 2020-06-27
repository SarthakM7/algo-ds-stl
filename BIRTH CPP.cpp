#include<iostream>
using namespace std;
class birthday
{
	int day,month,year;
	public:
	birthday(int d,int m,int y)
	{
		day=d;
		month=m;
		year=y;
	}
	void printdate()
	{
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}
};
class people
{
	string name;
	birthday birthdate;
	public:
	people(string x, birthday bo)
	:name(x), birthdate(bo)
	{
	}
	void printinfo()
	{
		cout<<name<<" was born on ";
		birthdate.printdate();
	}
		
};
int main()
{
	birthday birthobj(5,1,2000);
	people sarthak("sarthak mishra",birthobj);
	sarthak.printinfo();
}

