/* project10.c
 * 01/06/2025
 * Airline arrival and departure time
 */


 #include <stdio.h>


 int main(void){

    int depart[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrive[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int hour, minute, user_time;
    int i, depart_mins, depart_hour, arrive_mins, arrive_hour;
    char time_stamp;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    user_time = hour * 60 + minute;

    // find nearest arrival time
    for (i = 0; i < 7; i++){
        if (user_time <= (depart[i] + (depart[i+1] - depart[i])/2))
            break;
    }
    depart_mins = depart[i] % 60;
    depart_hour = depart[i] / 60;
    time_stamp = (depart_hour >= 12) ? 'p' : 'a';
    depart_hour = (depart_hour > 12) ? depart_hour - 12 : (depart_hour == 12) ? 
        12 : depart_hour;

    printf("Closest departure time is %d:%2.2d %c.m.", depart_hour, depart_mins, time_stamp);


    return 0;

 }