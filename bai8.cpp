// bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int rnd1(double n) {
    if (n - int(n) < 0.5) {
        return floor(n);
    }
    else {
        return n+1;
    }
}
int rnd2(double n) {
    if (n - int(n) < 0.5) {
        return int(n);
    }
    return int(n) + 1;
}
int main()
{
    double n;
    cin >> n;
    cout << rnd1(n)<<endl;
    cout << rnd2(n)<<endl;
}

