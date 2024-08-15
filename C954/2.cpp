// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     size_t t;
//     cin>>t;
//     while(t--){
//         int row,col;
//         cin>>row>>col;
//         vector<vector<int>>nums(row,vector<int>(col));
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cin>>nums[i][j];
//             }
//         }
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 //up //down //right //left
//                 int up=0,down=0,right=0,left=0;
//                 if(i-1>=0)up=nums[i-1][j];
//                 if(i+1<row)down=nums[i+1][j];
//                 if(j-1>=0)left=nums[i][j-1];
//                 if(j+1<col)right=nums[i][j+1];
//                 while(nums[i][j]>up && nums[i][j]>down && nums[i][j]>left && nums[i][j]>right){
//                     nums[i][j]-=1;
//                 }
//             }
//         }
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cout<<nums[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
struct Cell
{
    int value, row, col;
    bool operator<(const Cell &other) const
    {
        return value < other.value; // Use greater than for a max-heap
    }
};
int main()
{
    size_t t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int>> nums(row, vector<int>(col));
        priority_queue<Cell> pq;

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cin >> nums[i][j];
                pq.push({nums[i][j], i, j});
            }
        }

        vector<vector<int>> newNums = nums;

        while (!pq.empty())
        {
            Cell cell = pq.top();
            pq.pop();
            int i = cell.row, j = cell.col;
            int up = (i - 1 >= 0) ? newNums[i - 1][j] : 0;
            int down = (i + 1 < row) ? newNums[i + 1][j] : 0;
            int left = (j - 1 >= 0) ? newNums[i][j - 1] : 0;
            int right = (j + 1 < col) ? newNums[i][j + 1] : 0;
            int maxNeighbor = max({up, down, left, right});
            if (newNums[i][j] > maxNeighbor)
            {
                newNums[i][j] = maxNeighbor;
            }
        }

        for (auto &row : newNums)
        {
            for (auto &cell : row)
            {
                cout << cell << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
