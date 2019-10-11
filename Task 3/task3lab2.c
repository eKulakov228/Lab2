#include <stdio.h>

int main(){
    int n;
    printf("1-Summer, 2-Autumn, 3-Winter,4-Spring\nYour choise?\n");
    scanf("%d",&n);
    switch (n)
    {
    
        case 1 : printf("Summer includes June, July, August\n");
        break;

        case 2 : printf("Autumn includes September, October, November\n");
        break;

        case 3 : printf("Winter includes December, January, February\n");
        break;

        case 4 : printf("Spring includes March, April, May\n");
        break;
    }
    return 0;
}