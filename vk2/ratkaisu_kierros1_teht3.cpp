#include <iostream>

using namespace std;

int taulukko_muunnin(int taulukko[])
{
    for (int i = 0; i < 10; i++)
    {
        taulukko[i] += 1;
    }
    return taulukko[10];
}
void taulukko_muunnin_2(int *taulukko, int koko)
{
    for (int i = 0; i < koko; i++)
    {
        *(taulukko + i) += 1;
    }
}
int main()
{
    const int koko = 10;
    int taulukko[koko]{0};

    cout << "Taulukko ennen aliohjelmakutsua 1: ";
    for (int i = 0; i < 10; i++)
    {
        cout << taulukko[i] << " ";
    }
    cout << endl;
    cout << "Taulukko aliohjelmakutsun 1 jalkeen: ";
    taulukko_muunnin(taulukko);
    for (int i = 0; i < 10; i++)
    {
        cout << taulukko[i] << " ";
    }
    cout << endl;

    cout << "Taulukko ennen aliohjelmakutsua 2: ";
    for (int i = 0; i < koko; i++)
    {
        cout << taulukko[i] << " ";
    }
    cout << endl;
    taulukko_muunnin_2(taulukko, koko);
    cout << "Taulukko aliohjelmakutsun 2 jalkeen: ";
    for (int i = 0; i < koko; i++)
    {
        cout << taulukko[i] << " ";
    }
    cout << endl;
}