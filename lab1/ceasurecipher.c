//rahul
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main()
{
char plain[100],cipher[100];
int key,i,result,length;


//clrscr();

printf("\n Enter the plain text:");
scanf("%s",plain);

printf("\n Enter the key value:");
scanf("%d",&key);

printf("\n\n\tPlain text:%s",plain);
printf("\n\n\tENCRYPTED TEXT:");

for(i=0,length=strlen(plain);i<length;i++)
  {
       cipher[i]=plain[i]+key;
     
       if(isupper(plain[i]) && (cipher[i]>'Z'))
       cipher[i]=cipher[i]-26;

       if(islower(plain[i]) && (cipher[i]>'z'))
       cipher[i]=cipher[i]-26;
           
       printf("%c",cipher[i]);
  }

printf("\n\n\tAfter Decryption:");

   for(i=0;i<length;i++)
     {
         plain[i]=cipher[i]-key;
         
         if(isupper(cipher[i]) && (plain[i]<'A'))
         plain[i]=plain[i]+26;

         if(islower(cipher[i]) && (plain[i] <'a'))
         plain[i]=plain[i]+26;
                
         printf("%c",plain[i]);
     }
//getch();
}
