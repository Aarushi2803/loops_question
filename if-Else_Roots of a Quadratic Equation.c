// Write a program that takes three integers a, b, and c as input, representing the coefficients of a quadratic equation ax^2 + bx + c = 0. The program should calculate and print the roots of the equation along with their type.


// where the discriminant D = b^2 − 4ac determines the type of roots:

// If D>0, print "Real and Distinct"
// If D=0, print "Real and Equal"
// If D<0, print "Complex"


#include <stdio.h>
#include <math.h>
int main(){

int a,b,c;  
scanf("%d %d %d",&a ,&b ,&c);
    
float dis = ((b * b) - (4 * a * c));
    
if(dis<0){
      float com1= -b/(2.0*a);
       float com2= sqrt(-dis)/(2.0*a);

    
 printf("Roots: %.2f + %.2fi, ",com1,com2);
    printf("%.2f - %.2fi\n",com1,com2);
     printf("Type: Complex\n"); 
}
    else {
float roots1 = (-b + sqrt((b * b) - (4 * a * c))) /(2.0 * a);
float roots2 = (-b - sqrt((b * b) - (4 * a * c))) /(2.0 * a);

if (dis>0) { 
  
     printf("Roots: %.2f, %.2f\n", roots1, roots2); 
    printf("Type: Real and Distinct\n");
  } 
else  {    
     printf("Roots: %.2f, %.2f\n", roots1, roots2); 
     printf("Type: Real and Equal\n"); 
}
    }    
  return 0;
}
