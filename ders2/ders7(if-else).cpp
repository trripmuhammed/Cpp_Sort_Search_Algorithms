#include<iostream>

using namespace std;

int main(){
	int sayi;
	cout << "Bir sayi giriniz";
	
	cin >> sayi;
	if(sayi<0)
	cout << "Negatif bir sayi girdiniz: "<< sayi << "\n";
	else
	cout << "Pozitif bir sayi girdiniz: " << sayi << "\n";
	
	return 0;
	
}
