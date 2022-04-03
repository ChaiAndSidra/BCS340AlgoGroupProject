//***********************************************************************************************
// 
// Developer(s): Sidra Naru, Alexander Kowalski, Tanzina Hoque
// Project: Group assignement related to different sorting algorithms
// Date: 03 26 2022
//
//***********************************************************************************************

//libraries 
#include <iostream>
#include <string>
#include <ctime>
#include <time.h> 
#include <stdlib.h>
using namespace std;
int main()
{
	const clock_t bc= clock();
 	for(int i=0; i<100000000;i++);
	
	//we want user to choose something 
	int choice;
	int SIZE = 10000;
  	int array[SIZE];
  	int copyArray[SIZE];
	populateArray(array,SIZE);

  	for(int i = 0; i < SIZE; i++)
    	{
      	copyArray[i] = array[i];
    	}
	
	do {
		
		cout << "Welcome to the 'Sorting Algorithms Application' menu" << endl;
		cout << "Below are a list of sorting algorithsm to choose from" << endl;
		cout << "choice 1- displays Selction Sort Algorithm" << endl;
		cout << "choice 2- displays Insertion Sort Algorithm" << endl;
		cout << "choice 3- displays Bubble Sort Algorithm" << endl;
		cout << "choice 4- displays Merge Sort Algorithm" << endl;
		cout << "choice 5- displays Quick Sort Algorithm" << endl;
		cout << "choice 6- displays Heap Sort Algorithm" << endl;
		cout << "choice 7- to exit the application" << endl;
		cout << "please enter a number to display your choice of sorting algorithm in action" << endl;
		cout << endl;
		cin >> choice;
		cout<<endl;
		if (choice == 1)
		{
			cout << "code for selection sort" << endl;
			selectionSort(array,SIZE);

		}//end of choice one

		if (choice == 2)
		{
			cout << "code for insertion sort" << endl;
			insertionSort(array,SIZE);

		}//end of choice 2

		if (choice == 3)
		{
			cout << "code for bubble sort" << endl;
			bubbleSort(array,SIZE);

		}//end of choice 3

		if (choice == 4)
		{
			cout << "code for merge sort" << endl;
			mergeSort(array,0,SIZE-1);

		}//end of choice 4

		if (choice == 5)
		{
			cout << "code for quick sort" << endl;
			quickSort(array,0,SIZE-1);

		}//end of choice 5

		if (choice == 6)
		{
			cout << "code for heap sort" << endl;

		}//end of choice 6
		
	}		 
	
	while (choice != 7);
	{
		cout << "Thankyou for using the 'Sorting Algorithms menu application' you have exited the program" << endl;
	}
	cout << "\n" << float(clock()-bc)/CLOCKS_PER_SEC <<"sec";
	return 0;
}///end of main 

