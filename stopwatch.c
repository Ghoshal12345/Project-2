#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int hour,minute,second;
    hour=minute=second=0;
    while(1){
        // clear output screen
        system("cls");
        printf("%.2d : %.2d : %.2d", hour,minute,second);
        // clear buffer output in gcc
        fflush(stdout);
        second++;
        if(second==60){
            minute++;
            second=0;
        }
        if(minute==60){
            hour++;
            minute=0;
        }
        sleep(1); // wait for one second
    }
    return 0;
}