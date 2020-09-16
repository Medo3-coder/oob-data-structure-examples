
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class triangle
{
	private :
	
	float base ;
	float height ;
	
	
	public :
	
	void setBase_height(float b , float h)
	{
		base = b ;
		height = h ;
		
	}
	
	float area()
	{
		return 0.5*base*height ;
	}
	
	void print()
	{
		cout<<"base = " <<base <<"\n"
		<<" height = " <<height<<"\n"
		<<"area = " <<area()<<endl;
	}	
		
	};
	
	
	int main()
	{
		triangle c ;
		c.setBase_height(5,3);
		cout<<c.area()<<endl;
		c.print();
	}
