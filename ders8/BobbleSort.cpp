#include<iostream>

using namespace std;
/*
    Bu büyük ölcekli dizilerde islem uzunlugu sebebiyle
    kullanimi uygun degil
*/
int dizi[]={5,2,8,6,3,7,1,0,4,9};
void swap(int num1,int index1,int num2,int index2){
    dizi[index1]=num2;
    dizi[index2]=num1;
}

void bubbleSort(int n){
    for(int i=0; i<n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if(dizi[j]>dizi[j+1]){
                swap(dizi[j],j,dizi[j+1],j+1);
            }
        }
    }
}

void printArray(int dizi[]){
    for(int i=0; i<10; i++){
        cout<<dizi[i]<<" ";
    }
}


int main(){
    int n = sizeof(dizi) / sizeof(dizi[0]);
    bubbleSort(n);
    cout << "Siralanmis dizi:\n";
    printArray(dizi);
}