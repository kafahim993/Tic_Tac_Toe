#include<stdio.h>

int main()
{
    int i,j,k,n;
    char a[]= {'1','2','3','4','5','6','7','8','9'};
    printf("  1 | 2  | 3  \n",a[0],a[1],a[2]);
    printf("____|____|____\n");
    printf("  4 | 5  | 6  \n",a[3],a[4],a[5]);
    printf("____|____|____\n");
    printf("  7 | 8  | 9   \n",a[6],a[7],a[8]);
    printf("    |    |    \n");
    int player= 1, f=0;
    for(i=0; i<9; i++)
    {
        printf("Move Number %d\n",i+1);
        printf("Player %d\n",player);
        printf("position ");
        scanf("%d",&n);
        printf("\n");

        if (player==1)
            a[n-1]='X';
        else

            a[n-1]='O';

        printf("  %c |  %c | %c  \n",a[0],a[1],a[2]);
        printf("____|____|____\n");
        printf("  %c |  %c | %c  \n",a[3],a[4],a[5]);
        printf("____|____|____\n");
        printf("  %c |  %c | %c  \n",a[6],a[7],a[8]);
        printf("    |    |    \n");

        if(a[0]==a[1]&&a[1]==a[2])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }
        else if (a[3]==a[4] && a[4]== a[5])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }
        else if (a[6]== a[7] && a[7]==a[8])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }
        else if (a[0]== a[4] && a[4]== a[8])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }
        else if(a[2]==a[4]&&a[4]==a[6])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }
        else if (a[0]==a[3]&& a[3]==a[6])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }
        else if (a[1]==a[4]&& a[4]==a[7])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }
        else if (a[2]==a[5]&& a[5]==a[8])
        {
            printf("Player %d Win", player );
            f=1;
            break ;
        }

        if (player == 1)
            player = 2;
        else
            player = 1;


    }
    if(f==0)
        printf("Draw");
    getchar();
    return 0;
}

