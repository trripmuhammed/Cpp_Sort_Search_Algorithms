#include<iostream>

using namespace std;

int i,n = 5;

int main(){
	
	//5 den kucuk tam sayilari yaz
	
	while(i<n)
	cout << i++ << "\n";
	
	//faktöriyel hesapla
	
	
	cout << "Bir sayi giriniz" << endl;
	
	int sayi;
	
	cin >> sayi;
	
	if(sayi<=0){
		cout << "0 dan büyük sayi giriniz" << endl;
	}
	
	cout << "Sayi: " << sayi << endl;
	
	int sonuc=1;
	
	while(sayi!=0){
		
		sonuc*=sayi;
		sayi--;
		
		
	}
	
	cout << "Sonuc: " << sonuc;

	return 0;
}
