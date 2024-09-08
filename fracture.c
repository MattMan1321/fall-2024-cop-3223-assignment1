#include <stdio.h>
#include <math.h>

#define PI 3.14159
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

int main(int argc, char **argv){
    //Arguments: This function have should have the two defined arguments above.
    double x1, y1, x2, y2;
    
    // ask for user input
    printf("What are the values for x1, y1 \n");
    scanf("%lf %lf", &x1, &y1);
    printf("What are the values for x2, y2 \n");
    scanf("%lf %lf", &x2, &y2);

    double distance = calculateDistance(x1, y1, x2, y2);
    double perimeter = calculatePerimeter(distance);
    double area = calculateArea(distance);
    double wodth = calculateWidth(x1, x2);
    double height = calculateHeight(y1, y2);

    return 0;
} 

// calculate distance
double calculateDistance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
}

// calculate perimeter
double calculatePerimeter(double distance){
    double perimeter = distance * PI;
    printf("The perimeter is %.2f\n", perimeter);

    return 4.0;
}

// calculate area
double calculateArea(double distance){
    double area = PI * pow(distance / 2, 2);
    printf("The area is %.2f\n", area);

    return 3.0;
}

//calculate width
double calculateWidth(double x1, double x2){
    double width = fabs(x2 - x1);
    printf("The width is %.2f\n", width);

    return 2.0;

}

// calculate height
double calculateHeight(double y1, double y2){
    double height = fabs(y2 - y1);
    printf("The height is %.2f\n", height);

    return 2.0;
}