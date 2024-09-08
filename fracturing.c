#include <stdio.h>
#include <math.h>

// Define PI
#define PI 3.14159

// Function 
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput(const char *prompt);

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
    
    // Prompt user to input coordinates
    x1 = askForUserInput("Enter x-coordinate #1: ");
    y1 = askForUserInput("Enter y-coordinate #1: ");
    x2 = askForUserInput("Enter x-coordinate #2: ");
    y2 = askForUserInput("Enter y-coordinate #2: ");
    
    // Output entered points
    printf("Point #1 entered: x1 = %.1f; y1 = %.1f\n", x1, y1);
    printf("Point #2 entered: x2 = %.1f; y2 = %.1f\n", x2, y2);
    
    // Calculate the distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Output the calculated distance
    printf("The distance between the two points is %.3f\n\n", distance);
    return distance;
}

// Function to calculate the perimeter using the distance function
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance; 

    // Output the perimeter
    printf("The perimeter of the city encompassed by your request is %.6f\n\n", perimeter);

    //  difficulty level
    return 2.0;
}

// Function to calculate the area using the distance function
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance, 2); 

    // Output the area
    printf("The area of the city encompassed by your request is %.6f\n\n", area);

    //  difficulty level 
    return 2.0;
}

// Function to calculate the width using the distance function
double calculateWidth() {
    double distance = calculateDistance();
    double width = distance; 

    // Output the width
    printf("The width of the city encompassed by your request is %.6f\n\n", width);

    // difficulty
    return 1.0;
}

// Function to calculate the height using the distance function
double calculateHeight() {
    double distance = calculateDistance();
    double height = distance; 

    // Output the height
    printf("The height of the city encompassed by your request is %.6f\n\n", height);

    //  difficulty level 
    return 2.0;
}

// Function to ask for user input 
double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}
