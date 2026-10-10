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

int is_valid_move(char board[3][3], int choice){
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

void update_board(char board[3][3], int choice, char current_player){
    int row = (choice - 1)/3;
    int col = (choice - 1)%3;
    board[row][col] = current_player;
}

int check_win(char board[3][3]){
    for(int i = 0; i <= 2; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return 1;
        }
    }
    for(int i = 0; i <= 2; i++){
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            return 1;
        }
    }
        
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
            return 1;
        }
    
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
            return 1;
        }
    return 0;
}

int check_draw(char board[3][3]){
    if(check_win(board)){
        return 0;
    }

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            if(board[i][j] >= '1' && board[i][j] <= '9'){
                return 0;
            }
        }
    }
    return 1;
}