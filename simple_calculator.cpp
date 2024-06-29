#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;
    int sum = x + y;
    cout << x << " " << "+" << " " << y << " " << "=" << " " << sum << endl;
    long long int multi = x * y;
    cout << x << " " << "*" << " " << y << " " << "=" << " " << multi << endl;
    int sub = x - y;
    cout << x << " " << "-" << " " << y << " " << "=" << " " << sub << endl;
}