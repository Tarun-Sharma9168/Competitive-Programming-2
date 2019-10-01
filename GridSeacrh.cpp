        #include<iostream>
        using namespace std;
        int main()
        {
            int t;
            cin>>t;
            int R_big_matrix,C_big_matrix;
            //int r,c;
            int r_small_matrix,c_small_matrix;
            while(t--)
            {
            cin>>R_big_matrix>>C_big_matrix;
            char Big_matrix[R_big_matrix][C_big_matrix];

            for(int i=0;i<R_big_matrix;i++){
                for(int j=0;j<C_big_matrix;j++){
                    cin>>Big_matrix[i][j];

                    //cout<<Big_matrix[i][j]<<" ";
                }
                //cout<<"\n";
            }

            cin>>r_small_matrix>>c_small_matrix;
            char Small_matrix[r_small_matrix][c_small_matrix];


            for(int i=0;i<r_small_matrix;i++){
                for(int j=0;j<c_small_matrix;j++){
                    cin>>Small_matrix[i][j];

                    //cout<<Small_matrix[i][j]<<" ";
                }
                //cout<<"\n";
            }
            int p=0;
            int q=0;
            int count=0;
            bool flag=false;
            bool small_flag=false;
            int total_count=(r_small_matrix) * (c_small_matrix);
            //cout<<"YAhan tal pahuncha"<<"\n";
            for(int i=0; i<= (R_big_matrix)-(r_small_matrix) ; i++)
            {  //cout<<"Super mama ready"<<"\n";      
                //p=(p % (r_small_matrix));
                    //  q=0; 
                 //    cout<<p<<" "<<q<<"\n";
                for(int j=0; j<= (C_big_matrix-c_small_matrix) ; j++)
                {      //p=p%r_small_matrix;
                       //q=0; 
                   //    cout<<"I am in a for loop"<<"\n";
                    if(Big_matrix[i][j] == Small_matrix[0][0] && Big_matrix[i][j+c_small_matrix-1] == Small_matrix[0][c_small_matrix-1] &&  Big_matrix[i+r_small_matrix-1][j] == Small_matrix[r_small_matrix-1][0]    &&  Big_matrix[i+r_small_matrix-1][j+c_small_matrix-1]== Small_matrix[r_small_matrix-1][c_small_matrix-1])
                    {
                        count=0;
                         for(int p=0; p<r_small_matrix;p++){
                             for(int q=0; q<c_small_matrix;q++){
                                 if(Big_matrix[p+i][q+j]==Small_matrix[p][q]){
                                     count++;
                                     flag=true;
                                 }
                                 else{
                                     flag=false;
                                     break;
                                 }  
                             }
                             if(flag==false)
                             break;
                         }
                               if(flag && count==total_count){
                               //cout<<count<<"\n";
                               cout<<"YES"<<"\n";
                               break; 
                    }
                    }    
        }
        if(flag)break;
    }   

        if(!flag){
             cout<<"NO"<<"\n"; 
                } 
            }
            return 0;
        }