class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp;
        int sizm= matrix.size();
       for (int i=0;i< sizm; i++) {
           for (int j = i; j< sizm;j++){
             temp = matrix[i][j];
            matrix[i][j]=matrix[j][i];
             matrix[j][i] = temp;
           }
       }
        for(int i = 0; i < sizm ; i++) {
    	    for(int j = 0 ; j < sizm /2 ; j++) {
    		    swap(matrix[i][j], matrix[i][sizm - 1 - j]);
               
            }
        }
       

    }
};