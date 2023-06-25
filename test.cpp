#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n, m;
    cin >> n >> m;
    long long x = n;
    unsigned int a = 0;
    long long ans = 1;
    while (n + m > ans)
    {
        cout << ans << " " << n << endl;
        n += m;
        if (n > x)
            n = x;
        n -= ans;
        if (n + m < ans)
            break;
        ans++;
    }
    cout << ans << endl;
}