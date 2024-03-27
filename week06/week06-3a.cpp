///leetcode 3005. Count Elements With Maximum Frequency

int maxFrequencyElements(int* nums, int numsSize) {
    
    int a[101]={}; ///每個陣列個子裡都會補0 
    int best=0;
    for(int i=0; i<numsSize ;i++){
        int now = nums[i]; //現在要統計的數字是now
        a[now]++; ///現在的數字now 統計出現的次數a[now]++;增加一次
        if(a[now]>best) best = a[now];
}

    int ans=0;
    for(int i=1;i<=100;i++){
        if(a[i]==best) ans+=a[i]; //是最好的答案那增加次數　a[now]++;增加1次
    }
    return ans;
}