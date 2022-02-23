#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int>v;
    int n,k;
    cin >> n >> k;
    
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end(),greater<>());
    
    int cnt = 0;
    
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] <= k)
        {
            int coin = k / v[i];
            k = k - (v[i] * coin);
            cnt += coin;
        }
        
        if(k == 0)
            break;
    }
    
    cout << cnt << endl;
    
    return 0;
}


