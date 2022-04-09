//C++ Program to Add Two Matrix Using Multi-dimensional Arrays
#include <iostream>
using namespace std;
int main()
 {
   int r=2, c=3, sum[2][3], i, j;
   int a[2][3] = {{1,5,9,} , {3,2,8,}};
   int b[2][3] = {{6,3,8,} , {1,5,2,}};
   cout<<"\n The first matrix is : "<<endl;
   for(i=0; i<r; ++i) 
    {
      for(j=0; j<c; ++j)
      cout<<a[i][j]<<" ";
      cout<<endl;
    }
   cout<<endl;
   cout<<"\n The second matrix is : "<<endl;
   for(i=0; i<r; ++i)
    {
      for(j=0; j<c; ++j)
      cout<<b[i][j]<<" ";
      cout<<endl;
    }
   cout<<endl;
   for(i=0;i<r;++i)
   for(j=0;j<c;++j)
   sum[i][j]=a[i][j]+b[i][j];
   cout<<"\n Sum of the two matrices is : "<<endl;
   for(i=0; i<r; ++i) 
    {
      for(j=0; j<c; ++j)
      cout<<sum[i][j]<<" ";
      cout<<endl;
    }
   return 0;
}

