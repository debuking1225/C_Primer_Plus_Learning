#include <stdio.h>
#include <string.h>
int main()
{
    printf("please enter your download speed in Mbs and the file size in MBs\n");
    float download_speed;
    scanf("%f", &download_speed);
    float file_size;
    scanf("%f", &file_size);
    float download_time = file_size * 8 / download_speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", download_speed, file_size);
    printf("downloads in %.2f seconds.\n", download_time);
}