#include <stdio.h>

typedef struct{
    int hrs, mins, secs;
}time;
int main(){
    time x, y, t;
    printf("Write time 1 in hrs, mins, secs :\n");
    scanf(" %d %d %d",&x.hrs,&x.mins,&x.secs);
    printf("Write time 2 in hrs, mins, secs :\n");
    scanf(" %d %d %d",&y.hrs,&y.mins,&y.secs);
    t.hrs=x.hrs+y.hrs;
    t.mins=x.mins+y.mins;
    t.secs=x.secs+y.secs;
    if(t.secs>=60){
       t.mins+=t.secs/60;
       t.secs=t.secs%60;
    }
    if(t.mins>=60){
       t.hrs+=t.mins/60;
       t.mins=t.mins%60;
    }
    printf("Time is \n%d : %d : %d",t.hrs,t.mins,t.secs);
    return 0;
}