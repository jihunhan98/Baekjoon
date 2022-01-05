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
    
    int n[21] = {0,1};
    
    for(int i=2; i<=20; i++)
        n[i] = n[i-1] + n[i-2];
    
    cout << n[x] << endl;
   
    
    return 0;
}
