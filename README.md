# Menu-driven program
Menu-driven program in C is a type of program in which various options are provided to the user and some functionality is provided based on these options. These programs are used to provide a simple yet effective user interface and deliver the requested functionalities to the user. This article provides an overview of menu-driven programs in C.

In this article, we will learn about the menu-driven programs in the C programming language.
The article provides an overview of menu-driven programs and how we can implement them in C.
It is always easier to choose something from a handful of options rather than picking something from an ocean of choices. Also, it is much easier to choose something from a collection if the collection is very well organized. This is where menus come into the picture. A menu is simply a list of items that can be used to provide an overview of something. For example, in a restaurant, a menu is used to provide an overview of the dishes that the restaurant offers. This article also contains a menu using which you can navigate and access different sections of the article. Now, how do we apply this concept of menus in software development? This is where menu-driven programs are used!!!

Menu example
A menu-driven program is simply a program that provides a collection of options to the user. Based on the choice of the user, a specific set of statements is executed to provide a good user experience. Systems using menu-driven programs have limited choices and are more user-centric than other kinds of programs. Because of the limited and specified type of choices, these systems are less prone to user errors and are more user-friendly than command-line interfaces.

Menu-driven programs are choice-based programs that are used to execute a set of statements based on the user's choices. The general algorithm for the menu-driven program in C is:

Step 1: START
Step 2: Take the choice input from the user.
Step 3: Execute a specific set of statements according to the user's choice.
Step 4: Repeat Step 3, till the user selects a valid option in Step 2.
Step 5: STOP
Now, let's look at implementing the above algorithm in the C programming language.

We can create a menu driven program in C using simple if-else ladders. Let's look at an example to understand this concept:

Code:

// Menu driven program in C
# <stdio.h>

// Driver code
int main() {
 // Choice variable
 int choice = -1;
  // Menu display
 printf("MENU:\n1. Coffee\n2. Tea\n3. Exit");
  // Infinite Loop for choice input
 while(1){
 printf("\nEnter your choice:");
 scanf("%d", &choice);
  // If-else ladder
 if(choice == 1){
 printf("> Enjoy your Coffee!\n");
 }
 else if (choice == 2){
 printf("> Enjoy your Tea!\n");
 }
 else if (choice == 3){
 printf("BYE!!!\n");
 // Termination of the Loop using break statement
 break;
 }
 else{
 printf("> Invalid Input\n");
 } }
 return 0;
}
Output:

MENU:
1. Coffee
2. Tea
3. Exit
Enter your choice:1
> Enjoy your Coffee!

Enter your choice:2
> Enjoy your Tea!

Enter your choice:4
> Invalid Input

Enter your choice:3
BYE!!!
In the above example, we are using the while(1) statement to create a loop for infinite iterations. The user can choose any option (Coffee, Tea, or Exit) from the menu by providing a numeric input which is stored in the choice variable. According to the user's choice, a specific block of code is executed from the if-else ladder. The user can exit from the loop by selecting the 3. Exit option. This option makes use of the break keyword to terminate the execution of the loop.

Now, let's consider a real-world example and try to develop a menu-driven calculator using the C programming language. Similar to the previous example, we will use the if-else ladder to define various functionalities. Let's look at the source code for our calculator:

Code:

// Menu Driven Program for a calculator in C
# <stdio.h>

// Driver code
int main() {
 // Choice variable
 int choice = -1;
  // Variables to store the numbers
 int a, b;
  // Menu display
 printf("MENU:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
  // Infinite Loop for choice input
 while(1){
 printf("\nEnter the operation you wish to perform:");
 scanf("%d", &choice);
  // If-else ladder
 if(choice == 1){
 // Number Input
 printf("Enter First number :");
 scanf("%d", &a);
 printf("Enter Second number:");
 scanf("%d", &b);
 printf("Result: %d + %d = %d\n", a, b, (a+b));
 }
 else if (choice == 2){
 // Number Input
 printf("Enter First number :");
 scanf("%d", &a);
 printf("Enter Second number:");
 scanf("%d", &b);
 printf("Result: %d - %d = %d\n", a, b, (a-b));
 }
 else if (choice == 3){
 // Number Input
 printf("Enter First number :");
 scanf("%d", &a);
 printf("Enter Second number:");
 scanf("%d", &b);
 printf("Result: %d * %d = %d\n", a, b, (a*b));
 }
 else if (choice == 4){
 // Number Input
 printf("Enter First number :");
 scanf("%d", &a);
 printf("Enter Second number:");
 scanf("%d", &b);
 printf("Result: %d / %d = %d\n", a, b, (a/b));
 }
 else if (choice == 5){
 printf("BYE!!!\n");
 // Termination of the Loop using break statement
 break;
 }
 else{
 printf("> Invalid Input\n");
 } }
 return 0;
}
Output:

MENU:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter the operation you wish to perform:1
Enter First number :5
Enter Second number:10
Result: 5 + 10 = 15

Enter the operation you wish to perform:2
Enter First number :10
Enter Second number:6
Result: 10 - 6 = 4

Enter the operation you wish to perform:3
Enter First number :4
Enter Second number:4
Result: 4 * 4 = 16

Enter the operation you wish to perform:4
Enter First number :10
Enter Second number:2
Result: 10 / 2 = 5

Enter the operation you wish to perform:6
> Invalid Input

Enter the operation you wish to perform:5
BYE!!!
In the above example, we are using the if-else ladder to provide the arithmetic operations feature to the user according to his/her choice.

Now, let's look at a new way using which we can implement menu-driven programs in C.

Apart from using the if-else ladder, we can also use the switch statements to implement a menu-driven program in C. A switch statement is a special statement that allows us to execute specified blocks of code depending upon the value of a variable known as the switch variable. Let's look at an example to understand the implementation of the menu-driven program using the switch statement:

Code:

// Menu Driven Program using switch case in C
# <stdio.h>

// Driver code
int main() {
 // Switch variable
 int choice = -1;
  // Menu display
 printf("MENU:\n1. Coffee\n2. Tea\n3. Exit");
  // Flag variable for termination of loop
 int flag = 1;
  // Infinite Loop for choice input
 while(flag){
 printf("\nEnter your choice:");
 scanf("%d", &choice);
  // Switch statements
 switch(choice){
 case 1:
 printf("> Enjoy your Coffee!\n");
 break;
 case 2:
 printf("> Enjoy your Tea!\n");
 break;
 case 3:
 printf("BYE!!!\n");
 flag = 0; // To terminate the loop
 break;
 default:
 printf("> Invalid Input\n");
 break;
 } }
 return 0;
}
Output:

MENU:
1. Coffee
2. Tea
3. Exit
Enter your choice:1
> Enjoy your Coffee!

Enter your choice:2
> Enjoy your Tea!

Enter your choice:4
> Invalid Input

Enter your choice:3
BYE!!!
In the above example, we are using a flag variable as a condition for the while loop. This flag variable is used to terminate the execution of the loop when the user selects the Exit option. Also, we are using the switch statements to define the specific functionality which will be executed depending on the user's selection (i.e., the value of the choice variable).

To improve the readability and manageability of our source code, we can also use functions to implement the menu-driven program in C. Let's look at an example to understand the concept of functions in menu-driven programs:

Code:

// Menu Driven Program using Functions in C
# <stdio.h>

// Declaring the functions
void odd_even();
void prime();

// Function to check whether a number is odd or even.
void odd_even(){
 // Numeric Input
 int num;
 printf("\nEnter a number:");
 scanf("%d", &num);
  // Odd-Even checker
 if(num % 2 == 0){
 printf("Number %d is EVEN\n", num);
 }
 else{
 printf("Number %d is ODD\n", num);
 }
} // Function to check whether a number is prime or not.
void prime(){
 // Numeric Input
 int num;
 printf("\nEnter a number:");
 scanf("%d", &num);
  // Flag variable for prime numbers
 int flag = 1;
  // Prime checker
 for(int i=2; i*i <= num; i++){
 if(num % i == 0){
 flag = 0;
 break;
 } }  // Output
 if(flag){
 printf("Number %d is PRIME\n", num);
 }
 else{
 printf("Number %d is NOT PRIME\n", num);
 }
} // Driver code
int main() {
 // Choice variable
 int choice = -1;
  // Menu display
 printf("MENU:\n1. Check_Odd/Even\n2. Check_Prime\n3. Exit");
  // Flag variable for termination of loop
 int flag = 1;
  // Infinite Loop for choice input
 while(flag){
 printf("\nEnter your choice:");
 scanf("%d", &choice);
  // Switch statements
 switch(choice){
 case 1:
 odd_even();
 break;
 case 2:
 prime();
 break;
 case 3:
 printf("BYE!!!\n");
 flag = 0; // To terminate the loop
 break;
 default:
 printf("> Invalid Input\n");
 break;
 } }
 return 0;
}
Output:

MENU:
1. Check_Odd/Even
2. Check_Prime
3. Exit
Enter your choice:1
Enter a number:20
Number 20 is EVEN

Enter your choice:2
Enter a number:5
Number 5 is PRIME

Enter your choice:3
BYE!!!
Explanation
In the above example, we first created two methods namely odd_even() and prime(). Here, the odd_even() method is used to check whether the input number is odd or even, whereas the prime() method is used to verify whether the input number is prime or not. These two functions are executed based on the choice entered by the user. We initialized a choice variable to take the choice from the user. This variable is then passed as an expression to the switch statement. Depending on the value of the choice variable, a case block is executed i.e., if the value of choice is 1 then the odd_even() method is executed, if 2 then the prime() method is executed, and the value 3 is used to exit from the menu, and any other value is considered invalid.

Because of the use of separate functions inside each case block, we can easily modify these functions without affecting the whole code. Hence, this approach helps us to separate the user’s menu from the actual functionality and allows us to write a clean, manageable, and readable menu-driven program in C.

Menu-driven programs are special programs that are used to perform certain operations depending upon the choice of the user.
Use of menus makes the software more interactive and user-centric.
Menu-driven programs provide limited choices to the users. Hence, they are less prone to errors.
In C programming language, we can implement menu-driven programs using the if-else ladders, switch statements, and functions.
