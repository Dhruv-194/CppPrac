#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter a number between 0 to 5"); 
    scanf("%d", &n);
    
//Choose a number between 0 to 5 for that particular conversion 

    switch(n)
  { 
    case 0:
    {    printf("Enter a binary number to convert to decimal");
        int bn;
        scanf("%d", &bn);
        int digit,dec=0,i=0;
        while(bn!=0)
        {
        digit=bn%10;
        dec+=digit<<i;
        bn=bn/10;
        i++;
        }
        
        printf("The decimal value = %d", dec);
        break;
    }
   
    
    case 1: 
    {
        printf("Enter a binary number to convert to hexadecimal");
        int bn;
        scanf("%d", &bn);
        long int hexadecimalval = 0, i = 1, rem;
        
        while (bn != 0)
        {
        rem = bn % 10;
        hexadecimalval = hexadecimalval + rem * i;
        i = i * 2;
        bn = bn/ 10;
        }
        printf("Equivalent hexadecimal value: %lX", hexadecimalval);
        break;
    }
    
    case 2: 
    {
        printf("Enter a binary number to convert to octal");
        int bn;
        scanf("%d", &bn);
        long int octalnum = 0, j = 1, rem;
        while (bn != 0)
        {
        rem = bn % 10;
        octalnum = octalnum + rem * j;
        j = j * 2;
        bn = bn / 10;
        }
         printf("Equivalent octal value: %lo", octalnum);
         break;
    }
    
    case 3: 
    {
        printf("Enter a decimal number to convert to binary");
        int num;
        scanf("%d", &num);
    
        for (int i = 31; i >= 0; i--) { 
            int k = num >> i; 
            if (k & 1) 
                 printf("1");
            else
                printf("0");
        
        } 
        break;
    }
    
    case 4: 
    {
        char octalnum[100];
         long i = 0;
 
        printf("Enter an octal number to convert to binary ");
        scanf("%s", octalnum);
        printf("Equivalent binary value: ");
        while (octalnum[i])
        {
            switch (octalnum[i])
            {
            case '0':
             printf("000"); break;
            case '1':
                printf("001"); break;
            case '2':
                printf("010"); break;
            case '3':
                printf("011"); break;
            case '4':
                printf("100"); break;
            case '5':
                printf("101"); break;
            case '6':
                 printf("110"); break;
            case '7':
                printf("111"); break;
            default:
                printf("\n Invalid octal digit %c ", octalnum[i]);
            
            }
        i++;
        }
    }
    
    case 5: 
    {    
        char binarynum[100], hexa[100];
        long int i = 0;
 
        printf("Enter an hexadecimal number to convert to binary ");
        scanf("%s", hexa);
        printf("\n Equivalent binary value: ");
        while (hexa[i])
        {
            switch (hexa[i])
            {
            case '0':
                printf("0000"); break;
            case '1':
                printf("0001"); break;
            case '2':
                 printf("0010"); break;
            case '3':
                 printf("0011"); break;
            case '4':
                 printf("0100"); break;
            case '5':
                 printf("0101"); break;
            case '6':
                printf("0110"); break;
            case '7':
                printf("0111"); break;
            case '8':
                printf("1000"); break;
            case '9':
                printf("1001"); break;
            case 'A':
                printf("1010"); break;
            case 'B':
                printf("1011"); break;
            case 'C':
                printf("1100"); break;
            case 'D':
                printf("1101"); break;
            case 'E':
                printf("1110"); break;
            case 'F':
                printf("1111"); break;
            case 'a':
                printf("1010"); break;
            case 'b':
                printf("1011"); break;
            case 'c':
                 printf("1100"); break;
            case 'd':
                printf("1101"); break;
            case 'e':
                printf("1110"); break;
            case 'f':
                printf("1111"); break;
            default:
                printf("\n Invalid hexa digit %c ", hexa[i]);
            
            }
        i++;
        }    
    }
  }
}
