//insertion sort
#include<iostream>
using namespace std;
int main()
{
	int i, j, n, g;
	
	cout<<"Dizinin elemena sayisi:";
	cin>>n;
	int a[n]; 
	cout<<"\n";
	for(i=0; i<n; i++)
	{
		cout<<"A("<<i+1<<"):";
		cin>>a[i];
	}
	//yukarda dizi olusturuldu


	
	for(i=1; i<n; i++)
	{
		g=a[i]; j=i-1;
		while((j>-1)&&(a[j]>g))
		{
			a[j+1]=a[j]; j--;
			a[j+1]=g;
		}
	}
	cout<<"\nSiralidizi:\n-----------------\n";
	for(i=0; i<n; i++)
	cout<<a[i]<<"\t";
	return 0;
}
