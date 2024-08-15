#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<vector<int>> &matA, vector<vector<int>> &matB, int m, int n)
{
    for (int i = m - 1; i >= 1; --i)
    {
        for (int j = n - 1; j >= 1; --j)
        {
            if (matA[i][j] != matB[i][j])
            {
                int diff = (matB[i][j] - matA[i][j] + 3) % 3;
                matA[i][j] = matB[i][j];
                matA[i - 1][j] = (matA[i - 1][j] + 2 * diff) % 3;
                matA[i][j - 1] = (matA[i][j - 1] + 2 * diff) % 3;
                matA[i - 1][j - 1] = (matA[i - 1][j - 1] + diff) % 3;
            }
        }
    }
    for (int i = 0; i < m; ++i)
    {
        if (matA[i][0] != matB[i][0])
            return false;
    }
    for (int j = 0; j < n; ++j)
    {
        if (matA[0][j] != matB[0][j])
            return false;
    }
    return true;
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int m, n;
        cin >> m >> n;

        vector<vector<int>> matA(m, vector<int>(n));
        vector<vector<int>> matB(m, vector<int>(n));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                char digit;
                cin >> digit;
                matA[i][j] = digit - '0';
            }
        }

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                char digit;
                cin >> digit;
                matB[i][j] = digit - '0';
            }
        }

        if (isPossible(matA, matB, m, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
