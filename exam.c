#include <stdio.h>

struct A{
    int h; //학번
    char name[50]; //이름
    int kuk; // 국어
    int math; //수학
    int eng; //영어
    
}i;

int main(void)
{

    char name[50];

    int point[50][4];
    float ev[50];

    while(1)
    {
        int n=0;

        printf("1. input point\n");
        printf("2. print student\n");
        printf("3. Save\n");
        printf("4. lode\n");
        printf("5. End\n\n");
        printf("Select the menu number!\n");

        int sel=0;
        scanf("%d", &sel);

        if(sel==1)
        {
            printf("input your point!\n");

            while(1)
            {


                printf("number: ");
                scanf("%d", &i.h);
                point[n][0]=i.h;

                printf("name: ");
                scanf("%s", i.name);
                name[n]=i.name[0];

                printf("korean: ");
                scanf("%d", &i.kuk);
                point[n][1]=i.kuk;

                printf("math: ");
                scanf("%d", &i.math);
                point[n][2]=i.math;

                printf("english: ");
                scanf("%d", &i.eng);
                point[n][3]=i.eng;


                ev[n]=i.kuk/3+i.math/3+i.eng/3;
                

                printf("End: 0\n");

                int end;
                scanf("%d", &end);


                if(end==0)
                    break;

                else
                   n++;


            }

        }
        
        if(sel==2)
        {
            for(int t=0; t<n+2; t++)
            {
                printf("number: %d\n", point[t][0]);
                
                printf("Korean: %d\n", point[t][1]);
                printf("Math: %d\n", point[t][2]);
                printf("English: %d\n", point[t][3]);
                printf("EVR: %f\n\n", ev[t]);
            }
        }

        if(sel==3)
        {
            printf("I'm sorry..\n");
        }

        if(sel==4)
        {
            printf("I'm sorry..\n");
        }

        if(sel==5)
        break;

    }
    return 0;
}
