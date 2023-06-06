#include<iostream>

using namespace std;

int main(){

    int a[2][3]={{5,10,15},{20,25,30}},b[2][3]={{30,25,20},{15,10,5}},c[2][3];

    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i=0;i<size(c);i++){
        for(int j=0;j<3;j++){
        
        cout << " " << c[i][j];
        }
        cout << endl;
    }
}