#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i = 0; i<10; i++){
        cin >>a[i];
    }
    for(int n = 0; n < 10; n++ ){
        int min = a[n];
        int c;
        int m;
        int k;
        for(int i = n; i < 10; i++){
            if(a[i] <= min){
                min = a[i];
                m = i;
            }
        }
        c = a[n];
        a[n] = min;
        k = a[m] = c;
    }
    for(int i =0 ; i < 10; i ++){
        cout << a[i] <<" ";
    }
}