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

int key;
int ilk=0,son=8,orta,k=0,dizi[9]={1,2,2,3,5,8,13,21,34};
int binarySearch(int arr[],int x,int r,int l){
//Diger bir yapilma sekli
    if (r >= l) 
    {
        int mid = l + (r - l) / 2;
  
        // If the element is present at 
        // the middle itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, 
        // then it can only be present in 
        // left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, 
                                mid - 1, x);
  
        // Else the element can only be 
        // present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}

int main(){
    
    cout << "Lütfen aradiginiz degeri giriniz: ";
    cin >> key;

    

}