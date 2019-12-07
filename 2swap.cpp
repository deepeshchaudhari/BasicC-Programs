#include<iostream>
using namespace std;
inline void swap( int& i, int& j );//inline use to reduce function
inline void swap( double& i, double& j );                                   //  call overhead by replacing code in place of function call.
int main(){
    int a=4,b=78;
    double a1=88.12,b1=10.250;
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

// function declaration
inline void swap( int& i, int& j )
{
    int temp;
    temp= i;
    i= j;
    j= temp;
}
inline void swap( double& i, double& j )
{
    double temp;
    temp= i;
    i= j;
    j= temp;
}
