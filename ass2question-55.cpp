//C++ Program to Copy Strings from one file to another file.
#include<iostream>
using namespace std;
int main()
{
    char ch, sourceFile[20], targetFile[20];
    FILE *fs, *ft;
    cout<<"\n Enter the Name of Source File: ";
    cin>>sourceFile;
    fs = fopen(sourceFile, "r");
    if(fs == NULL)
    {
        cout<<"\n Error Occurred!";
        return 0;
    }
    cout<<"\n Enter the Name of Target File: ";
    cin>>targetFile;
    ft = fopen(targetFile, "w");
    if(ft == NULL)
    {
        cout<<"\n Error Occurred!";
        return 0;
    }
    ch = fgetc(fs);
    while(ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    cout<<"\n File copied successfully.";
    fclose(fs);
    fclose(ft);
    cout<<endl;
    return 0;
}
