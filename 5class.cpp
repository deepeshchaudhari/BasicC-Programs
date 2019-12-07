#include<iostream>
using namespace std;
class test{

    int a=10;
    int b=100;
     private:
    int max(int x,int y){
    if(x>=y) return x;
    else
         return y;
    }
};
int main(){
        int d;
        d=max(100,200);
        cout<<d<<endl;
return 0;
}
