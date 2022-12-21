#include <stdio.h>

int main(void)
{
    int king = 1;
    int queen = 1;
    int rook = 2;
    int bi = 2;
    int knight = 2;
    int pawn = 8;

    int i_king, i_queen, i_rook, i_bi, i_knight, i_pawn;

    scanf("%d %d %d %d %d %d", &i_king, &i_queen, &i_rook, &i_bi, &i_knight, &i_pawn);

    printf("%d %d %d %d %d %d", king-i_king, queen-i_queen, rook-i_rook, bi-i_bi, knight-i_knight, pawn-i_pawn);

    return 0;
}