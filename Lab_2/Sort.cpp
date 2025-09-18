#include "Sort.h"
#include <iostream>


void show(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

void my_swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sort_bubble(int* A, int n, int first, int last)
{
    for (int i = 0; i < last - 1; i++)
        for (int j = 0; j < last - i - 1; j++)
            if (A[j] > A[j + 1]) my_swap(A[j], A[j + 1]);
}

void sort_inserting(int* A, int n, int first, int last)
{

}

void sort_selection(int* A, int n, int first, int last)
{

}
