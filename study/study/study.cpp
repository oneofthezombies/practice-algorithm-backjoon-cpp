// study.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <vector>
using namespace std;

//ios_base::sync_with_stdio(false);
//cin.tie(nullptr);
//cout.tie(nullptr);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string text;
    getline(cin, text);

    int n;
    cin >> n;

    vector<char> before, after;

    for (auto c : text)
        before.push_back(c);

    for (int i = 0; i < n; ++i)
    {
        char arg0;
        cin >> arg0;

        if (arg0 == 'L')
        {
            if (!before.empty())
            {
                after.push_back(before.back());
                before.pop_back();
            }
        }
        else if (arg0 == 'D')
        {
            if (!after.empty())
            {
                before.push_back(after.back());
                after.pop_back();
            }
        }
        else if (arg0 == 'B')
        {
            if (!before.empty())
            {
                before.pop_back();
            }
        }
        else if (arg0 == 'P')
        {
            char arg1;
            cin >> arg1;

            before.push_back(arg1);
        }
    }

    while (!before.empty())
    {
        after.push_back(before.back());
        before.pop_back();
    }

    while (!after.empty())
    {
        cout << after.back();
        after.pop_back();
    }

    system("pause");

    return 0;
}

