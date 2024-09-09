// Jonathan Thomas
// UCFID 5670488
//9/07/24
//COP 3223 Parra
//The purpose is write a program that houses many internal functions.
//Input: Coordinates
//Output: Measurments for circle


#include <stdio.h>
#include <math.h>

// Preprocessor directive for PI
#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput(const char* prompt); 

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

// Helper function to ask for user input with a prompt
double askForUserInput(const char* prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

// Function to calculate the distance between two points
double calculateDistance() {
    // Getting user inputs in order x1, x2, y1, y2
    double x1 = askForUserInput("Enter x1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y1 = askForUserInput("Enter y1: ");
    double y2 = askForUserInput("Enter y2: ");

    // Calculating distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter of a shape based on two points
double calculatePerimeter() {
    // Reusing calculateDistance to get the diameter
    double diameter = calculateDistance();

    // Calculating the perimeter 
    double perimeter = PI * diameter;

    // Output
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    // Difficulty level 
    return 2.0; 
}

// Function to calculate the area of a shape based on two points
double calculateArea() {
    // Reusing calculateDistance to get the diameter
    double diameter = calculateDistance();

    // Calculating area 
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);

    // Output
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Difficulty level 
    return 2.0; 
}

// Function to calculate the width of a shape based on two points
double calculateWidth() {
    // Reusing calculateDistance to get the width
    double width = calculateDistance();

    // Output
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // Difficulty level 
    return 1.0; 
}

// Function to calculate the height of a shape based on two points
double calculateHeight() {
    // Reusing calculateDistance to get the height
    double height = calculateDistance();

    // Output
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // Difficulty level 
    return 2.0; 
}