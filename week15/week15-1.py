class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python把字串的迴圈寫出來
        N=len(s) #先知道字串的長度
        ans=0
        j=-0
        for i in range(N):#字串的迴圈
            maxCost -=abs(ord(s[i])-ord(t[i]))
            while maxCost <0:
                maxCost +=abs(ord(s[j])-ord(t[j]))
                j+=1
            ans=max(ans,i-j+1)
            print(s[i],t[i]) #字串的陣列

        return ans