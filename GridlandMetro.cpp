 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sortbysec(const tuple<int, int, int> & a,  const tuple<int, int, int> & b) 
    { 
        return (get<1>(a) < get<1>(b)); 
    } 
int main()
    {
      ll  n,m;
      int k;
      cin>>n>>m>>k;
     // int p=1;
      ll first,second,third; 
      ll total;
    total=(long long)n * (long long)m;
      ll  sum=0;
    //ll  prev1=0,prev2=0,prev3=0;
      vector<tuple<ll ,ll ,ll >> vi;
      int inp_count=k;
      if(k > 0)
      {
      while(inp_count--)
      {
         cin>>first>>second>>third;
         vi.push_back(make_tuple(first,second,third));
      }
      stack<tuple<ll ,ll ,ll >> si;
      tuple<ll ,ll ,ll > top;
      int p=0;
      for(int i=0;i<k;)
      {     
           //p=0;
          //cout<<"i = "<<i<<"\n";
          p=i+1;
          int count=0;
          //cout<<"not in while loop"<<"\n";
          while((get<0>(vi[p-1]) == get<0>(vi[p])) && p<k){
            p++;
            count++;
            }
        if(count>=1)
        {
           // cout<<"I am in"<<"\n";
            sort(vi.begin()+i,vi.begin()+i+count+1,sortbysec);
            si.push(vi[i]);
           // i++;
            for (int j = i+1 ; j <p; j++) 
           {   
        // get interval from stack top 
                top = si.top(); 
  
        // if current interval is not overlapping with stack top, 
        // push it to the stack 
               if (get<2>(top) < get<1>(vi[j])) {
               //get<1>(vi[j]) = get<1>(top);    
               si.push(vi[j]); 
               i++;
               }
        // Otherwise update the ending time of top if ending of current 
        // interval is more 
        else if (get<2>(top) <= get<2>(vi[j])) 
        { 
            get<2>(top) = get<2>(vi[j]); 
            si.pop(); 
            si.push(top);
            i++; 
          }

          else {
               i++; 
             }
       } 
       i=i+1;
        }
        else{
          // cout<<"I am inside this"<<"\n";
              si.push(vi[i]);
              i++;
        }
      }
     while(!si.empty()){
         top=si.top();
         sum+=get<2>(top)-get<1>(top)+1;
         //cout<<sum<<" ";
         si.pop();
     }
     ll result=total-sum;
     cout<<result<<"\n";
      }
      else{
          cout<<total<<"\n";
      }
    return 0;
    }