class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcol = image[sr][sc];
        if(oldcol == color) {
            return image;
        }
        else {
            fill(image, sr, sc, oldcol, color);
            return image;
        }
    }

    void fill(vector<vector<int>>& image, int row, int col, int oldcol, int newcol) {
        if(row < 0 || row>=image.size() || col <0 || col >=image[0].size() || image[row][col] != oldcol) {
            return;
        }

        image[row][col] = newcol;
        fill(image, row-1, col, oldcol, newcol);
        fill(image, row+1, col, oldcol, newcol);
        fill(image, row, col-1, oldcol, newcol);
        fill(image, row, col+1, oldcol, newcol);
    }
};