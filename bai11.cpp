#include<vector>
#include <iostream>
#include<string>
#include<cmath>

using namespace std;
vector <int> a(int n) {
    vector<int>c;
    while (n > 0) {
        c.push_back(n % 2);
        n /= 2;
    }
    vector<int> result(c.size());
    for (int i = c.size() - 1; i >= 0; i--) {
        result[c.size() - 1 - i] = c[i];
    }
    return result;
}
int chuyenSangThapPhan(int n) {
    string s = to_string(n);
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            sum += pow(2, s.length() - 1 - i);
        }
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int>e = a(n);
    for (int i = 0; i < e.size(); i++) {
        cout << e[i];
    }
    int d;
    cin >> d;
    cout << chuyenSangThapPhan(d);
}
