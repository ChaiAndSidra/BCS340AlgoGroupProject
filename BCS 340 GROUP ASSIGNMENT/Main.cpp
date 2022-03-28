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

using namespace std;
int main()
{
	//we want user to choose something 
	int choice;

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

		}//end of choice one

		if (choice == 2)
		{
			cout << "code for insertion sort" << endl;

		}//end of choice 2

		if (choice == 3)
		{
			cout << "code for selection sort" << endl;

		}//end of choice 3

		if (choice == 4)
		{
			cout << "code for heap sort" << endl;

		}//end of choice 4

		if (choice == 5)
		{
			cout << "code for merge sort" << endl;

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

	return 0;
}///end of main 

