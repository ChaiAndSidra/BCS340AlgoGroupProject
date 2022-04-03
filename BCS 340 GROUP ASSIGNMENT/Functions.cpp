//***********************************************************************************************
// 
// Developer(s): Sidra Naru, Alexander Kowalski, Tanzina Hoque
// Project: Group assignement related to different sorting algorithms
// Date: 03 26 2022
//
//***********************************************************************************************

#include <stdlib.h>
#include "Functions.h"
void populateArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = (rand() % 100);
    }
}

void selectionSort(int a[], int size)
{
    int outer, inner, min;

    for (outer = 0; outer < size - 1; outer++)
    {
        min = outer;

        for (inner = outer + 1; inner < size; inner++)
        {
            if (a[inner] < a[min])
            {
                min = inner;
            }
        }
        int temp = a[outer];
        a[outer] = a[min];
        a[min] = temp;
    }
}

void insertionSort(int a[], int size)
{
    int j, key, i;

    for (j = 2; j <= size; j++)
    {
        key = a[j];
        i = j - 1;

        while (i >= 0 && key < a[i])
        {
            a[i + 1] = a[i];
            i = i - 1;
        }

        a[i + 1] = key;
    }
}

void bubbleSort(int a[], int size)
{
    int outer, inner, temp;

    for (outer = size - 1; outer > 0; outer--)
    {
        for (inner = 0; inner < outer; inner++)
        {
            if (a[inner] > a[inner + 1])
            {
                temp = a[inner];
                a[inner] = a[inner + 1];
                a[inner + 1] = temp;
            }
        }
    }
}

void Merge(int a[], int p, int q, int r)
{
    int n1, n2, i, j, k;
    n1 = q - p + 1;
    n2 = r - q;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = a[p + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = a[q + j + 1];
    }
    i = 0, j = 0;
    for (k = p; i < n1 && j < n2; k++)
    {
        if (L[i] < R[j])
        {
            a[k] = L[i++];
        }
        else
        {
            a[k] = R[j++];
        }
    }
    while (i < n1)
    {
        a[k++] = L[i++];
    }
    while (j < n2)
    {
        a[k++] = R[j++];
    }
}

void mergeSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        Merge(a, p, q, r);
    }

}

void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    /* partition */
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    /* recursion */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

//Calculating  for heapsort algorithm
void percolate(int a[], int n, int i) {
    int highest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[highest]) {
        highest = left;
    }
    else if (right < n && a[right] > a[highest]) {
        highest = right;
    }
    else if (highest != i) {
        swap(a[i], a[highest]);
        percolate(a, n, highest);
    }
}
//sorting using heapsort
void heapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        percolate(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[1]);
        percolate(a, i, 0);
    }
}

//print 50 array elements
void printFirstFifty(int a[], int size)
{
    for(int i = 0; i < size;i++)
      {
        cout << a[i] << " ";
      }
}

