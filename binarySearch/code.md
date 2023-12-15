# 二分题目

1. 数的位置

```cpp
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n, q;
    cin >> n >> q;
    ll num[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    while (q-- > 0)
    {
        ll k;
        cin >> k;
        ll l = 0, r = n - 1;
        ll fr, fl;

        while (l < r)
        {
            ll mid = (l + r) / 2;
            if (num[mid] >= k)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }//从左到右逼近
        fl = l;

        l = 0, r = n - 1;
        while (l < r)
        {
            ll mid = (l + r + 1) / 2;
            if (num[mid] <= k)
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }//从左到右逼近，两个板子都是找到第一个满足条件的。
        fr = r;

        if (num[fl] != k)
        {
            cout << "-1 -1\n";
            continue;
        }
        cout << fl << " " << fr << endl;
    }
}
```

三次方根

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double num;
    cin >> num;
    double l = -10000, r = 10000;

    while (r - l >= 0.0000001)
    {
        double mid = (l + r) / 2;
        if (pow(mid, 3) >= num)
        {
            r = mid;
        }
        else
        {
            l = mid + 0.0000001;
        }
    }

    printf("%.6lf\n",l);
}
```
