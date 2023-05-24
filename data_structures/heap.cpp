/*
    ---------------------------------
                HEAP - dynamically can expand to virtual memory while stack can'T
    ---------------------------------
         200            10xcGddx  <---------
                                           |
                                           |
                                           |
    ---------------------------------      |
                                           |
                STACK                      |
    ---------------------------------      |
                                           |
        A                10            | 
        P                200     -----------

    ---------------------------------        
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10;  //stored in stack
    int *p = new int(); //allocate memory in heap
    *p = 200; 
    delete(p);   //deallocate memory
    

    return 0;
}



