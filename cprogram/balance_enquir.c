
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c<0 || b<0 || a<0){
            printf("invalid");
        return 0;
    }
    switch(b){
        case 1:printf("%d",a+c);
        break;
        case 2:
        if(a<c){printf("insuff");}else{
        printf("%d",a-c);}
        break;
        default :
        printf("invalid choice");
        }


    return 0;
}
