// study.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);

#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <vector>

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cout << '<';
    deque<int> ns(n);
    for (int i = 0; i < ns.size(); ++i)
        ns[i] = i + 1;

    const int n_1 = n - 1;
    const int m_1 = m - 1;
    for (int ni = 0; ni < n_1; ++ni)
    {
        for (int mi = 0; mi < m_1; ++mi)
        {
            ns.push_back(ns.front());
            ns.pop_front();
        }
        cout << ns.front() << ", ";
        ns.pop_front();
    }
    cout << ns.front() << '>';

    system("pause");

    return 0;
}

