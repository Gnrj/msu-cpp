#include <print>
#include <iostream>

int
main()
{
    int x;
    int s{}; // инициализация 0

    while (std::cin >> x) {
        s += x;
    }

    std::println("{}", s);
}
