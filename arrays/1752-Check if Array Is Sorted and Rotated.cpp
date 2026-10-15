// approach 1: sort+double+search o(nlogn)
class Solution {
public:
    bool check(vector<int>& nums) {
        
        vector<int> s=nums;
        sort(s.begin(),s.end());
         vector<int> doubled=s;
        doubled.insert(doubled.end(),s.begin(),s.end());
       

        auto it=search(doubled.begin(),doubled.end(),nums.begin(),nums.end());
        if(it==doubled.end()){
            return false;
        }
        return true;

        
    }
};
// Approach 2: Count Decreases 
/* o(n)
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};
*/
