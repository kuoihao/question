#include <bits/stdc++.h>

using namespace std;

int main()
{
    double num;
    cin >> num;
    double l = -10000, r = 10000;

    while (r - l >= 0.000001)
    {
        double mid = (l + r) / 2;
        if (pow(mid, 3) > num)
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