#include<stdio.h>
void add(int x[][10],int y[][10],int z[][10],int m,int n, int p)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }
}
void sub(int x[][10],int y[][10],int z[][10],int m,int n, int p)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            z[i][j]=x[i][j]-y[i][j];
        }
    }
}

void mult(int x[][10],int y[][10],int z[][10],int m,int n, int p)
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            z[i][j]=0;
            for(k=1;k<=3;k++)
            {
                z[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
}
void trans(int x[][10],int y)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d  ",x[j][i]);
        }
        printf("\n");
    }
}
void input(int x[][10],int y)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}
void print(int x[][10],int y)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d  ",x[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[10][10],b[10][10],ad[10][10],sb[10][10],mul[10][10];
    int n;
    printf("Input 1st matrix elements of 3*3 matrix - ");
    input(a,3);
    printf("1st Augmented matrix- \n");
    print(a,3);
    printf("Input 2nd matrix elements of 3*3 matrix - ");
    input(b,3);
    printf("2nd Augmented matrix- \n");
    print(b,3);
    printf("Press 1 for Addition \n");
    printf("Press 2 for Subtraction \n");
    printf("Press 3 for Multiplication \n");
    printf("Press 4 for Transpose of first matrix\n");
    printf("Press 0 to exit program \n");
    level:
    scanf("%d",&n);
    switch(n)
    {
    case 1:
          printf("Addition of two matrix- \n");
            add(a,b,ad,3,3,3);
            print(ad,3);
            goto level;
            break;
    case 2:
        printf("Subtraction of two matrix- \n");
        sub(a,b,sb,3,3,3);
        print(sb,3);
        goto level;
        break;
    case 3:
        printf("Multiplication  of two matrix- \n");
        mult(a,b,mul,3,3,3);
        print(mul,3);
        goto level;
        break;
    case 4:
        printf("Transpose of first matrix- \n");
        trans(a,3);
        goto level;
        break;
    case 0:

        goto level1;
    default:
        printf("Wrong Input!!Enter from (1-4)\n");
        goto level;
    }

    level1:
        printf("Program EXIT !!\n");
  return 0;
}
