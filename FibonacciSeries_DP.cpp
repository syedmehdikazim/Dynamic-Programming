#include<bits/stdc++.h>
#include<vector>
using namespace std;

/*int fib(int n, vector<int>&dp)
{
        if(n==0 || n==1)
        {
                return n;
        }

        if(dp[n]!=-1)
        {
                return dp[n];
        }
        else
        {
                dp[n]=fib(n-1,dp)+fib(n-2,dp);
                return dp[n];
        }
}*/
int main()
{
        int n;
        cin>>n;

        //BOTTOM TO TOP WITH SPACE OPTIMISATION

        int prev1=0;
        int prev2=1;

        

        for(int i=2;i<=n;i++)
        {
                
                int curr=prev1+prev2;
                prev1=prev2;
                prev2=curr;
        } 
       cout<<prev2<<endl;
      

       /*TOP TO BOTTOM 
       
        vector<int>dp(n+1);

        for(int i=0;i<=n;i++)
        {
                dp[i]=-1;
        }

        cout<<fib(n,dp)<<endl;*/
        
}
