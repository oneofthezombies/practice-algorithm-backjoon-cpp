#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
using namespace std;

using value_t = long long;
using arr_t = vector<value_t>;
using arr2d_t = vector<vector<value_t>>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	value_t n = 0;
	cin >> n;

    arr_t A(n + 1, 0);
    arr_t D(n + 1, 0);

    for (value_t ai = 1; ai <= n; ++ai)
    {
        cin >> A[ai];
    }



    return 0;
}
