#include <stdio.h>
# include<string.h>
# include<ctype.h>
int main()
{
    char str[20] , newstr[20], g;
    int i ,j = 0;
    printf("Enter your string: ");
    scanf("%s", str);
    for (i = 0 ; i < strlen(str) ; i++){
        if (isalpha(str[i]) != 0){
            g = toupper(str[i]);
            newstr[j] = g;
            j++;
        }
    }
    printf("your string is %s",newstr);
    return 0;
}
