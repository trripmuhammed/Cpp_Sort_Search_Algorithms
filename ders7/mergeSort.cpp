#include<iostream>

using namespace std;

// 2 alt dizi olan M ve L dizilerinin birlestirildigi fonksiyon
void merge(int arr[], int p,int q,int r){

    int n1=q-p+1;
    int n2=r-q;
    int  L[n1],M[n2];
    //L ve M dizilerinin olusturulmasi
    for(int i=0;i<n1; i++)
    L[i]=arr[p+i];
    for(int j=0;j<n2;j++)
    M[j]=arr[q+1+j];

    int i,j,k;
    i=0;
    j=0;
    k=p;
    // L ve M dizilerinin elemanlari arasinda buyuk olan secilerek arr dizisindeki dogru konuma yerlestirilir.
    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=M[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++; 
}
    while(j<n1){
        arr[k]=M[i];
        i++;
        k++;
}
}
//bolme siralama ve birlestirme
void mergeSort(int arr[],int l,int r){
    if(l<r){
// ana diziyi iki alt diziye bolmek
        int m=1+(r-1)/2;
        mergeSort(arr,1,m);
        mergeSort(arr,m+1,r);
//siralanan alt dizileri birlestirme
        merge(arr,1,m,r);
    }
}
//dizinin yazdirilmasi
void printArray(int arr[],int size){
    for(int i=0; i<size; i++)
    cout << arr[i] << " " << endl;
}

int main(){
    int arr[]={6,5,12,10,9,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    cout << "Sorted array: ";
    printArray(arr,size);
}
