#include<iostream>
#include "BinarySearch.cpp"

using namespace std;

int exponentialSearch(int arr[], int n, int key){
    binarySearch(arr, 0, n-1, key);



    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,25,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    exponentialSearch(arr, n, key);

    print_arr(arr,n);
}