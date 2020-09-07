#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you,char computer){
    // 0 for draw 1 for win and -1 for lose
    // sw
    // ws
    // sg
    // gs
    // wg
    // gw
    // 
    if(you==computer){
        return 0;
    }
    if(you=='s' && computer=='w'){
        return 1;
    }else if(computer=='s' && you=='w'){
        return -1;
    }
    if(you=='s' && computer=='g'){
        return -1;
    }else if(you=='g'&& computer=='s'){
        return 1;
    }
    if(you=='w' && computer=='g'){
        return 1;
    }else if(you=='g'&& computer=='w'){
        return -1;
    }
     if(you=='w' && computer=='g'){
        return -1;
    }else if(you=='g'&& computer=='w'){
        return 1;
    }
}
int main()
{

    char you,computer;
    srand(time(0));
    int number=rand()%100+1;
    if(number<=30){
        computer='s';
    }else if(number>30 && number<70){
        computer='w';
    }else{
        computer='g';
    }
    printf("enter 's' for snake and 'g' for gun and 'w' for water:");
    scanf("%c",&you);
    int result=game(you,computer);
    printf("you choosed %c and computer choosed %c\n",you,computer);
    if(result==0){
        printf("match draw");
    }else if(result==1){
        printf("you win");

    }else{
        printf("you lose");
    }
    return 0;

}