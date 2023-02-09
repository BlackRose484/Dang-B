#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        if (n % 100 != 0)
        {
            cout << "true\n";
        }
        else
        {
            if (n % 400 == 0)
            {
                cout << "true\n";
            }
            else
                cout << "false\n";
        }
    }
    else
        cout << "false\n";
    system("pause");
}