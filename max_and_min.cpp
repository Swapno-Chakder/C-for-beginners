#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int min_number = min({A, B, C});
    int max_number = max({A, B, C});

    cout << min_number << " ";
    cout << max_number;

    return 0;
}
