//write a programme in c++ to calculate the volume of sphere.
#include <iostream>
using namespace std;
    int main()
    {
    	int rad1;
    	float volumesphere;		
        cout<<" \n enter the radius of a sphere : ";
    	cin>>rad1;
    	volumesphere=(4*3.14*rad1*rad1*rad1)/3;
        cout<<" \n The volume of a sphere is : "<< volumesphere << endl;
        cout << endl;
        return 0;
    }
