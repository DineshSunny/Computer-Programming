#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//to read the array from file
int readSortedArray(ifstream &inFile, float *array, int N)
{
    //read the first number
    string num;
    inFile >> num;

    //if no records are present
    if (num == "")
        return 0;

    //convert it to float and assign it to 0th index
    float prev = stof(num);
    int index = 0; //index for array
    array[index++] = prev;

    //read the subsequent numbers
    while (inFile >> num)
    {
        float curr = stof(num); //current number
        //if order is non decreasing
        if (prev <= curr)
        {
            //if index goes out of bounds
            if (index < N)
            {
                array[index++] = curr; //assign the element
            }
            prev = curr;
        }
        //else return -1
        else
            return -1;
    }

    //return the no. of items read
    return index;
}

//create your own display function
void display(float *array, int n)
{
    cout << endl;
    if (n == 0)
    {
        cout << "File is empty!";
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    float array1[20], array2[30];

    //input the file name
    string inputFile;
    cout << "Enter the name of input file: ";
    cin >> inputFile;
    //open the file
    ifstream inFile(inputFile);

    //read the array
    int N1 = readSortedArray(inFile, array1, 20);
    if (N1 == -1)
        cout << "\nError! The file was not sorted!\n";
    else
    {
        display(array1, N1);
    }

    //close the input file
    inFile.close();
    //clearing the stream
    inFile.ignore();

    inFile.open(inputFile);                       //open the file again
    int N2 = readSortedArray(inFile, array2, 30); //read the array
    if (N2 == -1)
        cout << "\nError! The file was not sorted!\n";
    else
    {
        display(array2, N2);
    }
    //Note : if input file is larger than 30 the array would
    //store upto 30 elements only but the comparisons for
    //checking the sorted file must still be done even though
    //the array is filled.
    //while displaying only the first 30 values would be displayed.
    return 0;
}