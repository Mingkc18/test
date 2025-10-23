#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i = 0; i<10; i++){
        cin >>a[i];
    }
    int c;
    for(int i = 0 ; i < 10 ; i++){
        for (int n = 0 ; n < 10 - i ; n++ ){
            if(a[n] > a[n + 1]){
                c = a[n];
                a[n] = a[n + 1];
                a[n + 1] = c; 
            }
        }
    }
    for(int i = 0; i<10; i++){
        cout << a[i] << " ";
    }
}