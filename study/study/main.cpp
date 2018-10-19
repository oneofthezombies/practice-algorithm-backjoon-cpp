#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdint>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    auto isLowerCase = [](const char c) { return c >= 'a' && c <= 'z'; };
    auto isUpperCase = [](const char c) { return c >= 'A' && c <= 'Z'; };
    auto isNumber = [](const char c) { return c >= '0' && c <= '9'; };
    auto isSeperator = [](const char c) { return c == ' '; };

    enum Key : size_t
    {
        kLower,
        kUpper,
        kNumber,
        kSeparator,

        kSize
    };

    for (string buf; getline(cin, buf);)
    {
        if (buf.empty()) 
            break;

        uint32_t table[kSize] = { 0, };

        for (auto c : buf)
        {
            if (isLowerCase(c))
            {
                table[kLower]++;
                continue;
            }

            if (isUpperCase(c))
            {
                table[kUpper]++;
                continue;
            }

            if (isNumber(c))
            {
                table[kNumber]++;
                continue;
            }

            if (isSeperator(c))
            {
                table[kSeparator]++;
                continue;
            }
        }

        std::printf("%u %u %u %u\n", table[kLower], table[kUpper], table[kNumber], table[kSeparator]);
    }

    return 0;
}
