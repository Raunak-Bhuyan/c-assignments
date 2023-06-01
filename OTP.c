#include<stdio.h>
#include<stdlib.h>
#include"random.h"

void shuffleString(char str[])
{

    for(int i = 0; i<8; i++)
    {
        int rIndex = (random32() % 8);
        int temp = str[i];
        str[i] = str[rIndex];
        str[rIndex] = temp;
    }
}

void generateOTP(char otp[])
{
    otp[8]='\0';
    otp[0]=(random32()%('z'-'a'+1))+'a';
    otp[1]=(random32()%('9'-'0'+1))+'0';
    otp[2]=(random32()%('Z'-'A'+1))+'A';
    otp[3]=(random32()%(46-33+1))+33;

    for(int i=4; i<8; i++)
    {
        otp[i] = (random32() % (125 - 34 + 1))+ 34;
    }
    shuffleString(otp);
    }
    int main()
    {
        char otp[9];
        generateOTP(otp);

        printf("One Time Password: %s", otp);
        return 0;
    }



//code for random.h file
/*#include<time.h>
unsigned int random32()
{
    int i,n,d;
    unsigned int r=0;
    for(i=0;i<32;i++)
    {
        n=clock();
        d=n&1;
        r=r+d*(1<<i);
    }
    return r;
}*/