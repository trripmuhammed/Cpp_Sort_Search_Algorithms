#include<iostream>

using namespace std;

void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void dondur(int a[],int k){
    int j=0,g;
    while(j<k){
        g=a[j];
        a[j]=a[k];
        a[k]=g;
        j++;
        k--;
    }
}

int indis_max(int arr[], int n){
    int max=0,i;
    for(i=1; i<=n; i++){
        if(arr[max]<arr[i]){
            max = i;
        }
    }
    return max;
}

void pancakeSort(int arr[], int n){

    int i,imax;
    for(i=n-1; i>0; i--){
        imax = indis_max(arr,i);
        if(imax!=i){
            if(imax!=0) dondur(arr,imax); dondur(arr,i);
        }
    }

}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    pancakeSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

