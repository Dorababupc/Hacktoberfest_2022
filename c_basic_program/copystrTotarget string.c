#include<stdio.h>
void copy_string(char*, char*);
int main()
{
 char s[100], t[100];
 printf("Enter source string\n");
 fgets(s,10,stdin);
 copy_string(t, s);
 printf("Copied string is %s \n", t);
 return 0;
}
void copy_string(char *t, char *s)
{
 while(*s)
 {
 *t = *s;
 s++;
 t++;
 }
 *t = '\0';
}