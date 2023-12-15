## 无重复最长子序列
```cpp
#include <bits/stdc++.h>//这个代码t了


using namespace std;
vector<int> num(100010);

bool check(int j,int i){
    set<int> s(num.begin()+j,num.begin()+i+1);
    if(s.size()<i-j+1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int res=0;
    for(int i=1,j=0;i<n;i++){
        while(j<i&&check(j,i)){j++;}
        res = max(res,i-j+1);
    }
    cout<<res<<endl;
}
```


### 优化代码
```cpp
#include <bits/stdc++.h>

using namespace std;
int num[100010];
int have[100010];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int res = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        have[num[i]]++;
        while (have[num[i]] > 1)
        {
            have[num[j]]--;
            j++;
        }
        res = max(res, i - j + 1);
    }
    cout << res << endl;
}

```



```cpp
#include <bits/stdc++.h>

using namespace std;
long long int A[100010], B[100010];

long long int binarySearch(int l, int r, long long int x)
{
    while (l < r)
    {
        long long int mid = (l + r) / 2;
        if(B[mid]>=x){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    return l;
}

int main()
{
    long long int n, m, x;
    cin >> n >> m >> x;
    for (long long int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (long long int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    for (long long int i = 0; i < n; i++)
    {
        long long int j = binarySearch(0, m - 1, x - A[i]);
        if ((A[i]+B[j])==x)
        {
            cout << i << " " << j << endl;
        }
    }
}
```