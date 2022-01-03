#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count[30] = {};
    cin >> str;
    
    for(int i=0; i<str.size(); i++)
        str[i] = tolower(str[i]);
    
    for(int i=0; i<str.size(); i++)
    {
        int a = int(str[i]);
        count[a-97] += 1;
    }
    

    
    bool toggle = true;
    int max = 0;
    int ans = 0;
    
    for(int i=0; i<30; i++)
    {
        if(max < count[i])
        {
            max = count[i];
            ans = i;
            toggle = true;
        }
        else if(max == count[i])
            toggle = false;
    }
    
    if(toggle)
    {
        char a = ans+65;
        cout << a;
    }
    else
        cout << '?';
}
