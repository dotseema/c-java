#include<iostream>
#include<string>
using namespace std;
string data_func()
		{
			string studentname;
			cout<<"\n please enter the details of students ";
			cout<<"\n enter the student name : ";
			cin>> studentname;
			string college =" VJNT ";
			string data = studentname + " "+ college;
			return data;
			
		}

int main()
	{
		string name[5]={"tom","jerry","mickey","mini","duck"}
		string result = data_func();
		cout<<"\ndata return " << result <<endl;
		return 0;
	}
