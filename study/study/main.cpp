#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
using namespace std;

using value_t = unsigned int;
vector<value_t> d;

int main()
{
    d.resize(4, 0);
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    value_t last = 3;

    value_t t = 0;
    scanf("%u", &t);

    while (t-- > 0)
    {
        value_t n = 0;
        scanf("%u", &n);

        if (n <= last)
        {
            printf("%u\n", d[n]);
            continue;
        }

        d.resize(n + 1, 0);

        for (value_t i = last + 1; i <= n; ++i)
        {
            d[i] = d[i - 3] + d[i - 2] + d[i - 1];
            d[i] %= 10007;
        }

        printf("%u\n", d[n]);
    }

    return 0;
}
