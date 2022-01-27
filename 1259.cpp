#include <iostream>
#include <string>

using namespace std;

 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     
     bool toggle;
     
     while(true)
     {
         toggle = true;
         string s;
         cin >> s;
         
         if(s == "0")
             break;
         
         for(int i=0; i<s.size(); i++)
         {
             if(s[i] != s[s.size()-i-1])
             {
                 cout << "no" << endl;
                 toggle = false;
                 break;
             }
         }
         
         if(toggle)
             cout << "yes" << endl;
         
     }
         
     
     return 0;
 }
