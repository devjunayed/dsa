// test.h
#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <utility>

template <typename Func, typename... Args>
void test(int t, Func func, Args &&...args)
{
    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        std::cout << "Test Case " << i + 1 << ": For value " << n << std::endl
                  << std::endl;
        func(n, std::forward<Args>(args)...);
        std::cout << std::endl;
    }
}

#endif
