// 114043773	Apr/23/2021 23:15UTC+5.5	shamanthmuroor	B - Almost Rectangle	GNU C++17	Accepted	31 ms	100 KB

// 1512 B - Almost Rectangle

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char mat[n][n];
        vector<vector<int>> rect;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == '*')
                {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    rect.push_back(temp);
                }
            }
        }

        // Columns are equal
        // Rect 1st row = 1st pair 0,0 and 0,1
        // Rect 2nd row = 2nd pair 1,0 and 1,1
        if (rect[0][1] == rect[1][1]) {
            if (rect[0][1] + 1 <= n - 1)
            {
                mat[rect[0][0]][rect[0][1] + 1] = '*';
                mat[rect[1][0]][rect[1][1] + 1] = '*';
            }
            else if (rect[0][1] - 1 >= 0)
            {
                mat[rect[0][0]][rect[0][1] - 1] = '*';
                mat[rect[1][0]][rect[1][1] - 1] = '*';
            }
        }

        // Rows are equal
        // Rect 1st row = 1st pair 0,0 and 0,1
        // Rect 2nd row = 2nd pair 1,0 and 1,1
        else if(rect[0][0] == rect[1][0]) {
            if (rect[1][0] + 1 <= n - 1)
            {
                mat[rect[0][0]+1][rect[0][1]] = '*';
                mat[rect[1][0]+1][rect[1][1]] = '*';
            }
            else if (rect[1][0] - 1 >= 0)
            {
                mat[rect[0][0]-1][rect[0][1]] = '*';
                mat[rect[1][0]-1][rect[1][1]] = '*';
            }
        }

        else
        {
            mat[rect[0][0]][rect[1][1]] = '*';
            mat[rect[1][0]][rect[0][1]] = '*';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}



// Manual Testing
// 1,3
// 4,1
// 1,1 (1st row & 2nd col)
// 4,3 (2nd row & 1st col)

// 1,3
// 3,1
// 1,1 (1st row & 2nd col)
// 3,3 (2nd row & 1st col)

// 2,3
// 4,2
// 2,2 (1st row & 2nd col)
// 4,3 (2nd row & 1st col)

// // when cols are equal
// 3,1
// 4,1
// 3,2 (1st row & 2nd col+1)
// 4,2 (2nd row & 1st col+1)

// 1,2
// 2,2
// 1,3 (1st row & 2nd col+1) +/- 
// 2,3 (2nd row & 1st col+1) +/-

// // when rows are equal
// 1,1
// 1,3
// 2,3 (1st row+1 & 2nd col)
// 2,1 (2nd row+1 & 1st col)