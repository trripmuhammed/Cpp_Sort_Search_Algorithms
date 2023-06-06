#include<iostream>

using namespace std;



int main(){
    int i,j,n,g;

    cout << "Dizinin eleman sayisi:";
    cin >>n;
    int a[n];
    cout << "\n";
    for(i=0;i<n;i++){
        cout << "Dizinin " << i+1 << ".elemani:";
        cin >> a[i];        
    }

    for(i=1;i<n;i++){
        g=a[i]; j=i-1;
        while(j>-1 && a[j]>g){
            a[j+1]=a[j]; j--;
            a[j+1]=g;
        }
    }        

    cout << "SiraliDizi: \n";
    for(i=0;i<n;i++){
        cout << a[i] << " ";
    }

}