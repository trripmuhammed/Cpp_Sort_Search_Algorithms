#include<iostream>

using namespace std;

int main(){
	
	int sayi;
	cout << "Bir asal sayi giriniz: ";
	cin >> sayi;
	int i=2;
	
	while(sayi>i){

		if(sayi%i==0)
		break;
		if(sayi==i+1)
		cout << sayi << " Sayisi asaldir";	
		
		i++;	
	}
}
