 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int startRow=0, endRow= matrix.size()-1;
        int startCol=0, endCol= matrix[0].size()-1;

        while(startRow<=endRow && startCol<=endCol){
            for(int i=startCol;i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
            }
            startRow++;

            for(int i=startRow;i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
            }
        
            endCol--;

        //    We are doing so that element don't repeat
            if(startCol> endCol || startRow> endRow){
                break;
            }


            for(int i=endCol;i>=startCol;i--){
                ans.push_back(matrix[endRow][i]);
            }
            endRow--;

             for(int i=endRow;i>=startRow;i--){
                ans.push_back(matrix[i][startCol]);
            }
            startCol++;

        }

        return ans;
    }
