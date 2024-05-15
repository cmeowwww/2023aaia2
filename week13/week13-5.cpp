leetcode 1219. Path with Maximum Gold

class Solution:
    def getMaximumGold(self, grid: List[List[int]]) -> int:
        M,N=len(grid),len(grid[0])

        def helper(i,j):
            if i<0 or j<0 or i>=M or j>=N: return 0
            if grid[i][j]==0: return 0
            gold_here=grid[i][j]
            grid[i][j] =0
            ans1 = helper(i-1,j)
            ans2 = helper(i+1,j)            
            ans3 = helper(i,j+1)
            ans4 = helper(i,j-1)
            grid[i][j] = gold_here
            return gold_here+max(ans1,ans2,ans3,ans4)

        ans=0
        for i in range(M):
            for j in range(N):
                ans=max(ans,helper(i,j))

        return ans