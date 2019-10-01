#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int choice;
    stack<int> s;
    int element;
    while(N--)
    {
         cin>>choice;
         if(choice == 1 )
         {
             cin>>element;
             if(s.empty())
             {
             s.push(element);
             }
             else
             {
                 s.push(max(element,s.top()));
             }   
         }
         else if(choice ==2)
         {
             if(!s.empty()){
             s.pop();
             }
         }
         else
         {
             cout<<s.top()<<"\n";  
         }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}