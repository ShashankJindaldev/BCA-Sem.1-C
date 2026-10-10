#include "game.h"
#include <stdio.h>

void initialize_board(char board[3][3]){
    char count = '1';
    for(int i = 0; i <= 2; i++){
        for (int j = 0; j <=2; ++j){
            board[i][j] = count;
            count++;
        }
    }
}

void print_board(char board[3][3]){
    for(int i = 0; i <= 2; i++){
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        printf("---|---|---\n");
    }
}