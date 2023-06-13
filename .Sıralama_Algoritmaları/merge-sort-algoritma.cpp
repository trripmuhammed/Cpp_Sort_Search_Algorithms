#include<iostream>
using namespace std;

//2 alt dizi olan M ve L dizilerinin birle�tirildi�i fonksiyon 
void merge(int arr[], int p, int q, int r) {
  
  //  L � A[p..q] ve M � A[q+1..r] olu�turma
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Alt dizi ve ana dizilerin ge�erli dizinleri korunmal� 
  int i, j, k;
  i = 0;
  j = 0;
  k = p;
//L ve M dizilerinin elemanlar� aras�nda b�y�k olan se�ilerek arr dizisindeki do�ru konuma yerle�tirilir.
while (i<n1 && j<n2){
	if(L[i]<=M[j]){
		arr[k]=L[i];
		i++;
	}
	else{
		arr[k]=M[j];
		j++;
	}
	k++;
}
while (i<n1){
	arr[k]=L[i];
	i++;
	k++;
}
while (j<n1){
	arr[k]=M[j];
	j++;
	k++;
}
}
//b�lme s�ralama ve birle�tirme i�levleri
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}
//dizinin yazd�r�lmas�
void printArray(int arr[],int size){
	for(int i=0; i<size; i++)
	cout<<arr[i]<<" "<<endl;
	
}
int main(){
	int arr[]={6,5, 12, 10,9, 1};
	int size=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr, 0, size-1);
	cout<<"Sorted array:\n";
	printArray(arr, size);
	return 0;
}









