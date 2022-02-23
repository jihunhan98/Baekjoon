#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<long long, long long> a, pair<long long, long long> b)
{
    if(a.second==b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<pair<long long, long long>>v;
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int start,end;
        cin >> start >> end;
        v.push_back(pair<long long, long long>(start,end));
    }

    sort(v.begin(), v.end(), compare);
    
    int cnt = 1;
    long long end = v[0].second;
    
    for(int i=1; i<v.size(); i++)
    {
        if(end <= v[i].first)
        {
            end = v[i].second;
            cnt += 1;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
        
}


