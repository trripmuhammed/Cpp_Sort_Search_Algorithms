#include<iostream>

//sınavda boyle bir algoritma cizmemiz istenmez
using namespace std;

class sort{
    public:
    void static shellSort2(int array[],int n){
    for(int interval=n/2; interval>0 ; interval/=2){
        for(int i=interval;i<n;i++){
            int temp=array[i];
            int j;
            for(j=i-interval; j>=0 && array[j]>temp; j-=interval){
                array[j+interval]=array[j];
            }
            array[j+interval]=temp;
        }
    }
}
}; 

void shellSort(int array[],int n){
    for(int interval=n/2; interval>0 ; interval/=2){
        for(int i=interval;i<n;i++){
            int temp=array[i];
            int j;
            for(j=i-interval; j>=0 && array[j]>temp; j-=interval){
                array[j+interval]=array[j];
            }
            array[j+interval]=temp;
        }
    }
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}


