#include <iostream>

using namespace std;

int SiraliSearch(int dizi[], int key, int length)
{
    int i = 0;
    while (i != length)
    {
        if (dizi[i] == key)
        {
            return i;
        }
        i++;
    }
    cout << "Aradiginiz eleman dizide yoktur.";
    exit(0);
}

int main()
{

    int key, keyIndex, arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "lutfen aranan elemani giriniz: ";
    cin >> key;
    cout << endl;
    keyIndex = SiraliSearch(arr, key, n);
    cout << "Aradiginiz deger bulundu.Aradiginiz eleman dizinin " << keyIndex + 1 << ". Sirasindaki elemandir.";
}