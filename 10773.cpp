#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  
    stack<int>s;
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++){
        int x;
        cin >> x;
        
        if(x != 0)
            s.push(x);
        else
            s.pop();
    }
    
    long long sum = 0L;
    
    while(!s.empty())
    {
        sum = sum + s.top();
        s.pop();
    }
    
    cout << sum << endl;

}
