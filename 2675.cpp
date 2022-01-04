#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int cnt;
        string s;
        cin >> cnt >> s;
        for(int i=0; i< s.size(); i++)
        {
            for(int k=0; k<cnt; k++)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}
