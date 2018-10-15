#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
using namespace std;

using value_t = char;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	unsigned int t = 0;
	cin >> t;

    for (unsigned int i = 0; i < t; ++i)
    {
        string str;
        getline(cin >> ws, str);

        bool isValid = true;

        if (str.size() % 2 != 0)
        {
            isValid = false;
        }

        vector<value_t> stack;

        for (auto c : str)
        {
            if (false == isValid)
            {
                break;
            }

            if (c == '(')
            {
                stack.push_back(c);
            }
            else if (c == ')')
            {
                if (stack.empty())
                {
                    isValid = false;
                    break;
                }

                stack.pop_back();
            }
        }

        if (!stack.empty())
        {
            isValid = false;
        }

        if (isValid)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
