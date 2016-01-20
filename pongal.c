#include <stdio.h>
#include<unistd.h>
int main()
{
    char w[20]="HAPPY PONGAL";
    int i;
    for(i=0;w[i]!='\0';i++)
    {
        printf("%c",w[i]);
        sleep(2);
    }
}
