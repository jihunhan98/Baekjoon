#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    queue<int>q;
    int n,k;
    cin >> n >> k;
    
    for(int i=0; i<n; i++)
        q.push(i+1);
    
    int cnt = 0;
    cout << '<';
    while(cnt < n)
    {
        for(int i=0; i<k-1; i++)
        {
            int x = q.front();
            q.push(x);
            q.pop();
        }
       
        cout << q.front();
        if(cnt != n-1)
            cout << ", ";
        q.pop();
        cnt += 1;
    }
    cout << '>' << endl;
    
    return 0;
}
