#include<iostream>
using namespace std;
class Person
{
	private:
	int static a;
	
	public:
	int t;
	Person()
	{
	t=a;
	 } 
		
	void show()
	{
	
	  cout<<a<<endl;
	}
 } ;
int Person::a=10;
 int main()
 {
 	Person x;
 	x.show();
	return 0;
 	
 }

