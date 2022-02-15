#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b;
    int ans;
    cin >> a >> b;
    
    int n = a;
    
    while(true)
    {
        if(a % n == 0)
        {
            if(b % n == 0)
            {
                ans = n;
                cout << ans << endl;
                break;
            }
        }
        n--;
    }
    
    a = a / ans;
    b = b / ans;
    cout << a * b * ans << endl;
}
