#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<string, string>sitepassward;
    int n,m;
    
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
    {
        string address, passward;
        cin >> address >> passward;
        sitepassward.insert({address,passward});
    }
    
    for(int i=0; i<m; i++)
    {
        string s;
        cin >> s;
        
        auto it = sitepassward.find(s);
        cout << it->second << "\n";
    }
    
    return 0;
}

