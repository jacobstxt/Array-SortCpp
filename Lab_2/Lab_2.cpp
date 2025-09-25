#include <iostream>
#include "Sort.h"

int main()
{
    srand(time(0));
    const int n = 10;
    int A[n];

    initialize(A, n);
    show(A, n);


    /*int A[n] = { 
      14, 27, 6,  25, 1,
      21, 10, 28, 4,  13,
      17, 8,  24, 2,  30,
      9,  19, 23, 11, 29,
      7,  22, 5,  20, 16,
      15, 26, 3,  12, 18
    };*/



 

    int choise = 0;
    int first = 0;
    int last = 0;
    std::cout << "Select the array boundaries"<<std::endl;
    std::cout << "first element = ";
    std::cin >> first;
    std::cout << "last element = ";
    std::cin >> last;

    std::cout << "Please choose sort method (1->Bubble) (2->Insertion) (3->Selection)" << std::endl;
    std::cin >> choise;
    switch (choise)
    {
    case 1: sort_bubble(A, n, first, last); break;
    case 2: sort_inserting(A, n, first, last); break;
    case 3: sort_selection(A, n, first, last); break;
    default: std::cout << "Incorrect data :("; return(0);
    }


    std::cout<<"Max item->" << MaxItem(A, first, last)<<std::endl;
    std::cout<<"Min item->" << MinItem(A, first, last)<<std::endl;

    show(A, n);

}