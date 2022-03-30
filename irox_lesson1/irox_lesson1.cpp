// irox_lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

void ex23(std::bitset<8>n, int k)
{
    std::cout << (n << k)<<"\n";
}

void ex24(int x, int y)
{
    std::cout << std::bitset<8>((x|y)-(x&y)) << "\n";
}
void ex20(int n)
{
    int zugi = n & 0xAA, ezugi = n & 0x55;
    zugi >>=  1;
    ezugi <<= 1;
    std::cout << std::bitset<8>(zugi | ezugi) << "\n";
}

void ex41(int  n)
{
    int mis = 1, sum=1;
    while (n-->1)
    {
        mis += 2;
        sum += mis;       
    }
    std::cout << sum << "\n";
}

void ex47(int x, int y)
{
    std::cout<<"min: "<< (y ^ ((x ^ y) & -(x < y))) << " max: "<< (x ^ ((x ^ y) & -(x < y)))<<"\n";
}

int main()
{
    std::cout << "Hello World!\n";
    ex23(0b11110000, 2);
    ex24(0b11110000, 0b00111100);
    ex20(0b11000110);
    ex41(6);
    ex47(5, 8);
    ex47(8, 5);
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
