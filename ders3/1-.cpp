#include<iostream>

using namespace std;

int a;
int b;
int c;
int main(){
	
	cout << "lutfen 3 sayi giriniz \n";
	cin >> a;
	cin >> b;
	cin >> c;
	int kucuk;
	if(a<b){
		kucuk = a;
	}else if(b<c){
		kucuk = b;
	}else{
		kucuk = c;	
	}
	
	cout << "En kücük tam sayi: " << kucuk;
}
