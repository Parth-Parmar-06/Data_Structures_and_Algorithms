#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i=n-1; i>=0; i--) {
            while (!st.empty() && st.top()<=nums[i]) st.pop();
            if (st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            st.push(nums[i]); 
        }
        return ans;
    }
    vector<int> nextGreaterElementIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for (int i=n-1; i>=0; i--) {
            while (!st.empty() && nums[st.top()]<=nums[i]) st.pop();
            if (st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            st.push(i); 
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {10,4,8,12,0,12,13,1};
    Solution obj;
    vector<int> ans = obj.nextGreaterElement(nums);
    vector<int> ansI = obj.nextGreaterElementIndex(nums);
    cout << "Answer: [ ";
    for (auto i: ans) {
        cout << i << " ";
    }
    cout << "]" << endl;
    cout << "Answer Index: [ ";
    for (auto i: ansI) {
        cout << i << " ";
    }
    cout << "]";
}