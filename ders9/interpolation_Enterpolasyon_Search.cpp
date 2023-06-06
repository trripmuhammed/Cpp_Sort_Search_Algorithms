#include<iostream>
//#include "ders8\ShellSort.cpp"

using namespace std;

void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int interpolationSearch(int arr[],int value,int size){
    //shellSort(arr,size);
    int low=0;
    int high=size-1;
    int mid;
    while(arr[low]<= value && arr[high] >= value){
        mid=low+((value-arr[low])*(high-low))/(arr[high]-arr[low]);
        if(arr[mid]<value){
            low=mid+1;
        }else if(arr[mid]>value){
            low=mid-1;
        }else{
            return mid;
        }
    }
    if(arr[low]==value){
    return low;
    }else{
    return -1;
    }
}
//Sırali olmali
int main(){
    int arr[]={1,2,78,16,30,29,2,0,199};
    int value,pos;
    cout << "senin dizin: ";
    print_arr(arr,10);

    cout << "aramak istediginiz degeri giriniz: ";
    cin >> value;

    pos=interpolationSearch(arr,value,10);
    if(pos==-1){
        cout<<"deger bulunamadi"<<endl;
    }else{
        cout<<"aradiginiz degerin konumu: " << pos+1 <<endl;
    }
}