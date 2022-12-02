#include<stdio.h>
void Area();
void Check();
void Check_1();
void Mark();
void Check_2();
void Series();
void Series_1();
void Series_2();
void Sum();
void Sum_SquareSeries();
void MultiTable();
void Addition();
void Subtraction();
void Multiplication();
void Division();
void Remainder ();
void RevAlphabets();
void Swap();
void Factorial();
void Reverse ();
int main()
{
    printf(PersonalInformation());
    printf(Menu());
    while(1)
    {
        int n;
        char a,b;
        printf("Enter your Choice: ");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
            exit(0);
            break;
        case 1:
            Area();
            break;
        case 2:
            Check();
            break;
        case 3:
            Check_1();
            break;
        case 4:
            Mark();
            break;
        case 5:
            Check_2();
            break;
        case 6:
            Series();
            break;
        case 7:
            Series_1();
            break;
        case 8:
            Series_2();
            break;
        case 9:
            Sum();
            break;
        case 10:
            Sum_SquareSeries();
            break;
        case 11:
            MultiTable();
            break;
        case 12:
            Addition();
            break;
        case 13:
            Subtraction();
            break;
        case 14:
            Multiplication();
            break;
        case 15:
            Division();
            break;
        case 16:
            Remainder ();
            break;
        case 17:
            RevAlphabets();
            break;
        case 18:
            Swap();
            break;
        case 19:
            Factorial();
            break;
        case 20:
            Reverse ();
            break;
        default:
            printf("Invalid Choice.Try Again\n");
        }
    }
    getch();
}
void Menu()
{
    printf(" 0. Exit \n");
    printf(" 1. Area of a Circle \n");
    printf(" 2. Even & Odd Check \n");
    printf(" 3. Positive & Negative Check \n");
    printf(" 4. Grade finder according to mark \n");
    printf(" 5. Smallest Number among 3 Number \n");
    printf(" 6. Display Odd Numbers from 1 to n \n");
    printf(" 7. Display Even Numbers from 1 to n \n");
    printf(" 8. Display Numbers from n to 1 \n");
    printf(" 9. Sum of Number from 1 to n \n");
    printf("10. Sum of Number from 1^2 to n^2 \n");
    printf("11. Display multiplication table \n");
    printf("12. Addition of two Numbers \n");
    printf("13. Subtraction of two Numbers \n");
    printf("14. Multiplication of two Numbers \n");
    printf("15. Division of two Numbers \n");
    printf("16. Remainder of two Numbers \n");
    printf("17. Display alphabets from Z to A \n");
    printf("18. Swap Numbers \n");
    printf("19. Find out Factorial \n");
    printf("20. Reverse digits of a Number \n");
    printf("--------------------------------------------\n");

}
void  PersonalInformation()
{
    printf(" \t Personal Information\n");
    printf("--------------------------------------------\n");


    printf(" Name    : Naimur Rahaman Sakib\n");
    printf(" ID      : CSE2202026118 \n");
    printf(" Section : 27A2 \n");
    printf(" Number  : 01******** , 015******* \n");
    printf("--------------------------------------------\n");
}
void Area()
{
    //A program to find the area of a circle.
    float r,a;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    a = 3.1416 * r * r;
    printf("Area of the Circle = %f\n",a);
}

void Check()
{
//a program to check a Number whether it is odd or even.
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%2 == 0) printf("%d is Even Number\n",n);
    else         printf("%d is Odd Number\n",n);
}
void Check_1()
{
//Write a C program to check a Number whether it is positive or negative.
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n < 0) printf("%d is a Negative Number\n",n);
    else      printf("%d is a Positive Number\n",n);
}

void Mark()
{

    int m;
    printf("Enter your Mark: ");
    scanf("%d", &m);
    if(m> 100 || m < 0)
        printf("Invalid Mark! \n");
    else if(m >= 80) printf("A+\n");
    else if(m >= 70) printf("A\n") ;
    else if(m >= 60) printf("A-\n");
    else if(m >= 50) printf("B\n") ;
    else if(m >= 40) printf("C\n") ;
    else if(m >= 33) printf("D\n") ;
    else             printf("F\n") ;
}

void Check_2()
{
    // program  to check which one is smallest among 3 Number using(ternary operator).
    int a,b,c,s;
    printf("Enter 3 Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    s=(b>a && c>a)? a:(c>b)? b:c;
    printf("%d is the Smallest\n",s);
}

void Series()
{
    //Display odd Numbers from 1 to n
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i+=2)
        printf("%d\t",i);
    printf("\n");
}
void Series_1()
{
    //Display even Numbers from 1 to n
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i = 2; i <= n; i+=2)
        printf("%d\t",i);
    printf("\n");
}
void Series_2()
{
    //Display  Numbers from n to 1
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i = n; i >= 1; i--)
        printf("%d\t",i);
    printf("\n");
}
void Sum()
{
    //Sum of Number from 1 to n
    int i,n,s=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("Sum from 1 to %d = %d\n",n,s);
}
void Sum_SquareSeries()
{
    int n,i;
    int Sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    Sum = ((n * ( n + 1 ) *( 2 * n +1) ) / 6);
    printf("Sum of the Series: ");
    for (i =1; i <= n; i++)
    {
        if (i!=n)
            printf("%d^2 + ",i);
        else
            printf("%d^2 = %d \n",i,Sum);
    }
}
void MultiTable()
{
    //Display multiplication table
    int i,n,x;
    printf("Enter any Number: ");
    scanf("%d",&n);
    for(i = 1; i <= 10; i++)
    {
        x= n* i;
        printf("\t%d * %d = %d\n",n,i,x);
    }
}


void Addition()
{
    int a,b;
    printf("Enter the value of a & b: ");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
}
void Subtraction()
{
    int a,b;
    printf("Enter the value of a & b: ");
    scanf("%d %d",&a,&b);
    printf("%d - %d = %d\n",a,b,a-b);
}
void Multiplication()
{
    int a,b;
    printf("Enter the value of a & b: ");
    scanf("%d %d",&a,&b);
    printf("%d * %d = %d\n",a,b,a*b);
}
void Division()
{
    int a,b;
    printf("Enter the value of a & b: ");
    scanf("%d %d",&a,&b);
    printf("%d / %d = %d\n",a,b,a/b);
}
void Remainder()
{
    int a,b;
    printf("Enter the value of a & b: ");
    scanf("%d %d",&a,&b);
    printf("%d %% %d = %d\n",a,b,a%b);
}
void RevAlphabets()
{
    //Display alphabets from Z to A
    char i;
    for(i = 'Z'; i>= 'A'; i--)
        printf("%c\t",i);
    printf("\n");
}

void Swap()
{
    //Program to Swap Numbers Using Temporary Variable
    int x, y, temp;
    printf(" x = ");
    scanf("%d", &x);
    printf(" y = ");
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf("After Swapping:\n x = %d\n y = %d\n", x, y);
}

void Factorial()
{
    int i,n,f =1;
    printf("Enter a Number to find Factorial: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("%d ! = %d \n",n,f);
}
void Reverse ()
{
    int n,rem,s=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        s=s*10+rem;
        n=n/10;
    }
    printf("Reverse Number: %d",s);
    printf("\n");
}

