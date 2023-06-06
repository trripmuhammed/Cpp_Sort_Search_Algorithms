#include<iostream>

using namespace std;

int main(){

    int a[5] = {2,7,0,3,9};
    int toplam = 0;
    for(int i=0;i<size(a);i++){
        cout << "a(" << i << ")= " << a[i] << endl;
        toplam+= a[i];
    }
        cout << "TOPLAM = " << toplam << endl;

    
}