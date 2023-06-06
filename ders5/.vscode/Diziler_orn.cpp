#include<iostream>

using namespace std;

int main(){



    int i,sayi[3],temp;
    
    do{
        cout << i+1 << ".sayiyi giriniz: ";
        cin >> sayi[i];
        i++;
    }while(i<3);

    for(i=0;i<2;i++){
        for(int b=i+1;b<3;b++){
            if(sayi[i]>sayi[b]){
                temp=sayi[i];
                sayi[i]=sayi[b];
                sayi[b]=temp;
            }
        }
    }
    cout << endl;
    cout << "Artan Siralama" << endl;
    for(i=0;i<3;i++){
        cout << sayi[i] << endl;
    }

}