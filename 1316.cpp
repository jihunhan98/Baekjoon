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
    int cnt = 0;
    
    for(int i=0; i<n; i++)
    {
        bool alpha[26] = {0};
        string s;
        bool toggle = true;
        cin >> s;
        
        int tmp = s[0] - 97;
        alpha[tmp] = true;
        
        for(int j=1; j<s.size(); j++)
        {
            if(s[j-1] != s[j])
            {
                int tmp = s[j] - 97;
                
                if(alpha[tmp])
                {
                    toggle = false;
                    break;
                }
                else
                    alpha[tmp] = true;
            }
        }
        
        if(toggle)
            cnt += 1;
        
    }
    
    cout << cnt << endl;
    
    return 0;
}
