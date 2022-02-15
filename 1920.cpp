#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int a[100000] = {0};
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    sort(a,a+n);
   
    int m;
    cin >> m;
    
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        
        int left = 0;
        int right = n;
        int mid;
        
        while(left <= right)
        {
            mid = (left+right)/2;
            
            if(a[mid]>x)
                right = mid-1;
            else if(a[mid] == x)
                break;
            else
                left = mid+1;
        }
        
        if(a[mid] == x)
            cout << "1\n";
        else
            cout << "0\n";
    }
    
    return 0;
}
