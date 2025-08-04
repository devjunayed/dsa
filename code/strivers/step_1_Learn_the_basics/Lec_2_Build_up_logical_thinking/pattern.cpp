#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include "test.h"

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (n * 2 - 1) - i * 2; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            start = 1;

        for (int j = 0; j < i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int gap = (n*2)-2;
    for (int i = 0; i < n; i++)
    {
        for (int number = 1; i+1 >= number; number++)
        {
            cout << number << " ";
        }

        for (int j = 0;  j < gap; j++)
        {
            cout << "  ";
        }

        for (int number = i+1;  number > 0; number--)
        {
            cout << number << " ";
        }
        gap = gap-2;
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    // test(t, pattern1);
    // test(t, pattern2);
    // test(t, pattern3);
    // test(t, pattern4);
    // test(t, pattern5);
    // test(t, pattern6);
    // test(t, pattern7);
    // test(t, pattern8);
    // test(t, pattern9);
    // test(t, pattern10);
    // test(t, pattern11);
    // test(t, pattern12);

    return 0;
}