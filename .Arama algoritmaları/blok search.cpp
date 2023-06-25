#include<iostream>
#include<cmath>

using namespace std;
int jump_Search(int a[], int n, int item) {
   int i = 0;
   int m = sqrt(n); //initializing block size= ?(n)

   while(a[m] <= item && m < n) {   
      //bir bolge secimi yapıyoruz
      i = m;
      m += sqrt(n);
      //while dongusu dondukce sectigimiz bolgeyi surekli ileri tasiyoruz
      if(m > n - 1)  // if m exceeds the array size
         return -1; 
   }
   //yukarda dogru bolgeyi bulduktan sonra burda linear search ile o bolgedeki elemani buluyoruz
   for(int x = i; x<m; x++) { //linear search in current block
      if(a[x] == item)
         return x; //position of element being searched 
   }
   return -1;
}

int main() {
   int n, item, loc;
   cout << "\n Enter number of items: ";
   cin >> n;
   int arr[n]; //creating an array of size n
   cout << "\n Enter items: ";

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "\n Enter search key to be found in the array: ";
   cin >> item;
   loc = jump_Search(arr, n, item);
   if(loc>=0)
      cout << "\n Item found at location: " << loc;
   else
      cout << "\n Item is not found in the list.";
}
