#include <iostream>

using namespace std;

int main(){

    int muuttuja = 7;
    int *muuttuja_p = nullptr;
    muuttuja_p = &muuttuja;

    cout << "muuttuja_p = " << muuttuja_p << endl; 
    cout << "muuttuja = " << *muuttuja_p << endl;
    cout << "&muuttuja_p = " << &muuttuja_p << endl;
    cout << "&muuttuja = " << &muuttuja << endl;
    cout << "*&muuttuja = " << *&muuttuja << endl;
    cout << "&*muuttuja_p = " << &*muuttuja_p << endl;
    cout << "sizeof(muuttuja) = "<< sizeof(muuttuja) << endl;
    cout << "sizeof(muuttuja_p) = " <<sizeof(muuttuja_p) << endl;
    
    /*
    //Sisältöön viittaaminen ei onnistu
    int *muuttuja_o;
    int muuttuja2 = muuttuja_o; 
    
    //Debugger ilmoittaa segmentation fault
    //Eroavaisuuksia tulee eri kääntäjällä/debugerilla
    int *muuttuja_o = nullptr;
    int muuttuja2 = *muuttuja_o;
    cout << muuttuja2;
    */
    return 0;
}