#include<iostream>
using namespace std;
#include<bits/stdc++.h>
const int N=10;
template <class T>
inline T sum (T& p, vector<T> d)
{
        for(int i  = 0; i < N; i++){
        p = p + d.at(i);
        }
}

int main()
{
int summ = 10;
vector<int> data(N);
    for(int i = 0; i < N; ++i){
    data[i]=i;
    }
    sum(summ, data);
    cout<<"sum is "<<summ <<endl;
return 0;
}
