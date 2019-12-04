//Given the n and the n-1 size array in which number from 1 to N is given and one number is missing and 
//you have to find the on missing number
//and you can follow this approach of taking xor of the numbers from 1 to N and store it as X1
//Taking xor of the given n-1 numbers an store it in x2
//take xor of the x1 and x2
    #include<iostream>
    using namespace std;
    int main()
    {
        int t;//testcases
        cin>>t;
        int n; 
        while(t--)
        {
            cin>>n;
            int p=1;
            for(int i=2;i<=n;i++)
            {
            p=p^i;
            }
            int arr[n-1];
            int q;   
            for(int i=0;i<n-1;i++)
            {
                cin>>arr[i];
            }
            q=arr[0]; 
            for(int i=1;i<n-1;i++)
            {
                q=q^arr[i]; 
            }
            int ans=p^q;//you have your answer
            cout<<ans<<"\n";
        }
        return 0;
    }