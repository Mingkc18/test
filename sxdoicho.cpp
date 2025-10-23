#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i = 0; i<10; i++){
        cin >>a[i];
    }
    for(int i = 1; i < 10; i++){
        for(int n =0; n < i; n++){
            if(a[i]<a[n]){
                int c = 0;
                c = a[i];
                for(int m = i; m > n; m-- ){
                    a[m] = a[m-1];
                }
                a[n] = c;
            }
        }
    }
    for(int i = 0; i<10; i++){
        cout <<a[i] << " ";
    }



}