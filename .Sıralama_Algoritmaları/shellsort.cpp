#include<iostream>
using namespace std;

void shellSort(int array[], int n)
{
	for(int interval=n/2; interval>0; interval/=2)
	{
		for(int i=interval; i<n; i+=1)
		{
			int temp= array[i];
			int j;
			for(j=i-interval; j>=0 && array[j]>temp; j-=interval)
			{
				array[j]= array[j+interval];
			}
			array[j+interval]=temp;
		}
	}
}
void printArray(int array[], int size)
{
	int i;
	for(i=0; i<size; i++){
	cout<< array[i]<<""<<endl;	
	}
	
}
int main()
{
	int data[]= {9,8,3,7,5,6,4,1};
	int size=sizeof(data)/sizeof(data[0]);
	shellSort(data, size);
	cout<<"Sorted Array:\n";
	printArray(data, size);
}
