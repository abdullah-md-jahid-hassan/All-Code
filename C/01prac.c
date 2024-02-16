#include <stdio.h>
#include <string.h>

void pop (char *stack[])
{
    int i=0;
    while (i<strlen(stack))
        {
            stack[i] = stack [i+1];
        }
}

int main() {
    char a[10] = "abcdefGhij";
    printf("Befor:\t%s\n", a);
    int i=0;
    pop(a);
    printf("After:\t%s\n", a);
    return 0;
}
