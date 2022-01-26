#include <iostream>
#include <algorithm>

 using namespace std;

 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    
     int p[1001] = {0};
     int n;
     
     cin >> n;
     
     for(int i=0; i<n; i++)
         cin >> p[i];
     
     sort(p,p+n);
     int sum = 0;
     int i = 0;
     
     while(i <= n)
     {
         for(int k=0; k<i; k++)
             sum = sum + p[k];
         
         i++;
     }
     
     cout << sum << endl;
     
     return 0;
 }
