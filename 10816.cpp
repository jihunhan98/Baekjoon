#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    vector<int>v;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    int m;
    cin >> m;
    
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        
        int left = 0;
        int right = n-1;
        
        while(left <= right)
        {
            int mid = (left + right) / 2;
            
            if(v.at(mid) == x)
            {
                auto a = lower_bound(v.begin(),v.end(),v.at(mid));
                auto b = upper_bound(v.begin(), v.end(), v.at(mid));
                cout << b - a << ' ';
                break;
            }
            else if(v.at(mid) < x)
                left = mid + 1;
            else
                right = mid - 1;
        }
        
        if(left > right)
            cout << "0 ";
    }
    
    cout << endl;
    
    return 0;
    
}


