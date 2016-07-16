#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter the char");
scanf("%c"&ch);
if((ch='a')||(ch='e')||(ch='i')||(ch='o')||(ch='u'))
printf("it ia a vowel");
else
printf("it is a consonant");
getch();
}
