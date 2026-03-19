/* write a program which can help to find the area of Rectangle by the given information */

# include <stdio.h>

int main () {
    int length,width;

    printf("enter the side length of rectangle : \n ");
    scanf("%d", &length );

    printf("enter the side width of ractangle : \n ");
    scanf("%d", &width );
    printf("area of rectangle is : %d", length*width );

    return 0;
}
