#include<iostream>
using namespace std;
#define n 100
class stack
{
    int * arr;
    int top;

public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;

    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"its already empty";
            return;
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"its empty";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1;
    }
};
    int main()
    {
        stack s;
        s.push(1);
        s.push(3);
        cout<<s.Top()<<endl;
        s.pop();
        cout<<s.Top()<<endl;
        cout<<s.empty();
       return 0;
    }

















/*#include<iostream>
using namespace std;
#define n 100
class stack{
    int *arr;
    int top;

public :
    stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack is full";
            return;
        }
        else
        {
            top++;
            arr[top]=x;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is already empty";
            return;
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"no element is there";
            return -1;
        }
        else
            return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;

    return 0;
}
*/
