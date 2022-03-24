#include<iostream>
using namespace std;
int main()
   {
   	    int num[5];
   	    cout<<" enter the 5 numbers " << endl;
   	    // store the input from the user
   	    for(int i=0;i<5;i++)
   	       {
   	       	  int x;
   	       	  cin>>x;
   	       	  num[i]=x;
			}
	    cout<<" the numbers are :" ;
	    //print array element
	    for(int j=0;j<5;j++)
	        {
	        	  cout<< num[j]<<" " ;

			}
		return 0;
   }
