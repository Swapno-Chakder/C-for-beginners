#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int max_number = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        max_number = max(max_number, num);
    }

    cout << max_number;

    return 0;
    // the end
}
