#include <stdio.h>
#include <stdlib.h>
int game();

int main(){
    char user, pc;
    printf("Enter 'S' for Snake, 'W' for Water and 'G' for Gun\n");
    scanf("%c", &user);
    int result = game(user, pc);
    if (result == 0){
        printf("Match Draw!");
    }
    else if (result == -1){
        printf("You Lose!");
    }
    else if (result == 1){
        printf("You Won!");
    }
    return 0;
}

int game(){
    char user, pc;
    //losing arguements
    if (user == 's' && pc == 'g'){
        return -1;
    }
    else if (user == 'g' && pc == 'w'){
        return -1;
    }
    else if (user == 'w' && pc == 's'){
        return -1;
    }
    //wining arguements
    if (user == 'g' && pc == 's'){
        return 1;
    }
    else if (user == 'w' && pc == 'g'){
        return 1;
    }
    else if (user == 's' && pc == 'w'){
        return 1;
    }
    //draw arguement
    if (user == pc){
        return 0;
    }
}