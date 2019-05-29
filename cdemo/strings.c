#include <stdio.h>
#include <string.h>

void convertOpposite(char *str1) 
{ 
    int ln = strlen ( str1); 

    for (int i=0; i<ln; i++) 
    { 
        if (str1[i]>='a' && str1[i]<='z') 
        str1[i] = str1[i] + 'A' - 'a'; 
     } 
}

int main()
{
char str1[27] ;
char str2[] = "abcdefghijklmnopqrstuvwxyz";
char str3[53];

  for (int i=0; i<26; i++) 
    { 
	str1[i]='a'+i;
    }
        str1[26]= '\0';

if (strcmp(str1, str2) == 0)
printf("strings are identical\n");
else
printf("strings are not identical\n");

convertOpposite(str1);

if (strcmp(str1, str2) == 0)
printf("strings are identical\n");
else
printf("strings are not identical\n");
 
strcpy( str3, str1);
strcat( str3, str2);
printf("str1:   %s\n", str1);
printf("str2:   %s\n", str2);
printf("str3:   %s\n", str3);

}

