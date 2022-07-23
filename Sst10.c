/*WAP to take date as input in below given format and convert the date format and display the result as given below.
User Input date fomat-"DD/MM/YYYY"(27/11/2022)
Output format-
"Day-DD ,Month-MM ,Year-YYYY"(Day-27 ,Month-11 ,Year-2022)
*/
#include<stdio.h>
int main()
{
    int dd,mm,yy;
    printf("Enter date:-");
    scanf("%d%d%d",&dd,&mm,&yy);
    printf("\nEntered date is :%02d/%02d/%04d\n",dd,mm,yy);
    printf("Day-%d ,Month-%d ,Year-%d",dd,mm,yy);
    return 0;
}
