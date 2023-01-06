#include <stdio.h>
 
int N, answer, board[101][101];
void pastePaper(int x, int y) {
    for (int i = x; i < x + 10; i++) {
        for (int j = y; j < y + 10; j++) {
            board[i][j] = 1;
        }
    }
}
int main(void) {
    scanf("%d", &N);
 
    int x, y;
    for (int i = 1; i <= N; ++i) {
        scanf("%d %d", &x, &y);
        pastePaper(x, y);
    }
 
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            if (board[i][j]) answer++;
        }
    }
 
    printf("%d", answer);
}