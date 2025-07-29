// Program to convert time in minutes to hours and minutes

#include <stdio.h>
#include <math.h>

int main() {
    
    int min, hour, remain_min;
    
    printf("Enter the time in minutes: ");
    scanf("%d",&min);
    
    hour = min / 60;
    
    remain_min = min % 60;
    
    if(remain_min == 0){
        
        if(hour==1){
        printf("%d minutes in terms of hours is: %d hour", min, hour);
        }
        else{
        printf("%d minutes in terms of hours is: %d hours", min, hour);
        }
    }
    
    else{
        
        if(hour==1){
            printf("%d minutes in terms of hours is: %d hour and %d minutes", min, hour, remain_min);
        }
        else{
        printf("%d minutes in terms of hours is: %d hours and %d minutes", min, hour, remain_min);
        }
    }
    
    return 0;
}