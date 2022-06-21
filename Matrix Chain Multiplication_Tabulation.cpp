    int matrixMultiplication(int N, int arr[])
    {
        int dp[N][N];
        
        
        for(int i=0;i<N;i++) dp[i][i]=0;
        
        for(int i=N-1;i>=1;i--) 
        {
            for(int j=i+1;j<N;j++) 
            {
                
              int mn=INT_MAX;
                for(int k = i;k<j;k++)
                {
                    int steps=arr[i-1]*arr[k]*arr[j] + dp[i][k]+ dp[k+1][j];
                    mn = min(mn,steps);
                    
                }
        
        dp[i][j] = mn;  
                
                
                
            }
        }
       
        
        return dp[1][N-1];
    }
