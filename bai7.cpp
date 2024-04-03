#include<iostream>
using namespace std;

void print1(int a, int b) {
    for (int i = 0; i < a; i++) {
        cout << " ";
    }
    for (int i = 0; i < b; i++) {
        cout << "*";
    }
    cout << endl;
}
void print2(int a) {
    int c = 1;
    for (int i = 1; i <= a; i++) {
        print1(a - i, c);
        c =c + 2;
    }
}


int main()
{
    int n;
    cin >> n;
    print2(n);
}