#include <iostream>

using namespace std;

void swap_1(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap_2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 1, num2 = 2, num3 = 3, num4 = 4;

    cout << "yksi = " << num1 << " kaksi = " << num2 << " ennen swap1." << endl;
    swap_1(&num1, &num2);
    cout << "yksi = " << num1 << " kaksi = " << num2 << " jälkeen swap1." << endl;

    cout << "kolme = " << num3 << " neljä = " << num4 << " ennen swap2." << endl;
    swap_2(num3, num4);
    cout << "kolme = " << num3 << " neljä = " << num4 << " jälkeen swap2." << endl;
}