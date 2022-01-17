int n,d,tmp;
    bool toggle;
    int cnt[10] = {0};
    
    cin >> n >> d;
    
    
    while(true)
    {
        toggle = true;
        n += 1;
        tmp = n;
        
        for(int i=0; i<10; i++)
            cnt[i] = 0;
        
        if(n == 100000000)
        {
            n = -1;
            break;
        }
        while(true)
        {
            if(tmp < d)
                break;
            
            else
            {
                if(cnt[tmp%d] == 0)
                {
                    cnt[tmp%d]++;
                    tmp = tmp/d;
                }
                
                else
                {
                    toggle = false;
                    break;
                }
            }
        }
        
        if(toggle && cnt[tmp] == 0)
            break;
    }
    
    cout << n << endl;
