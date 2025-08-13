#include <stdio.h>

int lengthOfLastWord(char* s) {
    int i;
    int j = 0;
    while(s[j])
        j++;

    while(j > 0 && s[j - 1] == ' ' || s[j - 1] == '\t')
        j--;
    while(j > 0 && s[j - 1] != ' ' && s[j - 1] != '\t')
    {
        i++;
        j--;
    }
    return (i);
}
int main(void)
{
    char *s = "Hello World";
    int i = lengthOfLastWord(s);
    printf("%d\n", i);  // Output should be the length of the last word
}