/*WAP to take time as an input in below given format and convert the time format and display theresult as given below.
User Input time format-"HH:MM"
Output Format-"HH hour and MM Minute"
*/
#include<stdio.h>
int main()
{
    int hh,mm;
    printf("Enter Time:");
    scanf("%d%d",&hh,&mm);
    printf("%02d:%02d\t",hh,mm);
    printf("%d Hour and %d Minute",hh,mm);
    return 0;
}
