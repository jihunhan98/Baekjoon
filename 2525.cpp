#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    b += c;
    
    if(b >= 60)
    {
        a += b / 60;
        b = b % 60;
    }
    
    
    if(a >= 24)
        a = a % 24;
    
    cout << a << ' ' << b << endl;
    
    return 0;
}


