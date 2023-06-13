#include<iostream>
using namespace std;

void print_arr(int arr[], int size)
{
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}

int interpolation_search(int arr[], int value, int size){
	int low=0;
	int high=size-1;
	int mid;
	while(arr[low]<= value && arr[high]>=value){
		mid=low+((value-arr[low])*(high-low))/(arr[high]-arr[low]);
		if(arr[mid]<value)
		{
			low=mid+1;
			
		}
		else if(arr[mid]>value){
			low=mid-1;
		}
		else {
			return mid;
		}
	}
	if(arr[low]==value){
		return low;
	}
	else{
		return -1;
	}
}

int main(){

int arr[]={1,1,2,3,5,8,13,21,34};
int value, pos;
cout<<"senin dizin";
print_arr(arr,9);
cout<<"aramak istediginiz degeri girin:";
cin>>value;
pos=interpolation_search(arr, value, 9);
if(pos != -1){
	cout<<"Aranan degerin bulundugu konum:"<<pos + 1<<endl;
}
else{
	cout<<"Aranan deger dizide bulunamadi."<<endl;
}
return 0;

}



