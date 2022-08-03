#include <iostream>
#include<vector>
using namespace std;
int fib(int N, vector<int> &dp) // you know made all variables.
{
    // base case
    if (N <= 1)
        return N;    //----> base case is already learnt in recurssion.

    // step 3
    if (dp[N] != -1) //-----> if element is already present return this.
        return dp[N];

    // step2
    dp[N] = fib(N - 1,dp) + fib(N - 2,dp);    //recurssion me isko relation lete //the but here isse dp ke trems me lekhenge 
    return dp[N];
}
int main()
{

    int n;
    cin >> n;

    vector<int> dp(n + 1); //---> Made dp array.
    for (int i = 0; i <= n; i++)
        dp[i] = -1; // ---> initialize with dp = i

    cout << fib(n, dp) << endl; // function to call fib numbers.

    return 0;
}