//Complete the given program with string declaration/initialization & read/print the string
//Instructiom:-
//1)Initially,declare a string with size
//2)read the input string from user
//3)Finally,print the input string obtained from user.,

//expected input and output:
//Enter a string Vidyavardhaka
//the input string is Vidyavardhaka
#include<stdio.h>
int main()
{
char str[20];//Declare the string
printf("enter a string: ");
scanf("%s", str);//read the string from the user
printf("the entered string is %s",str);//print the string
return 0;
}
