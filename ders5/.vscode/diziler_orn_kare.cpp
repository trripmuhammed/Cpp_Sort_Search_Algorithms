#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int i=0,arr[] = {1,2,3,4,5};

    for(i=0;i<size(arr);i++){
        pow(arr[i],2);
    }
    i=0;
    do{
        cout << "Sayi= " << i+1 << "  Karesi= " << arr[i] << endl;
        i++;
    }while(i<5);
}