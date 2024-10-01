//calculating the area of a rectangle
#include <stdio.h>
int main() {
    float length,width,area;
    
    //prompt the user for length and width
    printf("enter the length of the rectangle:");
    scanf("%f", &length);
    printf("length is %f\n", length);
    
    printf("enter the width of the rectangle:");
    scanf("%f", &width);
    printf("width is %f\n", width);
    
    //calculate the area
    area = length*width;
    
    //print the result
    printf("The area of the rectangle is: %2f square units\n",area);
    
    return 0;
}
