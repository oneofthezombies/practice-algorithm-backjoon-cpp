// study.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);

#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <deque>

#include <iostream>
#include <vector>
using namespace std;

using value_t = int;

value_t GetNumComb(const value_t n, vector<value_t>& d)
{
    if (n < 0)
    {
        return 0;
    }

    if (d[n] > 0)
    {
        return d[n];
    }

    if (n == 0)
    {
        d[n] = 1;
        return d[n];
    }

    d[n] = GetNumComb(n - 1, d) + GetNumComb(n - 2, d) + GetNumComb(n - 3, d);

    return d[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    for (value_t ti = 0; ti < t; ++ti)
    {
        int n;
        cin >> n;
        vector<value_t> d(n + 1, 0);
        cout << GetNumComb(n, d) << '\n';
    }

    return 0;
}

