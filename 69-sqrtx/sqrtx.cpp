class Solution {
public:
    int mySqrt(int x) 
    {
        if ( x==0 || x==1 ) return x; 
        
        int left = 1; 
        int right = x/2;
        int ans = 0;
        double mid = 0;

        while ( left <= right )
        {
            mid = left + (right - left) / 2;
            if ( mid*mid == x) 
            {   
                return mid;
            }
            else if ( mid*mid < x)
            {
                ans = mid;
                left = mid + 1;
            }
            else 
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};