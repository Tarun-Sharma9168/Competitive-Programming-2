    #include<iostream>
    #include<vector>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;

        int n,k;
        while(t--)
        {
        vector<int> ab_senior;
        bool arr[100001];
        for(int i=0;i<100001;i++)
        {
            arr[i]=false;
        }
        bool flag=true;
        cin>>n>>k;
        int result;
        for(int i=1;i<=n;i++)
        {
            if(i <= k)
            {
                result=i+k;
                if(result <= n)
                {
                    ab_senior.push_back(result);
                    arr[result]=true;
                }
                else{
                    flag=false;
                    break;
                }
            }
            else{
                result=i-k;
                if(arr[result]){
                    result=i+k;
                }
                if(result >n){
                    flag=false;
                    break;
                }
                ab_senior.push_back(result);
                arr[result]=true;
            }
        }

        if(flag)
        {
             for(auto it=ab_senior.begin();it!=ab_senior.end();++it)
             {
                 cout<<*it<<" ";
             }
             cout<<"\n";
        }
        else{
            cout<<"-1"<<"\n";
        }
        }
        return 0;
    }