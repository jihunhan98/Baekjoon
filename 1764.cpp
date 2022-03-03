#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<string>see;
    vector<string>listen;
    vector<string>both;
    
    int n,m;
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        listen.push_back(s);
    }
    
    for(int i=0; i<m; i++)
    {
        string s;
        cin >> s;
        see.push_back(s);
    }
    
    sort(see.begin(), see.end());
    sort(listen.begin(), listen.end());
    
    
    for(int i=0; i<listen.size(); i++)
    {
        int left = 0;
        int right = see.size()-1;
        
        string s = listen[i];
        
        while(left <= right)
        {
            int mid = (left + right) / 2;
            
            if(see[mid] == s)
            {
                both.push_back(s);
                break;
            }
            else if(see[mid] > s)
                right = mid-1;
            else
                left = mid + 1;
        }
    }
    
    cout << both.size() << "\n";
    
    for(int i=0; i<both.size(); i++)
        cout << both[i] << "\n";
    
    return 0;
}

