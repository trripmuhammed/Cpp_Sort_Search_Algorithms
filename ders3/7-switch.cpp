#include<iostream>

using namespace std;

int main(){
	
	int kod;
	
	cout << "L�tfen basinc kodunu giriniz" << endl;
	
	cin >> kod;
	
	switch(kod){
		case 6:
			cout << "Dikkat! Her 5dk da bir kontrol et"; << endl;	
			break;
		case 7:		
			cout << "Sicakligi dusur. S�rekli kontrol et" << endl;	
			break;
		case 8:
			cout << "Basinc yuksek. Sistemi kapat" << endl;	
		default :
			cout << "�alisma kosullari normal";
	}
}
