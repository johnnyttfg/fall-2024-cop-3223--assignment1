// Jonathan Thomas 5670488


#include <stdio.h>
#include <math.h>

// Define PI
#define PI 3.14159

// Function Prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, x2, y1, y2, distance;
    
    //  input coordinates
    printf("Enter coordinates for Point #1 (x1, y1): ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter coordinates for Point #2 (x2, y2): ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    // Output entered points
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    
    // Calculate the distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Output the calculated distance
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}

// Function to calculate the perimeter using the distance function
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance; 

    // Output the perimeter
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    // Return difficulty level 
    return 2.0;
}

// Function to calculate the area using the distance function
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance, 2); 

    // Output the area
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Return difficulty level (arbitrarily chosen, can be adjusted)
    return 3.0;
}

// Function to calculate the width using the distance function
double calculateWidth() {
    double distance = calculateDistance();
    double width = distance; 

    // Output the width
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // Return difficulty level 
    return 1.5;
}

// Function to calculate the height using the distance function
double calculateHeight() {
    double distance = calculateDistance();
    double height = distance;

    // Output the height
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // Return difficulty level (arbitrarily chosen, can be adjusted)
    return 2.5;
}

// Function to ask for user input
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}
