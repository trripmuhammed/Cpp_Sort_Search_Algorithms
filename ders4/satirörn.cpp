#include<iostream>

using namespace std;

int main(){
	
	cout << "Satir sayisini giriniz: " << endl;
	
	int sayi;
	
	cin >> sayi;
	
	for(int i=0;i<sayi;i++){
		
		for(int j=0;j<i+1;j++){
			cout << "* ";
		}
		cout << endl;
	}
}
