#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<bool>v(20,false);
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        string s;
        int x;
        
        cin >> s;
        
        if(s == "add")
        {
            cin >> x;
            v[x-1] = true;
        }
        else if(s == "remove")
        {
            cin >> x;
            v[x-1] = false;
        }
        else if(s == "check")
        {
            cin >> x;
            if(v[x-1])
                cout << "1";
            else
                cout << "0";
            cout << "\n";
        }
        else if(s == "toggle")
        {
            cin >> x;
            if(v[x-1])
                v[x-1] = false;
            else
                v[x-1] = true;
        }
        else if(s == "all")
        {
            for(int i=0; i<20; i++)
                v[i] = true;
        }
        else if(s == "empty")
        {
            for(int i=0; i<20; i++)
                v[i] = false;
        }
    }
    return 0;
}

