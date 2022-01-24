#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x;
    cin >> x;
    
    int n[100000] = {0};
    n[2] = 1, n[3] = 1;
    
    if(x==1)
        cout << 0 << endl;
    else if(x < 4)
        cout << 1 << endl;
    else
    {
        for(int i=4; i<=x; i++)
        {
            if( (i%2) != 0 && (i%3) != 0)
                n[i] = n[i-1] + 1;
            
            else if( (i % 2) == 0 && (i % 3) != 0)
            {
                if(n[i/2] < n[i-1])
                    n[i] = n[i/2] + 1;
                
                else
                    n[i] = n[i-1] + 1;
            }
            
            else if( (i % 2) != 0 && (i % 3) == 0)
            {
                if(n[i/3] <= n[i-1])
                    n[i] = n[i/3] + 1;
                else
                    n[i] = n[i-1] + 1;
            }
            
            else if( (i % 3) == 0 && (i % 2) == 0)
            {
                if(n[i/3] <= n[i-1] && n[i/3] <= n[i/2] )
                    n[i] = n[i/3] + 1;
                else if(n[i/2] <= n[i-1] && n[i/2] <= n[i/3])
                    n[i] = n[i/2] + 1;
                else if(n[i-1] <= n[i/3] && n[i-1] <= n[i/2])
                    n[i] = n[i-1] + 1;
            }
        }
    }
    
    
    cout << n[x] << endl;
    
    return 0;
}
