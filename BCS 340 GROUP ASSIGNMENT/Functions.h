#pragma once
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

void populateArray(int a[], int size);

void selectionSort(int a[], int size);

void insertionSort(int a[], int size);

void bubbleSort(int a[], int size);

void Merge(int a[], int p, int q, int r);

void mergeSort(int a[], int p, int r);

void quickSort(int arr[], int left, int right);

void percolate(int a[], int n, int i);

void heapSort(int a[], int n);