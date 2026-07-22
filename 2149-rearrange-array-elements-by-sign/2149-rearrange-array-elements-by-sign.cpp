class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> Ans_Nums(n,0);

        int Pos_Index = 0, Neg_Index = 1;

        for(int i = 0; i < n; i++) {

            if(nums[i] < 0) {

                Ans_Nums[Neg_Index] = nums[i];

                Neg_Index += 2;
            }
            else {

                Ans_Nums[Pos_Index] = nums[i];

                Pos_Index += 2;
            }
        }
        return Ans_Nums;
    }
};