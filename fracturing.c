#include <stdio.h>
#include <math.h>

//Defining PI
#define PI 3.14159

 //Function
 int main(int argc, char **argv);
 double calculateDistance();
 double calculatePerimeter();
 double calculateArea();
 double calculateWidth();
 double calculateHeight();
 double askForUserInput();

 //Main function
 int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
 }

//Calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    //ask for user input coordinates
    printf("Enter coordinates for Point #1 (x1 y1): ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter coordinates for Point #2 (x2 y2): ");
    x2 = askForUserInput();
    y2 = askForUserInput();

    //Output user points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    //Calculate distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    //Output the calculated distance
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}

// Calculate Perimeter using the distance function
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance; 

    //Output the perimeter
    printf("The perimeter of the city encompassed by your request %.2f\n", perimeter);

    //Difficulty Level
    return 1.5;
}


