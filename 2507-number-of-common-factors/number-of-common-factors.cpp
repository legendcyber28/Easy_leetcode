class Solution {
public:
    int commonFactors(int a, int b) {
        int smaller = min(a,b);
        int cnt=0;
        for(int i =1; i<=smaller; i++)
        {
            if(a%i==0 && b%i==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};