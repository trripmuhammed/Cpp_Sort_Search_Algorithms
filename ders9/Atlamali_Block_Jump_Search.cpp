#include<iostream>
#include<cmath>

using namespace std;

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

int BlockSearch(int arr[],int length,int key){
    
    int step = sqrt(length);
    int i=0;

    while (arr[step]<= key && step<length){
        i=step;
        step+=sqrt(length);
        if(step>length-1)
        return -1;
    }
    for(int x=i; x<step;x++){
        if(arr[x]==key)
        return x;
    }
return -1;    
    
}


int main(){

    int key,keyIndex,arr[]={10,53,75,65,23,67,25,76,16};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Aradiginiz elemani giriniz: ";
    cin >> key;
    cout << endl;

    keyIndex = BlockSearch(arr,n,key);

    if(keyIndex>=0)
    cout << "Aradiginiz deger bulundu.Aradiginiz eleman dizinin " << keyIndex + 1 << ". Sirasindaki elemandir.";
    else
    cout << "Aradiginiz deger bulunamadi.";
}