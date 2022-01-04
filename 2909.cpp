    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        string x,y;
        cin >> x >> y;
        
        char tmp = x[0];
        x[0] = x[2];
        x[2] = tmp;
        
        tmp = y[0];
        y[0] = y[2];
        y[2] = tmp;
        
        int a = stoi(x);
        int  b = stoi(y);
        
        if(a>b)
            cout << a << endl;
        else
            cout << b << endl;
        
        return 0;
    }
