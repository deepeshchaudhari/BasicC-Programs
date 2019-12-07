#include<iostream>
using namespace std;
long long fact[1000];
long long factorial(int n){
    if(n==0 || n==1) return 1;
    else if(fact[n]==-1){
       long long v = n*factorial(n-1);
       fact[n]=v;
        return v;
    }
}
int main(){
    int n;
    cout<<"Enter value"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        fact[i]=-1;
    }
    fact[0]=fact[1]=1;
    long long output= factorial(n);
    cout<<output;

return 0;
}
