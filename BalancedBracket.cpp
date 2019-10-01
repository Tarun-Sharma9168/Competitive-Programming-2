#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        stack<char> si;
        cin>>s;
        int p=0;
        bool flag=true;
        while(s[p]!='\0')
        {

            //flag=true;
             if(s[p] == '('|| s[p]=='[' || s[p]=='{' )
             {
                si.push(s[p]);
             }   
             else
             {
                 if(!si.empty())
                 {
                 int temp=si.top();
                 int new_sp=s[p];
                 if((new_sp == 41 && temp == 40)||(new_sp==93 && temp==91) ||(new_sp==125 && temp==123)) 
                 {
                     si.pop();
                 }
                 else
                 {
                     flag=false;
                     break;
                 }
             }
            }
             p++;
        }
        if(flag && si.empty())
        {
            cout<<"YES"<<"\n";
        }
        else if(flag && !si.empty())
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}
