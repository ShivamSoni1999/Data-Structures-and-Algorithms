class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        
    // Create a result 2D matrix to store the transpose
	int m = matrix.size(), n = matrix[0].size();
	vector<vector<int>> result(n, vector<int>(m));

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
            // Copying the value from the matrix to the transpose matrix
			result[j][i] = matrix[i][j];
		}
	}

	return result;
 }
};


 