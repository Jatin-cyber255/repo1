// // DATA TYPES ?
// #include <stdio.h>
// int main(){
//  int a=8;
//  printf("Integer %d,", a);

//  float b=2.3;
//  printf("Integer %f,", a);

//  char c='jatin';
//  printf("Integer %c,", a);
// }

// // SIZE OF ?
// #include <stdio.h>
// int main(){
//  printf("size of int :%zu bytes\n ", sizeof(int));
//  printf("size of char:%zu byte\n ", sizeof(char));
//  printf("size of float:%zu byte\n ", sizeof(float));
//  return 0;
// }


// USE OF %.2 IS TO REDUCE ZEROES IN OUTPUT (SEE QUESTION)?
// #include<stdio.h>
// int main(){
//     float a,b;
//     printf("enter a: ");
//     scanf("%f", &a);
//     printf("enter b: ");
//     scanf("%f", &b);
//     printf("sum of a+b is %.2f",a+b);
//     return 0;
// }


// an ARITHMETIC OPERATION between
//   int and int --> int
//   int and float --> float
//   float and float --> float
// EXAMPLES
//    5/2 becomes 2 as both operands are int.
//    5.0/2 becomes 2.5 as one of operands is float.
//    2/5 becomes 0 as both operands are int.

//  QUESTION  QUESTION  QUESTION?
//   int k=3.0/9;  value of k? and why
// ANS= 3.0/9 = 0.333 .but since k is an int,it cannot store floats & value 0.33 is demoted to 0.
