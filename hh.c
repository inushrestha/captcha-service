#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <string.h>

void captcha();
char compareArray(char a[],char b[]);
void check();
int count=0;

struct Captcha
{
    char a[5];
}
c1,c2;

int main(){
    printf("---------------------------------------------------------------------\n");
    printf("\t\tWelcome to Our Captcha System\n");
    printf("---------------------------------------------------------------------\n\n");
    captcha();

}


void check()
{

    printf("\nEnter a captcha as shown above");
    gets(c2.a);
    char check = compareArray(c2.a,c1.a);
    if(check==0)
	{
        printf("congratulation\n");
       // printf("your new captcha\n");
        //captcha();
    } else if(count<=3)
	{
        system("cls");
        printf("Sorry Re-Captcha\n\n");
        captcha();
    }
	else
	{
    	printf("Thank you for using our system");
	}
}

char compareArray(char a[],char b[])
	{
    int i;
    for(i=0;i<5;i++){
        if(a[i]!=b[i])
            return 1;
    }
    return 0;
}

void captcha()
{
    int i;
    char a[5];
    srand(time(0));
    for(i=0;i<5;i++)
	 {
        a[i] = rand() % 50 + 33;
    }
    strcpy(c1.a,a);
    for(i=0;i<5;i++)
	{
        printf("%c",c1.a[i]);
    }
    count++;
    check();
}

