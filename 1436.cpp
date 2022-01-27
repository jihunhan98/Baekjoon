#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    
     int x = 665;
     int cnt = 0;
     int n;
     
     string s;
     cin >> n;
     
     while(true)
     {
         if(cnt == n)
             break;
         
         x += 1;
         s = to_string(x);
         
         for(int i=0; i<s.size() - 2; i++)
         {
             if(s[i] == '6' && s[i+1] == '6' && s[i+2] == '6')
             {
                 cnt += 1;
                 break;
             }
         }
     }
         
     cout << x << endl;
     
     return 0;
 }
