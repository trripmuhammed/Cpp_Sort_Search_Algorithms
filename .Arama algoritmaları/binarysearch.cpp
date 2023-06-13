#include<iostream>
#include<cmath>
using namespace std;
int ara;
int ilk=0, son=8, orta, k=0, dizi[9]={1,2,2,3,5,8,13,21,34};
int main()
{
	cout<<"aranan deger:";
	cin>>ara;
	while((ilk<=son) && (k!=1))
	{
		orta=(int) floor((ilk+son)/2);
		if (ara<dizi[orta]) son=orta-1;
		else if(ara>dizi[orta]) ilk=orta+1;
		else k=1; 
	}
	if(k==1) cout<<"\nAradiginiz deger"<<orta+1<<"sirada\n";
	else cout<<"\nAradiginiz deger bulunamadý\n";
	return 0;
	
}
