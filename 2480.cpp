#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b,c,price;
    cin >> a >> b >> c;
    
    if(a == b && a == c)
        price = 10000 + (a*1000);
    
    else if(a == b || a == c)
        price = 1000 + (a * 100);
    else if(b == c)
        price = 1000 + (b * 100);
    
    else if(a >= b && a >= c)
        price = a * 100;
    else if(b >= a && b >= c)
        price = b * 100;
    else if(c >= a && c >= b)
        price = c * 100;
    
    cout << price << endl;
        
    
    return 0;
}


