#include<iostream>

using namespace std;



void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b=t;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = (low-1);

    for(int j = low; j < high-1; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i],&arr[j]);
    }
}
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

int quickSort(int arr[],int low,int high){
    if(low < high){
    int pivot = partition(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
}
return 0;
}
void display(int arr[],int size){
    int i;
    for(int i=0; i<size; i++){
        cout << arr[i] << "\t";
    }
}
int main(){
    int arr[]={12,23,3,41,51,35,19,45};
    int n = sizeof(arr) / sizeof(int);
    quickSort(arr,0,n-1);
    cout << "Siralanmis dizi: " << endl;
    display(arr,n);
    return 0;
}




