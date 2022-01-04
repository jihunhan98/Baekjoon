#include <iostream>
#include <string>
using namespace std;

class Stack{
    int data[10000];
    int tos;
    
public:
    Stack(){this->tos = -1;}
    void push(int x){this->data[++tos] = x;}
    int pop(){
        if(tos == -1)
            return -1;
        else
            return data[tos--];
        }
    int size(){return tos+1;}
    bool empty(){
        if(this->tos == -1)
            return 1;
        else
            return 0;
    }
    int top(){
        if(this->tos == -1)
            return -1;
        else
            return this->data[tos];
    }
    
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Stack stack;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        string s;
        int x;
        cin >> s;
        
        if(s == "push")
        {
            cin >> x;
            stack.push(x);
        }
        else if(s == "top")
            cout << stack.top() << endl;
        else if(s == "size")
            cout << stack.size() << endl;
        else if(s == "empty")
            cout << stack.empty() << endl;
        else if(s == "pop")
            cout << stack.pop() << endl;

    }
    
    return 0;
}
