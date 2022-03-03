#include <iostream>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x;
    cin >> x;
    int cnt1 = 0;
    int cnt2 = 0;
    
    for(int i=1; i<=x; i++)
    {
        int t = i;
            while(t % 2 == 0 || t % 5 == 0)
            {
                if(t % 2 == 0)
                {
                    t = t /2;
                    cnt1 += 1;
                }
                
                if(t % 5 == 0)
                {
                    t = t / 5;
                    cnt2 += 1;
                }
            }
    }
    if(cnt1 < cnt2)
        cout << cnt1 << endl;
    else
        cout << cnt2 << endl;

    return 0;
}

