#include<bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
    vector<int> arr;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int cnt = 0;
        arr.push_back(price);
        for (int i=arr.size()-1; i>=0; i--) {
            if (arr[i]<=price) cnt++;
            else break;
        }
        return cnt;
    }
};
int main() {
    // The input arrays for operations and their respective arguments
    vector<string> operations = {"StockSpanner", "next", "next", "next", "next", "next", "next", "next"};
    vector<vector<int>> arguments = {{}, {100}, {80}, {60}, {70}, {60}, {75}, {85}};
    
    // Initialize a vector to store the output
    vector<int> output;
    
    // Variable to hold the StockSpanner object
    StockSpanner* stockSpanner = nullptr;
    
    for (int i = 0; i < operations.size(); ++i) {
        if (operations[i] == "StockSpanner") {
            // If the operation is "StockSpanner", create a new object
            stockSpanner = new StockSpanner();
            output.push_back(-1);  // Use -1 to represent "null"
        } else if (operations[i] == "next") {
            // If the operation is "next", call the next function with the argument
            int price = arguments[i][0];
            int result = stockSpanner->next(price);
            output.push_back(result);
        }
    }
    
    // Print the output
    cout << "[";
    for (int i = 0; i < output.size(); ++i) {
        if (i > 0) cout << ", ";
        if (output[i] == -1) cout << "null";  // Print "null" when encountering -1
        else cout << output[i];
    }
    cout << "]" << endl;
    
    // Clean up dynamically allocated memory
    delete stockSpanner;

    return 0;
}