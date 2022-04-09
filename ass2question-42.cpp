//C++ Program to Find Largest Element of an Array.
#include<iostream>
using namespace std;
int main()
   {
   	   int array1[5]={ 422, 275, 715, 556, 299};   	 
   	   int max;   	  
   	    for (int i=0; i<5; i++)
   	      {
   	      	 if( max< array1[i] )
   	      	    { 
   	      	        max= array1[i];
				}
		  }
		cout<<"\n the maximum element is : " << max <<endl;		  
		return 0;
   }
