#include <bits/stdc++.h>
using namespace std;

int main()
{
    string fibo[10];
    fibo[0] = "a";
    fibo[1] = "b";
    cout << fibo[0] << endl;
    cout << fibo[1] << endl;
    for (int i = 2; i < 10; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        cout << fibo[i] << endl;
    }
    system("pause");
}