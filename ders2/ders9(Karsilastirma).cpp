#include<iostream>

using namespace std;

int sayi=5;
int sayi2=55

int main(){
	if(sayi<10)
	cout << "Kosul dogrudur";
	
	//
	if(sayi<10)
	cout << "Kosul dogrudur" << endl;
	else
	cout << "Kosul yanlistir" << endl;
	//2 sayiyi karsilastiran uygulama
	//if de eger tek satir blogu yazacaksak {} kullanmaya gerek yoktur.
	int a;
	int b;
	
	cout << "Ilk sayiyi giriniz" << endl;
	cin >> a;
	cout << "Ikinci sayiyi giriniz" << endl;
	cin >> b;
	if(a>b)
	cout << "1.sayi 2.den buyuktur" << endl;
	else
	cout << "2.sayi 1.den buyuktur" << endl;
		
	return 0;	
}
