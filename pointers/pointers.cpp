#include<iostream>

int main()
{
    int a = 10;
    int *aptr = &a;

    std::cout<<"Variable a : "<<a<<std::endl;
    std::cout<<"Address of a Variable : "<<&a<<std::endl;
    std::cout<<"Pointer aptr : "<<aptr<<std::endl;
    std::cout<<"Accessing value of variable using *aptr pointer : "<<*aptr<<std::endl; //dereferencing

    return 0;
}