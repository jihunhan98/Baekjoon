#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n[100] = {2};
    int x = 3;
    int index = 1;
    int cnt;
    
    while(true)
    {
        cnt = 3;
        bool toggle = true;
        
        while((x/2) > cnt)
        {
            if(x % cnt == 0)
            {
                toggle = false;
                break;
            }
            
            else
                cnt += 2;
        }
        
        if(toggle)
            n[index++] = x;

        x += 2;
        
        if(n[index-1] * n[index-2] > 10000)
            break;
        
      
    }

    int num;
    int ans;
    cin >> num;
    
    for(int i=0; i<index; i++)
    {
        if(n[i] * n[i+1] > num)
        {
            ans = n[i] * n[i+1];
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
