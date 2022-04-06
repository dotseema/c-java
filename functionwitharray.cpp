#include<iostream>
#include<string>
using namespace std;
string data_func(string names[5])
		{
			string studentname, data=" ";
			string college =" VJNT ";
			for(int i=0;i<5;i++)
				{
					studentname= names[i];
				    data = data + " \n " + studentname + " "+ college ;  // using concatination
				    data = studentname+ " " +college +" \n " +data;
				}			
			return data;			
		}

int main()
	{
		string name[5]={"tom","jerry","mickey","mini","duck"};
		string result = data_func(name);
		cout<<"\ndata return " << result <<endl;
		return 0;
	}
