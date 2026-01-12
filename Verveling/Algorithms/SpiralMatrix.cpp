#include <iostream>
#include <vector>

std::vector<std::vector<bool>> visited;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};


void initVisited(std::vector<std::vector<int>>& mat){
    for(int i = 0; i < mat.size(); i++){
        std::vector<bool> vb;
        for(int j = 0; j < mat[i].size(); j++){
            vb.push_back(false);
        }
        visited.push_back(vb);
    }
}

bool isAllowed(std::vector<std::vector<int>>& mat, int row, int col){
    if(row  >= mat.size() || row < 0 || col < 0 || col >= mat[0].size())
        return false;
    if(visited[row][col])
        return false;
    return true;
}



void solve(std::vector<std::vector<int>>& mat,int row, int col, int tel, int dir){
    while(tel != mat.size() * mat[0].size()){
        if(isAllowed(mat, row + dy[dir], col + dx[dir])){
            std::cout << mat[row][col] << " ";
            visited[row][col] = true;
            row += dy[dir];
            col += dx[dir];
            tel += 1;
        }else{
            dir = ((dir + 1) % 4);
        }        
    }
    std::cout << mat[row][col] << " ";
}
void printMatrix(std::vector<std::vector<int>>& mat){
    initVisited(mat);
    solve(mat, 0, 0, 1, 0);

}
int main(){
    std::cout << "-\n";

    std::vector<std::vector<int>> mat =
    {
        { 1, 2, 3, 4, 5},
        {16, 17, 18, 19, 6},
        {15, 24, 25, 20, 7},
        {14, 23, 22, 21, 8},
        {13, 12, 11, 10, 9}
    };
    std::cout << "Spiral = ";
    printMatrix(mat);
    std::cout << "\n";
    return 0;
}