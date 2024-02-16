#include <stdio.h>
#include <string.h>

void push (char *stack[], char ele[])
{
    char t[50]="";
    strcat(t, ele);
    strcat(t, stack);
    strcpy(stack, t);
}
void pop (char *stack[])
{
    int i=0;
    while (i<strlen(stack))
        {
            stack[i] = stack [i+1];
        }
}

int indexOf (char s[], char f)
{
    int i;
    for (i=0; s[i]!=f; i++);
    return i;
}


int main ()
{
    char string [50]="", rule [20][20][50]={{""}}, stack [50] = {'$', '\0'};
    int choice=0;

    /*Importing the grammar*/
    FILE *grammar = fopen ("grammar.txt", "r");
    int i=0;
    while (fgets (rule [i][0], 50, grammar))
    {
        int k = indexOf (rule [i][0], '>')+1;
        int j=1;
        while (rule [i][0][k] != '\0')
        {
            while (rule [i][0][k] != '\0' && rule [i][0][k] != '|')
        {
            strncat(rule [i][j], &rule [i][0][k], 1);
            k++;
        }
            k++;
            j++;
        }
        rule [i][0][1] = '\0';
        i++;
    }

    /*Taking input String*/
    printf("Enter the string: ");
    scanf("%s", string);
    a:
    printf("\nEnter 1 for Left-most derivation.\nEnter 2 for Right-most derivation.\nEnter your choice: ");
    scanf("%d", choice);

    if (choice==1)
    {
        if (stack[0]=='$') push (stack, "S");
        else if (stack[0]=='T' &&  stack[0]=='T');
        pop(*stack);
        printf("%s\n", stack);
    }
    else if (choice==2)
    {

    }
    else {printf("Wrong choice.");goto a;}
    return 0;
}
