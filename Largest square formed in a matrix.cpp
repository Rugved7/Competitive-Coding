/*class Solution{
public:

// Recusssive Solution

     int Solve(vector<vector<int>> mat,int i, int j,int &maxi){
         if(i>=mat.size() || j>=mat[0].size())
         return 0;
         
         int right = Solve(mat,i,j+1,maxi);
         int diagonal = Solve(mat,i+1,j+1,maxi);
         int down = Solve(mat,i+1,j,maxi);
         
         if(mat[i][j] == 1){
            int ans  = 1 + min(right,min(diagonal,down));
            maxi = max(maxi,ans);
            return ans;
         }
         else {
             return 0;
         }
     }
     
    //  Dynamic Solution
       int SolveMem(vector<vector<int>> &mat,int i, int j,int &maxi,vector<vector<int>> &dp){
        
         //   base case
        
         if(i>=mat.size() || j>=mat[0].size())
         return 0;
    
          //  step 3
          
        if(dp[i][j] != -1)  
        return dp[i][j];
        
         int right = SolveMem(mat,i,j+1,maxi,dp);
         int diagonal = SolveMem(mat,i+1,j+1,maxi,dp);
         int down = SolveMem(mat,i+1,j,maxi,dp);
      
        //   step 2
        
         if(mat[i][j] == 1){
            dp[i][j]  = 1 + min(right,min(diagonal,down));
            maxi = max(maxi,dp[i][j]);
            return dp[i][j];
         }
         else {
             return dp[i][j] = 0;
         }
     }
     
    //  Step 1 
int maxSquare(int n,int m,vector<vector<int>> mat){
    int maxi = 0;
      vector<vector<int>> dp(n,vector<int>(m,-1));
      SolveMem(mat,0,0,maxi,dp);
      return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}
// }
*/