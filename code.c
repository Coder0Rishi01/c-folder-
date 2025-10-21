# include <stdio.h>
# include <math.h>

                // Type Declaration Instructions (Chapter - 2)

// int main() {
//     int a = 22;
//     int b = a;
//     int c = b + 1;
//     int d =  1,e;

//     int oldAge = 22;
//     int years = 2;
//     int newAge =  oldAge + years;

//     return 0;
// }


                // Arithmetic Instruction 

// int main() {
//     // int a = 1, b = 2;
//     // int sum = a + b;
//     // int multiply = a * b;
//     // int x, y = a * b; 
//     int b, c;
//     b = c = 1;
//     // int b + c = a; // Invalid 
//     int a = b + c; // valid 
//     int power = pow(b,c);
//     printf("%d", power);
//     return 0; 
// } 


            // Type Conversion

// int main() {
//     printf("%d \n", 2 * 2);
//     printf("%f \n", 2.0 * 2);


//     return 0;
// }

//  Practice Qs 3.

// int main() {
//     int a = (int) 1.999999;
//     printf("%d \n", a);

//     return 0;
// }


                    // Operator Precedence 

// int main() {
//     int x = 4 + 9 * 10;
//     int a = 4 * 3 / 6 * 2;
//     printf("%d \n", x);
//     printf("%d \n", a);

//     return 0;
// }


                // Practice Qs 4

// int main() {
//     int a = 5*2-2*3;
//     int b = 5*2 / 2*3;
//     int c = 5 * (2/2) * 3;
//     int d = 5 + 2 / 2 * 3;

//     printf("%d \n", a);
//     printf("%d \n", b);
//     printf("%d \n", c);
//     printf("%d \n", d);

//     return 0;

// }


                    // Practice Qs 5


// WAP to check if a number is divisible by 2 or not. 

// int main() {
//     // even -> 1 // Practice Qs 6
//     // odd -> 0

//     int x;
//     printf("enter a number : ");
//     scanf("%d", &x);

//     printf("%d \n", x % 2 == 0);
//     return 0;
// }


                            // Practice Qs 7

// int main() {
//     int x; int y = x; // valid
//     // int x,y = x;  invlid
//     // char stars = '**'; invlid 
//     printf("%d", 8^8);

//     return 0;
// }


                    // Practice Qs 8

// A. if it's sunday & it's snowing -> true  

// int main() {
//     int isSunday = 1;
//     int isSnowing = 1;
//     printf("%d \n", isSunday && isSnowing);

//     return 0;
// }


// B. if ti's monday or it's raining -> true 
 
// int main() {
//     int isMonday = 0;
//     int isRaining = 1;

//     printf("%d \n", isMonday || isRaining);

//     return 0;
// }



// C. if a number is greater than 9 & less than 100 -> true (2 digit number) 


int main() {
    int x;
    printf("enter number : ");
    scanf("%d", &x);

    printf("%d \n", x>9 && x<100);

    return 0;
}