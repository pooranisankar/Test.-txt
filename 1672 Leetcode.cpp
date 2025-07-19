#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int MaximumWealth(vector<vector<int>>& accounts) {
        int maximum=-1;
        for(int i=0;i<accounts.size();i++){
            int temp=0;
            for(int j=0;j<accounts[i].size();j++){
                temp+=accounts[i][j];
            }
            maximum=max(maximum,temp);
        }  
        return maximum; 
    }
};
int main(){
    Solution sol;
    vector<vector<int>>accounts={{1,5},{7,3},{3,5}};
    int result=sol.MaximumWealth(accounts);
    cout<<"Maximum wealth is:"<<result<<endl;
    return 0;
}