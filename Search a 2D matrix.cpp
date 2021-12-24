class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int count=0;         
        int row_size=matrix.size();
        int col_size=matrix[0].size();
        while( count <= row_size-1)
        {
            if( target <= matrix[count][col_size-1])
            {
                for(int x=0;x<col_size;x++)
                {
                    if( target == matrix[count][x])
                        return true;
                }
                return false;
            }
            else
            {
                count++;
            }
        }
        return false;
    }
};