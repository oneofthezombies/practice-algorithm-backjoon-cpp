#pragma once

void problem10809()
{
//#include <cstdio>
//#include <cstring>
//    using namespace std;
//
//    using uint_t = unsigned int;
//
//    int main()
//    {
//        const size_t kBufSize = 256;
//        char buf[kBufSize];
//        scanf("%s", buf);
//
//        const size_t kAlpSize = 'z' - 'a' + 1;
//        uint_t alp[kAlpSize];
//        memset(alp, -1, sizeof alp);
//
//        for (size_t bi = 0; buf[bi] != '\0'; ++bi)
//        {
//            size_t ai = buf[bi] - 'a';
//
//            if (alp[ai] != -1)
//                continue;
//
//            alp[ai] = bi;
//        }
//
//        for (size_t ai = 0; ai < kAlpSize; ++ai)
//        {
//            printf("%d", alp[ai]);
//
//            if (ai < kAlpSize - 1)
//                printf(" ");
//        }
//
//        return 0;
//    }
}

void problem10820()
{
//#include <cstdio>
//#include <cstring>
//#include <cstdint>
//#include <string>
//#include <iostream>
//    using namespace std;
//
//    int main()
//    {
//        auto isLowerCase = [](const char c) { return c >= 'a' && c <= 'z'; };
//        auto isUpperCase = [](const char c) { return c >= 'A' && c <= 'Z'; };
//        auto isNumber = [](const char c) { return c >= '0' && c <= '9'; };
//        auto isSeperator = [](const char c) { return c == ' '; };
//
//        enum Key : size_t
//        {
//            kLower,
//            kUpper,
//            kNumber,
//            kSeparator,
//
//            kSize
//        };
//
//        for (string buf; getline(cin, buf);)
//        {
//            if (buf.empty())
//                break;
//
//            uint32_t table[kSize] = { 0, };
//
//            for (auto c : buf)
//            {
//                if (isLowerCase(c))
//                {
//                    table[kLower]++;
//                    continue;
//                }
//
//                if (isUpperCase(c))
//                {
//                    table[kUpper]++;
//                    continue;
//                }
//
//                if (isNumber(c))
//                {
//                    table[kNumber]++;
//                    continue;
//                }
//
//                if (isSeperator(c))
//                {
//                    table[kSeparator]++;
//                    continue;
//                }
//            }
//
//            std::printf("%u %u %u %u\n", table[kLower], table[kUpper], table[kNumber], table[kSeparator]);
//        }
//
//        return 0;
//    }
}