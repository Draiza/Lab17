#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    int n, k, i;

    //1
    cin >> n;
    f = 1;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        a[i] = f;
        cout << a[i] << endl;
        f = f + 2;
    }
}
