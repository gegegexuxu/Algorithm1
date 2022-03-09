class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int* Presum = new int[nums.size() + 1]; //创建前缀和数组
        int* hash = new int[k]; //创建哈希表
        memset(hash,0,sizeof(int) * k);
        int answer = 0;
        Presum[0] = 0;
        for(int i = 1; i <= nums.size(); i++) {
            Presum[i] = (((Presum[i - 1] + nums[i - 1]) % k) + k) % k; //前缀和数组初始化
            //cout << Presum[i] << endl;
            if(Presum[i] == 0) {
                answer++;
            }
            if(hash[Presum[i]] != 0) {  //通过哈希表统计重复元素数量，每有一对相等的值，就有一个答案
                answer += hash[Presum[i]];
                hash[Presum[i]]++;
            } else {
                hash[Presum[i]]++;
            }
        }
        return answer;
    }
};
