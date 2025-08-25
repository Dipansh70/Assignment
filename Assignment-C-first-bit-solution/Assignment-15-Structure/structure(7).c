#include <stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};

void main() {
	
    struct Time t1 , t2;

    t1.hour = 10;
    t1.minute = 45;
    t1.second = 30;

    printf("Time 1 : %02d:%02d:%02d \n", t1.hour, t1.minute, t1.second);
    
    
    printf("Enter hour");
    scanf("%d",&t2.hour);
    
    printf("Enter minute");
    scanf("%d",&t2.minute);
    
    printf("Enter second");
    scanf("%d",&t2.second);
    
    printf("Time 2: %02d:%02d:%02d\n", t2.hour,t2.minute,t2.second);
    
}
