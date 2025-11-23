/* Na ginei programma pou na dexetai
 ena alpharithmitiko apo to pliktrologio kai:
 a) na upologizei to mikos
 b) na upologizei kefalaia kai mikra
 c) na upologizei poses fores emfanizetai to 'a'
 d) na kanei capitalize */

#include <stdio.h>
#include <stdlib.h>

int StrLen(char* str);
int CountCaps(char *str);
int CountLower(char *str);
int CountChar(char *str, char c);
void Capitalize(char *str);


int main()
{
    char str[20], c='a';

    printf("Enter a string: ");
    scanf("%19s", str);

    printf("\na) Length of %s is %d\n\n", str, StrLen(str));                                       //a)
    printf("b) %s has %d capitals and %d lowercase\n\n", str, CountCaps(str), CountLower(str));    //b)
    printf("c) The character \'%c\' found %d times\n\n", c, CountChar(str,c));                     //c)
    printf("d) %s capitalized is: ", str);                                                         //d)
    Capitalize(str);
    printf("%s\n\n", str);

    system("pause");
    return 0;
}

/* a) Find length of string */
int StrLen(char *str)
{
    int i=0;
    while (str[i]!='\0')
        i++;
    return i;
}

/* Count Capitals in string */
int CountCaps(char *str)
{
    int count=0;
    while (*str!='\0') {
        if (*str>=65 && *str<=90) {
            count++;
        }
        str++;
    }
    return count;
}

/* Count Lowercase in string */
int CountLower(char *str)
{
    int count=0;
    while (*str!='\0') {
        if (*str>=97 && *str<=122) {
            count++;
        }
        str++;
    }
    return count;
}

/* Count character in string */
int CountChar(char *str, char c)
{
    int count=0;
    while (*str!='\0') {
        if (*str==c) {
            count++;
        }
        str++;
    }
    return count;
}

/* Capitalize string */
void Capitalize(char *str)
{
    while (*str!='\0') {
        if (*str>=97 && *str<=122) {
            *str -= 32;
        }
        str++;
    }
}