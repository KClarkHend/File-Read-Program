/*Keyana Clark-Henderson
CS 2, Section #0123
Assignment 0, Problem 2
Write a program that reads  a file, prices.txt, into an integer  array of size  15. The program must have a void function called  readPrices  that takes in two arguments:   an ifstream object for the input file and an integer  array.  There  must also  be a void function called  displayPrices  that  takes in an integer  array and array size as inputs.*/

//preprocessor directives
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void readPrices(ifstream& inFile, int array[]);
void displayPrices(int arr[], int);

int main()
 {
  ifstream inFile;
  

  inFile.open("prices.txt");// Opens file
  int array[15];
  int size=15;

  if (!inFile.is_open())//Confirms if file is found
  {
    cout<<" File not found"<<endl;
  }
  else
  {
    cout<<" File found"<<endl;
  }

  readPrices(inFile,array);
  inFile.close(); //Closes file

  displayPrices(array,size);//prints values in array

  return 0;
}
void readPrices(ifstream& inFile, int array[])
{

  for(int i=0; i<15 ;i++)
  {
    inFile>>array[i];
  }
}
void displayPrices(int arr[], int )
{
  cout<<" The prices for the 15 rows are: "<<endl;
  for(int i=0; i<15;i++)
  {
    cout<<" $ "<< arr[i]<<endl;
  }
}