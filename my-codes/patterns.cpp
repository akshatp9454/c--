#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    // 1.
    /*
     * * * *
     * * * *
     * * * *
     * * * *
     */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        //pattern1(n);
        //pattern2(n);
        pattern3(n);
    }

    // 2.
    /*
        *
        * *
        * * *
        * * * *
        * * * * *
    */

   // 3.
   /*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
   */

    return 0;
}