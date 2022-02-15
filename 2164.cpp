#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int arr[1000000] = {0};
    cin >> n;
    
    for(int i=0; i<n; i++)
        arr[i] = i+1;
    
    int first = 0;
    int last = n-1;
    
    while(first != last)
    {
        first += 1;
        last++;
        arr[last] = arr[first];
        first += 1;
    }
    
    cout << arr[first] << endl;
}
