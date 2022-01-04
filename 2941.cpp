#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;
    int cnt = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        switch (s[i]) {
            case 'c':
                if(s[i+1] == '=' || s[i+1] == '-')
                    i++;
                 
                cnt++;
                break;
                
            case 'd':
                if(s[i+1] == '-')
                    i++;

                else if(s[i+1] == 'z' && s[i+2] == '=')
                    i += 2;
                
                cnt++;
                break;
                
            case 'j':
                if(s[i-1] != 'l' && s[i-1] != 'n')
                    cnt++;
                
                break;
                 
            case '=':
                if(s[i-1] != 's' && s[i-1] != 'z')
                    cnt++;
                
                break;
                
            default:
                cnt++;
                break;
                
        }
    }
    
    cout << cnt << endl;
    return 0;
}
