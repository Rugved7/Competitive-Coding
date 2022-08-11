/*
class Solution {
public:
    int Solve(vector<int>& satisfaction,int index,int time){
//         base case
        if(index==satisfaction.size())
            return 0;
        
        int incl = satisfaction[index]* (time+1) + Solve(satisfaction,index+1,time+1);
        int excl = 0 + Solve(satisfaction,index+1,time);
        
        return max(incl,excl);
    } 
    
    
//     DP
    
        int SolveMem(vector<int>& satisfaction,int index,int time,vector<vector<int>> &dp){
//         base case
        if(index==satisfaction.size())
            return 0;
            
//         step 3
            if(dp[index][time] != -1)
                return dp[index][time];
            
        int incl = satisfaction[index]* (time+1) + SolveMem(satisfaction,index+1,time+1,dp);
        int excl = 0 + SolveMem(satisfaction,index+1,time,dp);
        
//             step 2
        return dp[index][time] = max(incl,excl);
    }
    
    int maxSatisfaction(vector<int>& satisfaction) {
//         sorting vector
        sort(satisfaction.begin(), satisfaction.end());
        
//         step 1
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1, -1));
         return SolveMem(satisfaction,0,0,dp);
    }
};
*/