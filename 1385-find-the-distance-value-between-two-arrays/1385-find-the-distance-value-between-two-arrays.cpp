class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        int compare_count = 0;

        for(int i = 0; i < arr1.size();i++) {

            bool valid = true;

            for(int j = 0;j < arr2.size();j++) {

                int target = abs(arr1[i] - arr2[j]);

                if(target <= d){
                    valid = false;
                    break;
                }

            }
                if(valid){
                    compare_count++;
                }
        }

        return compare_count;
        
    }
};