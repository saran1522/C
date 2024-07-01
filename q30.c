#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int count_vow=0,count_cons=0;
  printf("enter the string\n");
  gets(str);
  for(int i=0;i<strlen(str);i++)
  {
      //converting in lowercase
      if(str[i]>='A'&&str[i]<='Z')
      str[i]=str[i]-'A'+'a';

      //counting vowels
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      count_vow++;

      //counting consonants
      else
      count_cons++;
  }
  printf("\n");
  printf("vowels in string are: %d\n",count_vow);
  printf("consonants in string are: %d\n",count_cons);
  printf("the entered string in lowercase is: %s",str);
  return 0;
}