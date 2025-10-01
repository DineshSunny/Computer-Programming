#ifndef READ_SORTED_H
#define READ_SORTED_H
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
class ReadSorted {
public:
int readSortedArray(float arr[],int n,std::ifstream &file)
{
char ch[10];
int i=0;
file.getline(ch, 100);
arr[0] = atof(ch); //first item in array
for(i=1;i<n&&!file.eof();i++)
{
file.getline(ch, 100);
arr[i] = atof(ch);
if(arr[i]<arr[i-1]&&arr[i]!=0)
{
cout<<"File was not sorted"<<endl;
return -1;
}
}
display(arr,i);
}
void display(float arr[], int n)
{
cout<<"Array : "<<endl;
for(int i=0;i<=n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}
};
#endif