#include<iostream>

using namespace std;

int main(){
	
	int basari;
	
	cout << "Genel ortalama notunuzu giriniz";
	
	cin >> basari;
	
	if(basari>=50)
		cout << "Tebrikler, Ge�tiniz" << endl;
	else	
		cout << "�zg�n�z, Ge�emedin.";
		
	return 0;	
}
