#leetcode  2485. Find the Pivot Integer

class Solution:
    def pivotInteger(self, n: int) -> int:
        total =0 #全部加起來得數字
        #第1輪,先算總和total
        for i in range(1,n+1):
            total +=i

        left =0
        for i in range(1,n+1):
            left +=i
            if left + left -i == total: return i
        return -1