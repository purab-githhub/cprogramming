/*to calculate the permeter and area if land */
#include <stdio.h>
#include <math.h>

void main (){
    int choice;
  
    printf("/////MENU/////\n");
    printf("1.Rectangle\n");
    printf("2.Triangle\n");
    printf("3.circle\n");
    printf("4.square\n");
    
    printf("enter users choice:\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:{
        printf("Rectangle\n");
        float length,breadth;
        printf("enter user lenght and breadth:\n");
        scanf("%f  %f",&length,&breadth);
        float Area ,Perimeter;
        Area=length*breadth;
        Perimeter=2*(length+breadth);
        printf("%f\n",Area);
        printf("%f\n",Perimeter);
    break;
    }

    case 2 :{
        printf("Triangle\n");
        float a ,b , c;
        printf("enter the value of three sides:\n");
        scanf("%f %f %f",&a,&b,&c);
        float side,perimeter,area;
        perimeter = a + b + c;
        side= perimeter / 2;
        area = sqrt(side * (side-a) * (side-b) * (side-c));
        printf("%f\n",area);
        printf("%f\n",perimeter);
    break;
    }

    case 3: {
        printf("circle\n");
        float radius;
        printf("enter the radius:\n");
        scanf("%f",&radius);
        float Area,Perimeter;
        Area=3.14*radius*radius;
        Perimeter= 2 * 3.14 * radius;
        printf("%f\n",Area);
        printf("%f\n",Perimeter);
    break;
    }

    case 4:{
        printf("Square\n");
        int a;
        float Area,Perimeter;
        printf("Enter the value:\n");
        scanf("%d",&a);
        Area= a*a;
        Perimeter= 4*a;
        printf("%f\n",Area);
        printf("%f\n",Perimeter);
        break;
    }
    }
}