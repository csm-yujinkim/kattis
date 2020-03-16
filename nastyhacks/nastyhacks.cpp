// nastyhacks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// If r >= e - c, then you DO advertize.
// Otherwise, do NOT advertize.

#include <iostream>
#include <sstream>

int main()
{
    size_t n;
    std::cin >> n;
    for (size_t i = 0; i < n; ++i) {
        int r, e, c;
        std::cin >> r;
        std::cin >> e;
        std::cin >> c;

        // r: revenue without advertizing
        // e: revenue with advertizing
        // c: cost of advertizing
        //  r: profit from not advertizing
        //  e - c: profit from advertizing
        
        if (r == e - c) {
            std::cout << "does not matter\n";
        }
        else if (r >= e - c) {
        std::cout << "do not advertise\n";
        }
        else {
            std::cout << "advertise\n";
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
