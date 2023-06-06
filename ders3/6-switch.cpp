#include<iostream>

using namespace std;

int main(){
	
	int plaka;
	cout << "Ilin plaka kodunu giriniz" << endl;
	
	cin >> plaka;
	
	switch(plaka){
		case 61:
			cout << "Trabzon" << endl;
			break;
		case 34:
			cout << "Istanbul" << endl;
			break;
		case 53:
			cout << "Rize" << endl;
			break;
		default:
			cout << "Bilinmeyen bir deger girdiniz";	
	}
	
}
