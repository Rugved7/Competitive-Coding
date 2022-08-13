/*
    // Write your code here.
    int solveMem(vector<int> &num , int x , vector<int>&dp){
//     Base Case
    if(x == 0) 
        return 0;
    if(x < 0) 
        return INT_MAX;
    
//     dp case 
    if(dp[x] != -1) 
        return dp[x];
//     Recursive case
    
    int mini = INT_MAX;
    
    for(int i = 0; i < num.size(); ++i)
    {
        int ans = solveMem(num , x-num[i] , dp);
        if(ans != INT_MAX)
        mini = min(mini , ans+1);
        
    }
//     Recurrence Relation
    dp[x] = mini;
    
    return mini;
}


int minimumElements(vector<int> &num, int x)
{
    vector<int>dp(x+1 , -1);
    int ans = solveMem(num , x , dp);
    if(ans == INT_MAX) 
        return -1;
    else
        return ans;
}
*/