#include <iostream>

using namespace std;

void vaihda(int *osoitin1, int *osoitin2)
{
    int temp = *osoitin1;
    *osoitin1 = *osoitin2;
    *osoitin2 = temp;
}

void kaanna_taulukko(int *taulu, int koko)
{
    int *vasen = taulu;
    int *oikea = taulu + koko - 1;

    while (vasen < oikea)
    {
        vaihda(vasen, oikea);
        vasen++;
        oikea--;
    }
}

int main()
{
    const int koko = 10;
    int taulukko[koko];

    for (int i = 0; i < koko; i++)
    {
        taulukko[i] = i + 1;
    }

    cout << "Alkuperäinen taulukko: ";
    for (int i = 0; i < koko; i++)
    {
        cout << taulukko[i] << " ";
    }
    cout << endl;

    kaanna_taulukko(taulukko, koko);

    cout << "Taulukko käännettynä: ";
    for (int i = 0; i < koko; i++)
    {
        cout << taulukko[i] << " ";
    }
    cout << endl;
}