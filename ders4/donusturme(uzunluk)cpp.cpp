#include<iostream>

using namespace std;

int main(){
	
	double uzunluk;
	
	cout << "Lütfen metre cinsinden uzunluk giriniz" << endl;
	
	cin >> uzunluk;
	
	char secim;
	
	cout << "Lütfen birimi giriniz" << endl;
	
	cin >> secim;
	
	switch(secim){
		
		case 'm':
			uzunluk/=1000;
			break;
		case 's':
			uzunluk/=100;
			break;
		case 'd':
			uzunluk/=10;
			break;
		case 'k':
			uzunluk*=1000;
			break;			
		default:
			cout << "Hatali giris";	
	}
	
	cout << "Uzunlugunuz " << uzunluk << " " << secim << " dir";
}
