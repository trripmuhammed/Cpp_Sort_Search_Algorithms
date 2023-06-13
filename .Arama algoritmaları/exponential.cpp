#include<iostream>
using namespace std;

int binary_search(int array[], int start, int end, int key){
	if(start<=end){
		int mid(start+(end-start)/2);
		if(array[mid]==key)
		return mid;
		if(array[mid]>key)
		return binary_search(array, start, mid-1, key);
		return binary_search(array, mid+1, end, key);
		
	}
	return -1;
	
}
int exponential_search(int array[], int start, int end, int key){
	if((end-start)<=0)
	return -1;
	int i=1; 
	while(i<(end-start)){
		if(array[i]<key)
		i*=2;
		else
		break;
		
	}
	return binary_search(array, i/2, i, key);
}

int main(){
	int n, searchKey, loc;
	cout<<"Dizi eleman sayisini girin:";
	cin>>n;
	int arr[n];
	cout<<"Dizi elemanlarini girin:"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Aramak istediginiz elemani girin:";
	cin>>searchKey;
	if((loc=exponential_search(arr, 0, n, searchKey))>=0)
	cout<<"Aranan elemanin bulundugu konum:"<<loc<<endl;
	else
	cout<<"Aranan eleman dizide bulunamadi."<<endl;
	
}







