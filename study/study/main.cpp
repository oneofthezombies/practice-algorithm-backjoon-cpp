#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
using namespace std;

using value_t = unsigned long long;

int main()
{
    value_t n = 0;
    scanf("%llu", &n);

    vector<vector<value_t>> d(n + 1, vector<value_t>(11, 0));

    for (value_t i = 1; i <= 9; ++i)
    {

    }

    printf("%llu", d[n]);

    return 0;
}
