#include <iostream>

// Use the standard namespace to avoid writing std:: before every command.
using namespace std;

/**
 * @brief Calculates and prints the simple interest.
 * @param principal_amount The initial amount of money.
 * @param interest_rate The rate of interest per period (as a percentage).
 * @param time The duration the money is invested or borrowed for.
 */
void simple_interest(float principal_amount, float interest_rate, float time) {
    // Formula for simple interest: (P * R * T) / 100
    float si = (principal_amount * interest_rate * time) / 100;
    cout << "Simple Interest is: " << si << endl;
}

/**
 * @brief Finds and prints the greater of two numbers.
 * @param a The first integer.
 * @param b The second integer.
 */
void max_of_two(int a, int b) {
    if (a == b) {
        cout << a << " is equal to " << b << endl;
    } else if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else { // a must be less than b
        cout << b << " is greater than " << a << endl;
    }
}

/**
 * @brief Calculates and prints the factorial of a non-negative integer.
 * @param n The number to find the factorial of.
 */
void factorial_of_n(int n) {
    // Factorial is not defined for negative numbers.
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return; // Exit the function
    }

    // Initialize factorial_result to 1. The factorial of 0 is 1.
    long long factorial_result = 1;

    // Calculate factorial by multiplying numbers from 1 up to n.
    for (int i = 1; i <= n; ++i) {
        factorial_result *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial_result << endl;
}

/**
 * @brief Checks if a person of a given age is eligible to drive (age 18 or older).
 * @param age The age of the person.
 */
void can_drive(int age) {
    if (age >= 18) {
        cout << "Can this person drive? Yes" << endl;
    } else {
        cout << "Can this person drive? No" << endl;
    }
}

int main() {
    // Declare variables for user input.
    float principal;
    float rate, time_period;
    int num1, num2, factorial_num, person_age;

    // Prompt the user and read inputs for simple interest calculation.
    cout << "Enter Principal Amount, Interest Rate, and Time Period: ";
    cin >> principal >> rate >> time_period;

    // Prompt the user and read inputs for the other functions.
    cout << "Enter two numbers to compare: ";
    cin >> num1 >> num2;
    cout << "Enter a number to find its factorial: ";
    cin >> factorial_num;
    cout << "Enter a person's age: ";
    cin >> person_age;

    cout << "\n--- Results ---\n";

    // Call the functions with the user-provided values.
    simple_interest(principal, rate, time_period);
    max_of_two(num1, num2);
    factorial_of_n(factorial_num);
    can_drive(person_age);

    return 0; // Indicate that the program ran successfully.
}
/*
#include <iostream>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    for (int i = 0; i < 10; ++i)
        cout << "Hello world!\n";

    return 0;
}
*/