#include "game.h"
#include <stdio.h>

int main () {
    char board[3][3], current_player = 'X';
    int choice;

    initialize_board(board);
    print_board(board);

    while (1){
        printf("Player %c, enter you move (1-9) = ", current_player);
        if (scanf("%d", &choice) != 1){
            printf("Invalid input plese try again");
            while(getchar() != '\n')
            continue;
        }
        if (!is_valid_move(board, choice)){
            printf("invalid move, please try again\n");
            continue;
        }
        
        update_board(board, choice, current_player);
        print_board(board);

        if(check_win(board)){
            printf("PLAYER %c WINS!\n", current_player);
            break;
        }

        if(check_draw(board)){
            printf("ITS A DRAW! GAME OVER!\n");
            break;
        }

        if(current_player == 'X'){
            current_player = 'O';
        } else {
            current_player = 'X';
        }
    } 

    return 0;
}