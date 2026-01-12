#include <iostream>
#include <vector>

int dx[8] {-2,-1, 1, 2, 2, 1, -1, -2};
int dy[8] {1, 2, 2, 1, -1, -2, -2, -1};

int N = 8;

std::vector<std::vector<bool>> visited(N, std::vector<bool>(N, false));
std::vector<std::vector<int>> places(N, std::vector<int>(N, 0));

bool isAllowed(std::vector<std::vector<int>>& mat, int row, int col){
    if(row < 0 || col < 0 || row >= mat.size() || col >= mat[0].size())
        return false;
    if(visited[row][col])
        return false;
    return true;
}

bool found = false;
void solve(std::vector<std::vector<int>>& mat, int row, int col, int tel){
   
    if((isAllowed(mat, row, col) == false) || places[row][col] != 0)
        return;
    if(N * N == tel){
        places[row][col]=tel;
        found = true;
        return;
    }
    visited[row][col] = true;
    places[row][col] = tel;
    for(int i = 0; i < 8; i++){

        solve(mat, row + dy[i], col + dx[i], tel + 1);
        if(found)
            return;
    }
    visited[row][col] = false;
    places[row][col] = 0;
}   

void KnightTour(){
    solve(places, 0, 0, 1);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            std::cout <<places[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main(){
    KnightTour();
    return 0;
}