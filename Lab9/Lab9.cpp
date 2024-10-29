﻿// Lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    queue<int> q;
    int n, x, count = 0;

    cout << "Введіть розмір черги: ";
    cin >> n;
    cout << "Введіть " <<n <<" цілих чисел: \n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }
    while (!q.empty()) {
        if (q.front() % 2 != 0) {
            count++;
        }
        q.pop();
    }
    cout << "Кількість непарних елементів у черзі: "<< count << endl;
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
