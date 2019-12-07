#include<iostream>
int main(){

    const int a=45;
    for(int i=0;i<10;i++){
        printf("[%d]\n",a);//if we increment a(a++) it will give error
    }
return 0;
}
