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
    
    int alpha[26];
    
    for(int i=0; i<26; i++)
        alpha[i] = -1;
    
    for(int i=0; i<s.size(); i++)
    {
        int x = s[i]- 97;
        
        if(alpha[x] == -1)
            alpha[x] = i;
    }
    
    for(int i=0; i<26; i++)
        cout << alpha[i] << ' ';
    
    cout << endl;
    
    return 0;
}
