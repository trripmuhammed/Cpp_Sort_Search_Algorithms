#include<iostream>

using namespace std;

int main(){

    int max,i=0,sayi[5];
    do{
        cout << i+1 << ".sayi: " ;
        cin >> sayi[i];
        cout << endl;
        i++;
    }while(i<5);

    max=sayi[0];

        for(int j=0;j<size(sayi);j++){
            if(max<sayi[j])
                max = sayi[j];
        }
    

    cout << "Maximum deger: " << max;
}