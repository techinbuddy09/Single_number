//approach one using u can scan each element and check for the current number step by step in each loop
// can be done using has map approach where we can create a trable for # and frequency and everytime updating the frequency
//-Bitwise XOR operation approach-..using properties
//P1)A^A=0
//P2)0^A=A
//P3)A^B^C=A^C^B
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len=nums.size();// TO STORE THE LENGTH OF THE ARRAY
        int ans=0;// TO STORE THE ANS
        for(int i=0;i<len;i++)// THE LOOP TO ITERATE OVER THE ELEMENTS IN THE ARRAY
        {
            ans=ans^nums[i];//PERFORMING THE XOR OPERATIONS
        }
        return ans;// AND THEN RETURNING THE FINAL ANS
    }
};
//Example 1-2^2=0 and 0^1=1
//Example-2-4^1=4^1^=4^2^1=4^2^1^1=4^2=4^2^2=4^0=4
//Example-3 1^=1
