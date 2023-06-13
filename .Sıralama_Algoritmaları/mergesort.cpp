// Merge sort in C++

#include <iostream>
using namespace std;

// Ýki alt dizi L ve M'yi dizi halinde birleþtirin.
void merge(int arr[], int p, int q, int r) {
  
  //  L ‹ A[p..q] ve M ‹ A[q+1..r] oluþturma
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Alt dizi ve ana dizilerin geçerli dizinleri korunmalý 
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  //L veya M'nin herhangi bir ucuna ulaþana kadar, 
  //L ve M öðeleri arasýndan daha büyük olaný seçin ve bunlarý A[p..r]'de doðru konuma yerleþtirin.
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // L veya M'deki elemanlarýmýz bittiðinde,
  //kalan öðeleri toplayýn ve A[p..r] koyun
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
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

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
