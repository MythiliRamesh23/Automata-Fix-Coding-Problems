#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student

{
    int reg;
    
    int jun;
    char name[20];

    int july;

    int aug;

    int sep;

    float tot;

    float avg;

    char eligibilty[5];

};

int main()
{
    struct student s;
    scanf("%d%s%d%d%d%d",&s.reg,s.name,&s.jun,&s.july,&s.aug,&s.sep);
    s.tot = s.jun + s.july + s.aug + s.sep;
    s.avg = (s.tot*100)/84;
    if(s.tot>84)
    {
        printf("Invalid data:No.of.present days is greater than working day");
        
    }
    else{
        if(s.avg>70)
    {
        strcpy(s.eligibilty,"yes");
    }
    else
    {
        strcpy(s.eligibilty,"no");
    }
    printf("Reg.no:%d",s.reg);
    printf("\nName:%s",s.name);
    printf("\nTotal.No.of.present days:%0.0f",s.tot);
    printf("\nAttendence:%0.2f",s.avg);
    printf("\neligibility:%s",s.eligibilty);
    
    }
    
    
    return 0;
}
