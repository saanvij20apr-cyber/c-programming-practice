// x-------------------------------------------------------x
// CHAPTER 10 :  File I/O
// x-------------------------------------------------------x

// Practice Qs 59
// Make a structure to store bank account information of a customer of ABC Bank. Also, make an alias for it.

// #include<stdio.h>
// #include<string.h>

// typedef struct BankAccount {
//     int accountNo;
//     char name[100];
// } acc;

// int main() {
//     acc acc1 = {123, "saanvi"};
//     acc acc2 = {124, "jahnavi"};
//     acc acc3 = {125, "yuktha"};

//     printf("acc no = %d\n", acc1.accountNo);
//     printf("name = %s\n", acc1.name);
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 58
// You have to store the marks of 30 students in class. What will you use?
// a. array of 30 floats
// b. structure

// --> Array of 30 floats is to be used. 
// --> The major use of structure is to collect elements of different datatypes.
// --> Array is used here as the question is needing us to store same kind of datatypes(float).

// x-------------------------------------------------------x

// Practice Qs 57
// Create a structure to store complex numbers. (use arrow operator)

// #include<stdio.h>
// #include<string.h>

// struct complex{
//     int real;
//     int img;
// };

// int main() {
//     struct complex number1 = {5, 8};
//     struct complex *ptr = &number1;
//     printf("real part = %d\n", ptr->real);
//     printf("imaginary part = %d\n", ptr->img);
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 56
// Create a structure to stroe vectors. Then make a function to return sum of 2 vectors.

// #include<stdio.h>
// #include<string.h>

// struct vector{
//     int x;
//     int y;
// };

// void calcSum(struct vector v1, struct vector v2, struct vector sum);

// int main() {
//     struct vector v1 = {5, 10};
//     struct vector v2 = {3, 7};
//     struct vector sum = {0};

//     calcSum(v1, v2, sum);
//     return 0;
// }

// void calcSum(struct vector v1, struct vector v2, struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("sum of x is : %d\n", sum.x);
//     printf("sum of y is : %d\n", sum.y);
// }

// x-------------------------------------------------------x

// Practice Qs 55
// Enter address (house no, block, city, state) of 5 people.

// #include<stdio.h>
// #include<string.h>

// struct address{
//     int houseNo;
//     int block;
//     char city[100];
//     char state[100];
// };

// void printAdd(struct address add);

// int main() {
//     struct address add[5];

//     printf("enter info for person 1 : \n");
//     scanf("%d", &add[0].houseNo);
//     scanf("%d", &add[0].block);
//     scanf("%s", add[0].city);
//     scanf("%s", add[0].state);

//     printf("enter info for person 2 : \n");
//     scanf("%d", &add[1].houseNo);
//     scanf("%d", &add[1].block);
//     scanf("%s", add[1].city);
//     scanf("%s", add[1].state);

//     printf("enter info for person 3 : \n");
//     scanf("%d", &add[2].houseNo);
//     scanf("%d", &add[2].block);
//     scanf("%s", add[2].city);
//     scanf("%s", add[2].state);

//     printf("enter info for person 4 : \n");
//     scanf("%d", &add[3].houseNo);
//     scanf("%d", &add[3].block);
//     scanf("%s", add[3].city);
//     scanf("%s", add[3].state);

//     printf("enter info for person 5 : \n");
//     scanf("%d", &add[4].houseNo);
//     scanf("%d", &add[4].block);
//     scanf("%s", add[4].city);
//     scanf("%s", add[4].state);

//     printAdd(add[0]);
//     printAdd(add[1]);
//     printAdd(add[2]);
//     printAdd(add[3]);
//     printAdd(add[4]);

//     return 0;
// }

// void printAdd(struct address add) {
//     printf("address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
// }

// x-------------------------------------------------------x

// Practice Qs 54
// Write a program to store the data of 3 students.

// #include<stdio.h>
// #include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main() {
//     struct student s1;
//     s1.roll = 1664;
//     s1.cgpa = 9.2;
//     strcpy(s1.name, "Saanvi");

//     printf("student name = %s\n", s1.name);
//     printf("student roll no = %d\n", s1.roll);
//     printf("student cgpa %f\n", s1.cgpa);

//     struct student s2;
//     s2.roll = 1660;
//     s2.cgpa = 8.7;
//     strcpy(s2.name, "Jahnavi");

//     printf("student name = %s\n", s2.name);
//     printf("student roll no = %d\n", s2.roll);
//     printf("student cgpa %f\n", s2.cgpa);

//     struct student s3;
//     s3.roll = 1656;
//     s3.cgpa = 9.6;
//     strcpy(s3.name, "Yuktha");

//     printf("student name = %s\n", s3.name);
//     printf("student roll no = %d\n", s3.roll);
//     printf("student cgpa %f\n", s3.cgpa);

//     return 0;
// }

// x-------------------------------------------------------x
// CHAPTER 9 : STRUCTURES
// x-------------------------------------------------------x

// Practice Qs 53
// Check if a given character is present in a string or not.

// #include<stdio.h>
// #include<string.h>

// void checkChar(char str[], char ch);

// int main() {
//     char str[] = "Saanvi Jahnavi Yuktha";
//     char ch = 'S';
//     checkChar(str, ch);
//     return 0;
// }

// void checkChar(char str[], char ch) {
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] == ch) {
//             printf("character is present!");
//             return;
//         }
//     }
//     printf("character is not present!");
// }

// x-------------------------------------------------------x

// Practice Qs 52
// Write a function to count the occurence of vowels in a string.

// #include<stdio.h>
// #include<string.h>

// int countVowel(char str[]);

// int main() {
//     char str[] = "Hello World";
//     printf("vowels are : %d", countVowel(str));
//     return 0;
// }

// int countVowel(char str[]) {
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             count++;
//         }
//     }
//     return count;
// }

// x-------------------------------------------------------x

// Practice Qs 51
// Write a function named slice, which takes a string and returns a sliced string from index n to m. Slice - extracting a specific portion (a substring) of a string.

// #include<stdio.h>
// #include<string.h>

// void slice(char str[], int n, int m);

// int main() {
//     char str[] = "Hello World";
//     slice(str, 3, 6);
//     return 0;
// }

// void slice(char str[], int n, int m) {
//     char newStr[100];
//     int j = 0;
//     for(int i = n; i <= m; i++, j++) { // n and m are valid values
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';
//     puts(newStr);
// }

// x-------------------------------------------------------x

// Practice Qs 50
// Salting
// Find the salted form of a password entered by the user if the salt is "123" & added at the end. Salting adds extra random characters to a password before hashing it so hackers can't use pre-calculated cheat sheets to guess it.

// #include<stdio.h>
// #include<string.h>

// void salting(char password[]);

// int main() {
//     char password[100];
//     scanf("%s", password);
//     salting(password);
// }

// void salting(char password[]) {
//     char salt[] = "123";
//     char newPass[200];

//     strcpy(newPass, password);
//     strcat(newPass, salt);
//     puts(newPass);
// }

// x-------------------------------------------------------x

// Practice Qs 49
// Take a string input from the user using %c

// #include<stdio.h>
// #include<string.h>

// int main() {
//     char str[100];
//     char ch;
//     int i = 0;

//     while(ch != '\n') {
//         scanf("%c", &ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
// }

// x-------------------------------------------------------x

// Practice Qs 48
// Make a program that inputs user's name and prints its length

// #include<stdio.h>

// int countLength(char arr[]);

// int main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("length is : %d", countLength(name));
// }

// int countLength(char arr[]) {
//     int count = 0;
//     for(int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count - 1;
// }

                            //OR

// #include<stdio.h>
// #include<string.h>

// int countLength(char arr[]);

// int main() {
//     char name[] = "saanvi";
//     int length = strlen(name);
//     printf("length is : %d", length);
// }

// int countLength(char arr[]) {
//     int count = 0;
//     for(int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count - 1;
// }

// x-------------------------------------------------------x

// Practice Qs 47
// Ask the user to enter their firstName and print it back to them. Also try this with their full name.

// #include<stdio.h>

// int main() {
//     char firstName[50];
//     scanf("%s", firstName);
//     printf("your name is %s", firstName);

//     char fullName[100];
//     scanf("%s", fullName);
//     printf("your full name is %s", fullName); --> scanf() cannot input multi-word strings with spaces
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 46
// Create a string firstName & lastName to store details of user and print all the characters using a loop.

// #include<stdio.h>

// void printString(char arr[]);

// int main() {
//     char firstName[] = "Saanvi";
//     char lastName[] = "Jonnalagadda";

//     printString(firstName);
//     printString(lastName);
//     return 0;
// }

// void printString(char arr[]) {
//     for(int i = 0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// x-------------------------------------------------------x
// CHAPTER 8 : STRINGS
// x-------------------------------------------------------x

// Practice Qs 45
// Create a 2D array, storing the tables of 2 & 3.

// #include<stdio.h>

// void storeTable(int arr[][10], int n, int m, int number);

// int main() {
//     int tables[2][10];
//     storeTable(tables, 0, 10, 2);
//     storeTable(tables, 1, 10, 3);

//     for(int i = 0; i < 10; i++) {
//         printf("%d \t", tables[0][i]);
//     }
//     printf("\n");
//     for(int i = 0; i < 10; i++) {
//         printf("%d \t", tables[1][i]);
//     }
    
//     return 0;
// }

// void storeTable(int arr[][10], int n, int m, int number) {
//     for(int i = 0; i < m; i++) {
//         arr[n][i] = number * (i + 1);
//     }
// }

// x-------------------------------------------------------x

// Practice Qs 44
// Write a program to store the first n fibonacci numbers.

// #include<stdio.h>

// int main () {
//     int n;
//     printf("enter a number (n>2) : ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
//     printf("%d \t %d \t", fib[0], fib[1]);

//     for(int i = 2; i < n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         printf("%d \t", fib[i]);
//     }
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 43
// Write a function to reverse an array.

// #include<stdio.h>

// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main() {
//     int arr[] = {1, 2, 3 ,4, 5};
//     reverse(arr, 5);
//     printArr(arr, 5);
//     return 0;
// }

// void printArr(int arr[], int n) {
//     for(int i = 0; i < n; i++) {
//         printf("%d \t", arr[i]);
//     }
// }

// void reverse(int arr[], int n) {
//     for(int i = 0; i < n/2; i++) {
//         int firstVal = arr[i];
//         int secondVal = arr[n - i - 1];
//         arr[i] = secondVal;
//         arr[n - i - 1] = firstVal;
//     }
// }

// x-------------------------------------------------------x

// Practice Qs 42
// int arr[] = {1, 2, 3, 4, 5}
// For the given array, what will the following give?
// a. *(arr + 2) ---> 3
// b. *(arr + 5) ---> error!

// #include<stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("%d \n", *(arr + 2));
//     printf("%d \n", *(arr + 5)); // ----> error : prints a random value as it is not a part of the array (only values upto (arr + 4) exist)
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 41
// Write a function to count the number of odd number in an array.

// #include<stdio.h>

// int countOdd(int arr[], int n);

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("%d", countOdd(arr, 6));
//     return 0;
// }

// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }
//     return count;
// }

// x-------------------------------------------------------x

// Practice Qs 40
// Write a program to enter price fo 3 items and print their final cost with gst.

// #include<stdio.h>

// int main() {
//     float price[3];
//     printf("enter 3 prices : ");
//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     printf("total price 1 : %f \n", price[0] + (0.18 * price[0]));
//     printf("total price 2 : %f \n", price[1] + (0.18 * price[1]));
//     printf("total price 3 : %f \n", price[2] + (0.18 * price[2]));

//     return 0;
// }

// x-------------------------------------------------------x
// CHAPTER 7 : ARRAYS
// x-------------------------------------------------------x


// Practice Qs 39
// Write a function to calculate the sum, product and average of 2 numbers. Print that average and sum in the main function.

// #include<stdio.h>

// void doWork(int a, int b, int *sum, int *prod, int *avg);

// int main() {
//     int a = 3, b = 5;
//     int sum, prod, avg;
//     doWork(a, b, &sum, &prod, &avg);

//     printf("sum = %d, prod = %d, avg = %d", sum, prod, avg);
//     return 0;
// }

// void doWork(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b)/2;
// }

// x-------------------------------------------------------x

// Practice Qs 38
// Will the address output be same?
// void printAddress(int n);
// int main () {
//     int n = 4;
//     printf("%p\n", &n);
//     printAddress(n);
//     return 0;
// }
// void printAddress(int n) {
//     printf("%p\n", &n);
// }

// No, the address will not be same due to call by value - only a copy of 4 is beaing sent.
// If it were call by reference (pointer), the address would become same. (i.e. int *n, printAddress(&n), printf("%p\n", n) - print n becasue n is value of pointer which is an address).

// x-------------------------------------------------------x

// Practice Qs 37
// Swap 2 numbers, a & b.

// #include<stdio.h>

// void _swap(int *a, int *b);

// int main () {
//     int a = 3, b = 5;
//     _swap(&a, &b);
//     printf("a = %d and b = %d \n", a, b);

//     return 0;
// }

// void _swap(int *a, int *b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// x-------------------------------------------------------x

// Practice Qs 36
// Print the value of "i" from its pointer to pointer.

// #include<stdio.h>

// int main() {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;

//     printf("i = %d \n", **pptr);
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 35
// Find output:
// int *ptr;
// int x;
// ptr = &x;
// *ptr = 0;
// printf("x = %d \n", x);
// printf("*ptr = %d \n", *ptr);
// *ptr += 5;
// printf("x = %d \n, x");
// printf("*ptr = %d \n", *ptr);
// (*ptr)++;
// printf("x = %d \n", x);
// printf("*ptr = %d \n", *ptr);

// #include<stdio.h>

// int main(){
//     int *ptr;
//     int x;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d \n", x);     // ---> 0
//     printf("*ptr = %d \n", *ptr);   // ---> 0    

//     *ptr += 5;
//     printf("x= %d \n", x);     // ---> 5
//     printf("*ptr = %d \n", *ptr);     // ---> 5

//     (*ptr)++;
//     printf("x = %d \n", x);     // ---> 6
//     printf("*ptr = %d \n", *ptr);     // ---> 6
//     return 0;
// }

// x-------------------------------------------------------x
// CHAPTER 6 : POINTERS
// x-------------------------------------------------------x

// Practice Qs 34
// Write a function to print the nth term of the fibonacci sequence.

// #include<stdio.h>

// int fib(int n);

// int main () {
//     printf("%d", fib(6));
//     return 0;
// }

// int fib(int n) {
//         if(n == 0) {
//             return 0;
//         }
//         if(n == 1) {
//             return 1;
//         }
    
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     return fibN;
// }

// x-------------------------------------------------------x

// Practice Qs 33
// // Write a function to print n terms of fibonacci sequence.

// #include<stdio.h>

// int fib(int n);

// int main () {
//     fib(6);
//     return 0;
// }

// int fib(int n) {
//         if(n == 0) {
//             return 0;
//         }
//         if(n == 1) {
//             return 1;
//         }
    
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     printf("fib of %d is : %d \n", n, fibN);
//     return fibN;
// }

// x-------------------------------------------------------x

// Practice Qs 32
// Write a function to calculate percentage of a student from marks in Science, Math and Sanskrit.

// #include<stdio.h>

// int calcPercentage(int Science, int Math, int Sanskrit);

// int main() {
//     int Science = 98;
//     int Math = 95;
//     int Sanskrit = 99;

//     printf("percentage is : %d", calcPercentage(Science, Math, Sanskrit));
//     return 0;
// }

// int calcPercentage(int Science, int Math, int Sanskrit) {
//     return ((Science + Math + Sanskrit)/ 3);
// }

// x-------------------------------------------------------x

// Practice Qs 31
// Write a function to convert celsius to fahrenheit.

// #include<stdio.h>

// float convertTemp(float celsius);

// int main() {
//     float far = convertTemp(37);
//     printf("far : %f", far);
//     return 0;
// }

// float convertTemp(float celsius) {
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
// }

// x-------------------------------------------------------x

// Practice Qs 30
// Print factorial of n suing recursion.

// #include<stdio.h>

// int fact(int n);

// int main() {
//     printf("factorial is : %d", fact(5));
//     return 0;
// }

// int fact(int n) {
//     if (n == 1) {
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }

// x-------------------------------------------------------x

// Practice Qs 29
// Print sum of first n natural numbers using recusrion.

// #include<stdio.h>

// int sum(int n); 

// int main() {
//     printf("sum is : %d", sum(5));
//     return 0;
// }

// int sum(int n) {
//     if (n == 1){
//         return 1;
//     }
//     int sumNm1 = sum(n-1); // sum of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// x-------------------------------------------------------x

// Practice Qs 28
// Print "Hello World" 5 times.

// #include<stdio.h>

// void printHW(int count);

// int main() {
//     printHW(5);
//     return 0;
// }

// void printHW(int count) {
//     if (count == 0) {
//         return;
//     }
//     printf("Hello World \n");
//     printHW(count-1);
// }

// x-------------------------------------------------------x

// Practice Qs 27
// Write functions to calcluate area of square, a circle and a rectangle.

// #include<stdio.h>
// #include<math.h>

// float squareArea(float side);
// float circleArea(float rad);
// float rectangleArea(float a, float b);

// int main() {
//     float side = 5;

//     printf("area is : %f \n", squareArea (side));

//     float rad = 1.0;

//     printf("area is : %f \n", circleArea (rad));

//     float a = 5.0;
//     float b = 10.0;

//     printf("area is : %f \n", rectangleArea (a, b));
//     return 0;
// }

// float squareArea(float side) {
//     return side * side;
// }

// float circleArea(float rad) {
//     return 3.14 * rad * rad;
// }

// float rectangleArea(float a, float b) {
//     return a * b;
// }

// x-------------------------------------------------------x

// Practice Qs 26
// Use librabry functions to calculate the square of a number given by user.

// #include<stdio.h>
// #include<math.h>

// void calculateSquare(float value);

// int main() {
//     int n = 4;
//     printf("%f", pow(n,2));
//     return 0;
// }

// void calculateSquare(float value) {

// }

// x-------------------------------------------------------x

// Practice Qs 25
// Write a function that print namaste if user is indian & bonjour if the user is french. 

// #include<stdio.h>

// void namaste();
// void bonjour();

// int main() {
//     printf("enter f for french & i for indian \n"); 
//     char ch;
//     scanf("%c", &ch);

//     if (ch == 'i') {
//         namaste();
//     } else {
//         bonjour();
//     }
//     return 0;
// }

// void namaste() {
//     printf("namaste \n");
// }
// void bonjour() {
//     printf("bonjour \n");
// }

// x-------------------------------------------------------x

// Practice Qs 24
// Write 2 functions - one to print "Hello" & second to print "goodbye".

// #include <stdio.h>

// void printHello();
// void printGoodbye();

// int main() {
//     printHello();
//     printGoodbye();    
//     return 0;
// }

// void printHello() {
//     printf("Hello! \n");
// }

// void printGoodbye() {
//     printf("Goodbye \n");
// }

// x-------------------------------------------------------x
// CHAPTER 5 : FUNCTIONS & RECURSION 
// x-------------------------------------------------------x

// Practice Qs 23
// Print the sum of odd numbers from 5 to 50.

// #include<stdio.h>
// int main() { 
//     int sum = 0;
//     for (int i = 5; i <= 50; i++) {
//         sum += i;
//     } 
//     printf("sum is %d \n", sum);
    
//         return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 22
// Print the multiplication table of a number entered by the user in reverse order.

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     for (int i = 10; i >= 1; i--) {
//         printf("%d \n", n*i);
//     }
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 21
// Write a program to calculate the factorial of a number entered by the user.

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     printf("final factorial is %d \n",fact);
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 20
// Print odd numbers from 5 to 50.

// #include<stdio.h>
// int main() {
//     for (int i = 5; i <= 50; i++) {
//         if (i % 2 != 0) {
//             printf("%d \n", i);
//         }

//     }
//     return 0;
// }
      
// x-------------------------------------------------------x

// Practice Qs 19
// Print numbers from 1 to 10 except 6.

// #include<stdio.h>
// int main() {
//     for (int i = 1; i <= 10; i++) {
//         if (i == 6) {
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 18
// Keep taking numbers as input from the user until the user enters a number which is divisible by 7.

// #include<stdio.h>
// int main() {
//     int n;
//     do {
//         printf("enter a number : ");
//         scanf("%d", &n);
//         printf("%d \n", n);

//         if (n % 7 == 0) {
//             break;
//         }

//     } while (1);
//     printf("thank you!");
//     return 0;
//     }

// x-------------------------------------------------------x

// Practice Qs 17
// Keep taking numbers as input from the user until the user enters an odd number. 

// #include<stdio.h>
// int main() {
//     int n;
//     do {
//         printf("enter a number : ");
//         scanf("%d", &n);
//         printf("%d \n", n);

//         if (n % 2 != 0) {
//             break;
//         }

//     } while (1);
//     printf("thank you!");
//     return 0;
//     }

// x-------------------------------------------------------x

// Practice Qs 16
// Print the multiplication table of a number entered by the user.

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <=10; i++) {
//         printf("%d \n", n*i);
//     }
//         return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 15
// Print the sum of first n natural numbers and also print them in reverse order. (Take n from user)

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum = sum + i;
//     } 
//     printf("sum is %d \n", sum);

//     for (int i = n; i >= 1; i--) {
//         printf("%d \n", i);
//     }
//         return 0;
// }

                            //OR

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number :");
//     scanf("%d", &n);

//     int sum = 0;
//     for (int i = 1; j = n; i <= n && j >=1; i++, j--) {
//         sum = sum + i;
//         printf("%d \n", j);
//     }
//     printf("sum is %d \n", sum);
//     return 0;
// }

                            //OR

// #include<stdio.h>
// int main() {
//     int n;printf("enter a number :");
//     scanf("%d", &n);

//     int sum = 0;
//     for (int j = n; j >=1; j--) {
//         sum = sum + j;
//         printf("%d \n", j);
//     }
//     printf("sum is %d \n", sum);
//     return 0;
// }    

// x-------------------------------------------------------x

// Practice Qs 14
// Print numbers from 0 to n, where n is entered by the user.

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);
    
//     int i = 0;
//     while(i <= n) {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }
  
                            //OR

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);
    
//     for(int i = 0; i <= n; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }                         

// x-------------------------------------------------------x

//Practice Qs 13
// Write a program to print numbers from 0 to 10.

// #include<stdio.h>
// int main() {
//     for(int i = 0; i <=10; i = i + 1) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// x-------------------------------------------------------x
// CHAPTER 4 : LOOP CONTROL STATEMENTS
// x-------------------------------------------------------x

// Practice Qs 12
// Write a program to find if a character entered by user is uppercase or not. 

// #include<stdio.h>
// int main() {
//     char ch;
//     printf("enter a character : ");
//     scanf("%c", &ch);

//     if(ch >= 'A' && ch <= 'Z') {
//         printf("The character is uppercase \n");
//     } else if (ch >= 'a' && ch <= 'z') {
//         printf("The character is lowercase \n");
//     } else {
//         printf("The character is not a letter \n");
//     }
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 11
// Will this code :
// #include<stdio.h>
// int main() {
//    int x = 2;

//    if(x=1) { 
//     printf("x is equal to 1");
//     } else {
//     printf("x is not equal to 1");
//    }

//     return 0;
// }
// a. give error
// b. print "x is equal to 1" -> correct answer
// c. print "x is not equal to 1"

// x-------------------------------------------------------x

// Practice Qs 10
// Write a program to give grades to a student.
// marks < 30 is C
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A
// 90 <= marks <= 100 is A+

// #include<stdio.h>
// int main() {
//     int marks;
//     printf("enter marks (0 - 100) :  ");
//     scanf("%d", &marks);
    
//     if(marks < 30) {
//         printf(" GRADE : C \n)");
//     } else if(marks >= 30 && marks < 70) {
//         printf(" GRADE : B \n");
//     } else if(marks >= 70 && marks < 90) {
//         printf(" GRADE : A \n");
//     } else if(marks >= 90 && marks <= 100) {
//         printf(" GRADE : A+ \n");
//     } else {
//         printf("Invalid marks. Please enter marks between 0 and 100.\n");
//     }
//     return 0;
// }

// x-------------------------------------------------------x
// CHAPTER 3 : CONDITIONAL STATEMENTS
// x-------------------------------------------------------x

// Practice Qs 9
// Write program to check if a student has passed or failed. (marks > 30 --> pass; marks <= 30 --> fail)

// #include<stdio.h>
// int main() {
//     int marks;
//     printf("enter marks (0 - 100) :  ");
//     scanf("%d", &marks);

// if(marks >=0 && marks <= 30) {
//     printf("FAIL \n");
// } else if(marks > 30 && marks <= 100) {
//     printf("PASS \n");
// } else {
//     printf("Invalid marks. Please enter marks between 0 and 100.\n");
// }
//    return 0;
// }

                            //OR

// marks <= 30 ? printf("FAIL \n") : printf("PASS \n");

// x-------------------------------------------------------x

// Practice Qs 8
// Print 1(true) or 0(false) for the following statements:
// a. If it is Sunday and it is snowing. (true)
// b. If it is Monday or it is raining. (true)
// c. If a number is greater than 9 and less than 100 [2 digit number]. (true)

// #include<stdio.h>
// int main() {
// a.
//     int isSunday = 1;
//     int isSnowing = 1;
//     printf("%d", isSunday && isSnowing);

// b.
//     int isMonday = 1;
//     int isRaining = 0;
//     printf("%d", isMonday || isRaining);

// c.
//     int number;
//     printf("enter a number");
//     scanf("%d", &number);
//     printf("%d", number > 9 && number < 100);

//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 7
// Are the following valid or not?
// a. int a = 8^8;
// b. int x; int y = x;
// c. int x, y = x;
// d. char stars = '**';

// #include<stdio.h>
// int main() {
    // a. int a = 8^8; --> valid    (bitwise XOR)
    // b. int x; int y = x; --> valid
    // c. int x, y = x; --> not valid  
    // d. char stars = '**'; --> not valid     (multiple characters in a character constant)
//      return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 6
// Write a program to check if a number is odd or even.
// NOTE : If the output is 1, then the number is even. If the output is 0, then the number is odd.

// # include<stdio.h>
// int main() {
//     int x;
//     printf("enter a number");
//     scanf("%d", &x);
//     printf("%d", x % 2 == 0);
//     return 0;
// }

// x-------------------------------------------------------x

//Practice Qs 5
// Write a program to check if a number is divisible by 2 or not.
// NOTE : If the output is 1, then the number is divisible by 2. If the output is 0, then the number is not divisible by 2.

// # include<stdio.h>
// int main() {
//      int x;
//         printf("enter a number");
//         scanf("%d", &x);
//         printf("%d", x % 2 == 0);
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 4
// What will be the output of the following expressions?
// a. 5*2 - 2*3
// b. 5*2 / 2*3
// c. 5*(2 / 2)*3
// d. 5+2 / 2*3

// # include<stdio.h>
// int main() {
    // a. 5*2 - 2*3 --> 4
    // b. 5*2 / 2*3 --> 15
    // c. 5*(2 / 2)*3 --> 15
    // d. 5+2 / 2*3 --> 8
//     return 0;
// }

// x-------------------------------------------------------x
// CHAPTER 2 : INSTRUCTIONS & OPERATORS
// x-------------------------------------------------------x

// Practice Qs 3
// Solve :
// int a = 1.999999
// NOTE : The output will be 1 because the value of a is truncated to fit into an integer variable. The decimal part is discarded, and only the whole number part is stored in the variable a. Therefore, when we print a, it will output 1 instead of 1.999999.

// # include<stdio.h>
// int main() {
//     int a = 1.999999;
//     printf("%d", a);
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 2
// Write a program to calculate the area of a circle. (Use 3.14 for π and take the radius from the user)

// #include<stdio.h>
// int main() {
//     float radius;
//     printf("enter radius");
//     scanf("%f", &radius);
//     printf("area of circle is %f", 3.14 * radius * radius);
//     return 0;
// }

// x-------------------------------------------------------x

// Practice Qs 1
// Write a program to calculate the perimeter of a square. Take the side of the square from the user.

// #include<stdio.h>
// int main() {
//     int side;
//     printf("enter side");
//     scanf("%d", &side);
//     printf("perimeter of square is %d", 4 * side);
//     return 0;
// }

// x-------------------------------------------------------x
// CHAPTER 1 : VARIABLES, DATA TYPES & INPUT/OUTPUT
// x-------------------------------------------------------x
