#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x;
    cin >> x;
    
    int64_t n[91] = {0,1};
    
    for(int i=2; i<=90; i++)
        n[i] = n[i-1] + n[i-2];
    
    cout << n[x] << endl;
   
    return 0;
}
