#include<iostream>
using namespace std;
long long factorial(int n){
    if(n==0 || n==1) return 1;
    else return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter value"<<endl;
    cin>>n;
    long long output= factorial(n);
    cout<<output;

return 0;
}
