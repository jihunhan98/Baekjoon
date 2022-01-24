    #include <iostream>
    #include <algorithm>

    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
       
        int n,m;
        int tree[1000000] = {0};
        
        cin >> n >> m;
        
        for(int i = 0; i<n; i++)
            cin >> tree[i];
        
        sort(tree, tree+n);
        
        int cnt = n/2;
        int sum = 0;

        
        for(int i=cnt; i<n; i++)
            sum = sum + tree[i] - tree[cnt];
        
        cnt = tree[cnt];
        
        if(sum > m)
        {
            while(true)
            {
                sum = 0;
                cnt++;
                
                for(int i=0; i<n; i++)
                {
                    if(tree[i] > cnt)
                        sum = sum + tree[i] - cnt;
                }
                
                if(sum <= m)
                    break;
            }
        }
        
        else if(sum < m)
        {
            while(true)
            {
                cnt--;
                sum = 0;
            
                for(int i=cnt; i<n; i++)
                    sum = sum + tree[i];
                
                for(int i=0; i<n; i++)
                {
                    if(tree[i] > cnt)
                        sum = sum + tree[i] - cnt;
                }
                
                if(sum >= m)
                    break;
            }
        }
        
        cout << cnt << endl;
    }
