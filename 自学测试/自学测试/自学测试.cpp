#include<iostream>

#include<iomanip>

using namespace std;

int main()

{
    void prt(int* m, int n);

    int a[] = { 1,2,3,4,5 }, i;

    prt(a, 5);

    for (i = 0; i < 5; i++)

        cout << setw(3) << a[i];

    cout << "\n";

    return 1;

}

void prt(int* m, int n)

{
    int i;

    for (i = 0; i < n; i++)

        m[i]++;

    return;

}