#include<iostream>

using namespace std;

int main(){
	
	int basari;
	
	cout << "Genel ortalama notunuzu giriniz";
	
	cin >> basari;
	
	if(basari>=50)
		cout << "Tebrikler, Geçtiniz" << endl;
	else	
		cout << "Üzgünüz, Geçemedin.";
		
	return 0;	
}
