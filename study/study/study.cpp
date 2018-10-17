#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <deque>
#include <string>
using namespace std;

using value_t = unsigned int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    value_t n = 0;
    cin >> n;

    value_t m = 0;
    cin >> m;

    deque<value_t> queue(n);
    for (value_t ni = 0; ni < n; ++ni)
        queue[ni] = ni + 1;

    const value_t m_minus_1 = m - 1;
    cout << '<';
    while (queue.size() > 1)
    {
        for (value_t i = 0; i < m_minus_1; ++i)
        {
            queue.push_back(queue.front());
            queue.pop_front();
        }

        cout << queue.front() << ", ";
        queue.pop_front();
    }

    cout << queue.front() << '>';

    return 0;
}
