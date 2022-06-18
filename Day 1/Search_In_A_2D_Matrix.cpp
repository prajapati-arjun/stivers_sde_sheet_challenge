// Codestudo

#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
        for(int i = 0; i< m; i++)
        {
            for(int j = 0; j< n; j++)
            {
                if(target==mat[i][j])
                        return 1;
            }
        }
    return 0;
    }




