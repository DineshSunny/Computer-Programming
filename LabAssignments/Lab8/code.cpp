#include<iostream>
#include<sstream>
#include <fstream>
#define MAXSIZE 1000 // max size of the array
using namespace std;

int arr[MAXSIZE]; // declaring a global array to store the integers read from file
int size = 0; // number of items read from the file and stored in the array

// method to read integers from the file
void readFile()
{
ifstream file;
file.open("input.txt"); // open the file in reading mode

if (file.is_open()) // if file is opened successfully then
{
string word;

while (file >> word) // read each value in the file
{

stringstream obj(word);
int x;
obj >> x; // convert current word to integer
arr[size++] = x; // storing the int value to the global array

}

file.close(); // close the filest

} else
{
cout << "Error in opening the file!!" << endl;
exit(0);
}
}

// main method
int main()
{
int item, accessCount = 0;

// accept an item from user
cout<<"Pleas enter a number for which a matching sum is needed: ";
cin>>item;


readFile(); // call the read file method

// loop through the array to find matching elements
for(int i = 0; i < size; i++)
{
for(int j = i+1; j < size; j++)
{
  
accessCount+=2; // 2 array access is needed so we should increment accessCount by 2
if(arr[i]+arr[j] == item) // if a match is found then
{
// print the results
cout<<"\nItem "<<i<<" (with value "<<arr[i]
<<" ) and item "<<j<<" (with value "<<arr[j]
<< " add upto "<<item<<endl;
cout<<accessCount<<" array items were accessed"<<endl;
exit(0); // and terminate the program
}
  
}
}

// if no match is found then
cout<<"\nNo matching sum is found"<<endl;   
cout<<accessCount<<" array items were accessed"<<endl;
return 0;
}