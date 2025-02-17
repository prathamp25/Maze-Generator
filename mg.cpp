#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 10;
char maze[N][N];

void generateMaze() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            maze[i][j] = (rand() % 3 == 0) ? '#' : ' ';
    maze[0][0] = 'S';
    maze[N-1][N-1] = 'E';
}

void displayMaze() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << maze[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    generateMaze();
    displayMaze();
    return 0;
}
