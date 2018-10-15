#include<iostream>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
string stdName[5];
int stdID[5];
int stdAge[5];
char stdGend[5];
double stdSc[5];
char stdGr[5];
cout<<"Input the students names respectively and press enter"<<endl;
for(int i=0;i<=4;i++)
cin>>stdName[i];
cout<<"Input the students ID numbers respectively"<<endl;
for(int k=0;k<=4;k++)
cin>>stdID[k];
cout<<"Input the ages of the students respectively"<<endl;
for(int l=0;l<=4;l++)
cin>>stdAge[l];
cout<<"Input their genders respectively"<<endl;
for(int m=0;m<=4;m++)
cin>>stdGend[m];
cout<<"Input their scores respectively"<<endl;
for(int n=0;n<=4;n++)
cin>>stdSc[n];
cout<<"Input their grade respectively"<<endl;
for(int o=0;o<=4;o++)
cin>>stdGr[o];


ofstream std;
std.open("new.txt");
std<<"ID number"<<"\tName"<<"\tAge"<<"\tGender"<<"\tGrade"<<endl;
for(int i=0;i<=4;i++)
    std<<stdID[i]<<"\t\t"<<stdName[i]<<"\t"<<stdAge[i]<<"\t"<<stdGend[i]<<"\t"<<stdGr[i]<<endl;

return 0;

	
}
