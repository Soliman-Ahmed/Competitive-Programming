class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        //Keyidea: the value of the cell inside the final matrix is the summation of how many times did its row and column get increased.
        
        int counter = 0;
        int columns[50] {0}, rows[50] {0}; //max value of m and n is 50
        //int columns[50] = {0}, rows[50] = {0}; //This line has more SC (Space complexity)

        for (auto index : indices) {
            
            columns[index[1]]++;
            rows[index[0]]++;
        }

        for (int i = 0; i<m; i++)
        {
            for (int j = 0; j<n; j++)
            {
                if((rows[i] + columns[j]) & 1) counter++;
            }
        }

        return counter;
    }
};
