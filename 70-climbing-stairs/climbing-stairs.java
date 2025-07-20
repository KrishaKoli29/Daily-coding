class Solution {
    public int climbStairs(int n) 
    {
        if (n == 0 || n == 1) return 1;
  
        int oneStep = 1;
        int twoStep = 1;
        for (int i=2; i<=n; i++)
        {
            int temp = oneStep + twoStep;
            oneStep = twoStep;
            twoStep = temp;
        }    
        return twoStep;
    }
}