#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  
    while(true)
    {
        
        string s;
        getline(cin,s);
        
       if(s.size()==1 && s[0] == '.')
           break;
        
        stack<char>c1;
        stack<char>c2;

        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '[' || s[i] == ']' || s[i] == '(' || s[i] == ')')
                c1.push(s[i]);
        }
        
        while(true)
        {
            if(c1.empty() && c2.empty())
            {
                cout << "yes" << endl;
                break;
            }
            else if(c1.empty())
            {
                cout << "no" << endl;
                break;
            }
            
            else{
                if(c1.top() == ')' || c1.top() == ']')
                {
                    c2.push(c1.top());
                    c1.pop();
                }
                else
                {
                    if(c2.empty())
                    {
                        cout << "no" << endl;
                        break;
                    }
                    else if((c1.top() == '(' && c2.top() == ')') || (c1.top() == '[' && c2.top() == ']'))
                    {
                        c1.pop();
                        c2.pop();
                    }
                    else
                    {
                        cout << "no" << endl;
                        break;
                    }
                }
            }
            
        }
    }

}
