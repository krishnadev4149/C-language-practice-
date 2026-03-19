/* write a program which can help to find the area of circle by the given information */

# include <stdio.h>

int main () {
    int radius;

    printf("enter the radius of circle : \n ");
    scanf("%d", &radius );

    printf("area of circle is : %f", 3.14159265359*radius*radius );

    return 0;
}
