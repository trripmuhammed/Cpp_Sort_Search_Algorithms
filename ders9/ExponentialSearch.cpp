#include<iostream>
#include "BinarySearch.cpp"

using namespace std;

int exponentialSearch(int arr[],int start,int end,int key){
    if((end-start)<=0)
    return -1;
    int i=1;
    while(i<(end-start)){
        if(arr[i]<key)
        i*=2;
        else break;
    }
    return binarySearch(arr, 0, end-1, key);
}

int main(){
    
    int n,key,loc;
    cout << "Dizinin eleman sayisini giriniz: ";
    cin >> n;
    cout << endl;

    int arr[n];

    cout << "Dizinin elemanlari giriniz: ";
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    cout << endl;
    cout << "Aramak istediginiz elemani giriniz: ";
    cin >> key;
    loc = exponentialSearch(arr,0,n,key);
    if(loc!=-1){
        cout << "Aranan degerin sirasi: " << loc;
    }else{
        cout << "Aranan deger bulunamadi";
    }
}