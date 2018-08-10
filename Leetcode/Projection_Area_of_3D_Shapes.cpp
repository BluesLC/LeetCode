class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int result=0;
        int maxnum=0;
         //俯视图
        for(int i=0;i<grid.size();++i){
            for(int j =0;j<grid[i].size();++j){
                if(grid[i][j]!=0){
                    ++result;
                }
            }
        }
       
         //侧视图
        for(int i =0;i<grid.size();++i){
            for(int j =0;j<grid.size();++j){
                if(grid[i][j]>maxnum){
                    maxnum=grid[i][j];
                }
            }
            result+=maxnum;
            maxnum=0;
        }
       
        //正视图
        for(int i =0;i<grid.size();++i){
            for(int j =0;j<grid.size();++j){
                if(grid[j][i]>maxnum){
                    maxnum=grid[j][i];
                }
            }
            result+=maxnum;
            maxnum=0;
        }
        return result;
    }
};