#include<stdio.h>

                                    // Conditional Statement (Chapter - 3)


// int main() {
//     int age;
//     printf("enter age : ");
//     scanf("%d", &age);

//     if(age > 18) {
//         printf("You are adult \n");
//         printf("They can vote \n");
//         printf("They can drive \n"); 
//     }
//      else {
//         printf("not adult \n");
//     }

//     printf("Thank you \n");
//     return 0;
// }

        // uses else if 

// int main() {
//     int age;
//     printf("Enter age : ");
//     scanf("%d", &age);

//     if(age >= 18) {
//         printf("adult \n");
//     } else if(age > 13 && age < 18) {
//         printf("teenager \n");
//     } else {
//         printf("child \n");
//     }

//     return 0;
// }


                    // Ternary Opertors

// int main() {
//     int age;
//     printf("Enter age : ");
//     scanf("%d", &age);

//     age >= 18 ? printf("adult \n") : printf("not adult \n");

//     return 0;
// }


                    // Switch 

// int main() {
//     int day; // 1- monday, 2 - tues; 3- wed
//     printf("Enter day(1-7) : ");
//     scanf("%d", &day);

//     switch(day) {
//         case 1 : printf("monday \n");
//                 break;
//         case 2 : printf("tuesday \n");
//                 break;
//         case 3 : printf("wednesday \n");
//                 break;
//         case 4 : printf("thursday \n");
//                 break;
//         case 5 : printf("friday \n");
//                 break;
//         case 6 : printf("saturday \n");
//                 break;
//         case 7 : printf("sunday \n");
//                 break;
//         default : printf("not a valid day! \n");
        
//     }

//     return 0;
// }


                                // Nested  switch 


int main() {
        int number;
        printf("Enter number : ");
        scanf("%d", &number);

        
        if(number >= 0) {
                printf("positive \n");
               
                if(number % 2 == 0) {
                        printf("even \n");
                } else {
                        printf("odd \n");
                }

        } else {
                printf("negative ");
        }

        return 0;
}
