#include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    string removeKdigits(string num, int k) {
        stack<char> st;
        string res = "";
        bool preceeding = true;
        for (int i = 0; i < num.size(); i++) {
            while (!st.empty() && k>0 && (st.top()-'0')>(num[i]-'0')) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (!st.empty() && k>0) {
            st.pop();
            k--;
        }
        while (!st.empty()) {
            res = st.top() + res;
            st.pop();
        }
        if (res == "") return "0";
        int c = 0;
        for (int i=0; i<res.size(); i++) {
            if (preceeding && res[i]=='0') c++;
            else preceeding = false;
        }
        res = res.substr(c,res.size());
        return (res == "")? "0": res;
    }
};
int main() {
    string num = "10";
    int k = 2;
    Solution obj;
    string ans = obj.removeKdigits(num, k);
    cout << "Answer: " << ans;
}