//Code accepted and practiced in Leetcode
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //For storing the index values
        vector<pair<int,int>>temp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){

                if(matrix[i][j]==0){
                    temp.push_back({i,j});
                }
            }
        }
        for(auto it: temp){
        for(int i=0;i<matrix.size();i++){
            matrix[i][it.second]=0;
        }

        for(int i=0;i<matrix[0].size();i++){
            matrix[it.first][i]=0;
        }
        }
        
    }
};