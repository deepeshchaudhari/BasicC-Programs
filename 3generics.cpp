#include<iostream>
#include<complex>
using namespace std;
template <class T>//generics
T swap( int* i, int* j )
{
    int temp;
    temp= *i;
    *i= *j;
    *j= temp;
}

int main(){


    int a=4,b=78;
    double a1=88.12,b1=10.250;
  //  complex double r(14.25,25.6),s(16.5,18.99);
    int *p,*q;
    double *p1,*q1;
    p=&a;
    q=&b;
    p1=&a1;
    q1=&b1;
    cout<<*p<<"," <<*q <<endl;
    cout<<*p1<<"," <<*q1<<endl;
    //function overloading
    swap(p,q);// int swap
    swap(p1,q1);// double swap
    cout<<"values after swapping"<<endl;
    cout<<*p<<"," <<*q <<endl;
    cout<<*p1<<"," <<*q1<<endl;
return 0;
}


