//write a programme in c++ to calculate the volume of sphere
#include<iostream>
using namespace std;
int main()
	{
		int radius, height;
		float volumecylinder;
		cout<<"\n enter the radius of cylinder : " ;
		cin>> radius;
		cout<<"\n enter the height of cylinder : " ;
		cin>> height;
		volumecylinder=(3.14*radius*radius*height);
		cout<<"\n the volume of cylinder is : " << volumecylinder << endl;
		return 0;
	 } 
