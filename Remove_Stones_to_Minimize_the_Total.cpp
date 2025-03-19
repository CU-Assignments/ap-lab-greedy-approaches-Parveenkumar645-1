class Solution {
    public:
    bool static help(int x,int y)
    {
        return x>y;
    }
        int minStoneSum(vector<int>& piles, int k) {
            
            int n=piles.size();
            priority_queue<int,vector<int>>pq(piles.begin(),piles.end());
            int ans=accumulate(piles.begin(),piles.end(),0);
            int i=0;
            while(k>0 && !pq.empty())
            {
                int temp=pq.top();
                pq.pop();
                ans-=(temp/2);
                pq.push(temp-temp/2);
                k--;
            }
            
            return ans;
        }
    };