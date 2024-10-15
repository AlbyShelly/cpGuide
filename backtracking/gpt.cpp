#include <iostream>
#include <vector>

using namespace std;

int countPaths(int x, int y, int n, vector<vector<bool>>& visited) {
    // If reached the bottom-right corner
    if (x == n - 1 && y == n - 1) return 1;
    
    int count = 0;
    // Mark current cell as visited
    visited[x][y] = true;
    
    // Four possible directions
    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    // Explore all directions
    for (int i = 0; i < 4; ++i) {
        int nx = x + directions[i][0];
        int ny = y + directions[i][1];
        
        // Check if the new cell is within bounds and unvisited
        if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[nx][ny]) {
            count += countPaths(nx, ny, n, visited);
        }
    }
    
    // Unmark the cell before backtracking
    visited[x][y] = false;
    
    return count;
}

int main() {
    int n = 7;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    int result = countPaths(0, 0, n, visited);
    cout << "Total paths: " << result << endl;
    
    return 0;
}
