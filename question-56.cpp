// write a programme in c++ to calculate the area of hexagoan
#include<iostream>
#include<cmath>

using namespace std;
int main()
	{
		float side , area ;
		cout<<"\n enter the valute for side of hexagoan : ";
		cin>>side;
		area = ( 6*(side*side))  / (4*tan(M_PI/6));
		cout<<"\n area of hexagoan is = "<< area << endl;
		return 0;
	}
