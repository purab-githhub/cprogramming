/*to calculate the permeter and area if land */
#include <stdio.h>
#include <math.h>
void main (){
    int choice;
  
    printf("/////MENU/////");
    printf("1.Rectangle");
    printf("2.Triangle");
    printf("3.circle");
    printf("4.square");
    
    printf("enter users choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:{
        printf("Rectangle");
        float length,breadth;
        printf("enter user lenght and breadth:");
        scanf("%f  %f",&length,&breadth);
        float Area ,Perimeter;
        Area=length*breadth;
        Perimeter=2*(length+breadth);
        printf("%f",Area);
        printf("%f",Perimeter);
    break;
    }
    case 2 :{
        printf("Triangle");
        float a ,b , c;
        printf("enter the value of three sides:");
        scanf("%f %f %f",&a,&b,&c);
        float side,perimeter,area;
        perimeter = a + b + c;
        side= perimeter / 2;
        area = sqrt(side * (side-a) * (side-b) * (side-c));
        printf("%f",area);
        printf("%f",perimeter);
    
    break;
    }
    case 3: {
        printf("circle");
        float radius;
        printf("enter the radius:");
        scanf("%f",&radius);
        float Area,Perimeter;
        Area=3.14*radius*radius;
        Perimeter= 2 * 3.14 * radius;
        printf("%f",Area);
        printf("%f",Perimeter);
    break;
    }
    case 4:{
        printf("Square");
        int a;
        float Area,Perimeter;
        printf("Enter the value:");
        scanf("%d",&a);
        Area= a*a;
        Perimeter= 4*a;
          printf("%f",Area);
         printf("%f",Perimeter);
         break;
    }

    }
}