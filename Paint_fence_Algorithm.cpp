/*#define MOD 100000007
int add(int a,int b){
    return (a%MOD + b%MOD)%MOD;
}
int mul(int a , int b){
 return ((a%MOD) *1LL  * (b%MOD)) %MOD;
}
        int Solve(int n ,int k){                                                    ........> Recurssive solution 

//             base case
            if(n==1)
                return k;
            if(n==2)
                return add(k,mul (k,k-1));
            int ans = add(mul(Solve(n-2,k),k-1), mul(Solve(n-1,k),k-1));

}


// Memoization

        int SolveMem(int n ,int k,vector<int> &dp){
//             base case
            if(n==1)
                return k;
            if(n==2)
                return add(k,mul (k,k-1));
                                                                                    ........> DP Solution
 //             step 3
            if(dp[n] != -1)
                return dp[n];
//             Step 2
            dp[n] = add(mul(SolveMem(n-2,k,dp),k-1), mul(SolveMem(n-1,k,dp),k-1));
}
int numberOfWays(int n, int k) {
    // Write your code here.

//     Step 1
    vector<int> dp(n+1,-1);
        return SolveMem(n,k,dp);
}
*/