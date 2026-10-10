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

int is_valid_choice(char board[3][3], int choice){
    if(choice < 1 || choice > 9){
        return 0;
    }
    int row = (choice - 1)/3;
    int col = (choice - 1)%3;
    if(board[row][col] == 'X' || board[row][col] == 'O' ){
        return 0;
    }
    return 1;
}

void update_board(char board[3][3], int choice, char symbol){
    int row = (choice - 1)/3;
    int col = (choice - 1)%3;
    board[row][col] = symbol;
}