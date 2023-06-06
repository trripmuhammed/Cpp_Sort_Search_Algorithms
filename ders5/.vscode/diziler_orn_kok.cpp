#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int i=0;
    double arr[] = {1,2,3,4,5};

    for(i=0;i<size(arr);i++){
        arr[i] = sqrt(arr[i]);
    }
    i=0;
    do{
        cout << "Sayi= " << i+1 << "  Koku= " << arr[i] << endl;
        i++;
    }while(i<5);
}