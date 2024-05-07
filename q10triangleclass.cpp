#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Triangle {
private:
    double side1, side2, side3; // Lengths of the triangle sides

public:
    // Constructor to initialize sides of the triangle
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {
        // Check if all sides are greater than 0
        if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
            throw invalid_argument("All sides must be greater than 0.");
        }
        // Check triangle inequality theorem
        if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
            throw invalid_argument("Invalid triangle sides. Sum of any two sides must be greater than the third side.");
        }
    }

    // Function to calculate the area of a right-angled triangle (0.5 * base * height)
    double calculateArea(double base, double height) {
        if (base <= 0 || height <= 0) {
            throw invalid_argument("Base and height must be greater than 0.");
        }
        return 0.5 * base * height;
    }

    // Function to calculate the area of any triangle using Heron's formula
    double calculateArea() {
        // Calculate semi-perimeter
        double s = (side1 + side2 + side3) / 2.0;
        // Calculate area using Heron's formula
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main() {
    double s1, s2, s3;
    cout << "Enter lengths of the triangle sides: ";
    cin >> s1 >> s2 >> s3;

    try {
        Triangle triangle(s1, s2, s3);
        double area;

        // For a right-angled triangle, get base and height from the user
        char choice;
        cout << "Is it a right-angled triangle? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            double base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = triangle.calculateArea(base, height);
        } else {
            area = triangle.calculateArea();
        }

        cout << "Area of the triangle: " << area << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
