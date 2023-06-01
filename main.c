#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
Comments same as Go.
 */
int main() {
//    printf("Hello World!\n");
//    printf("Leaning C.");
    printf("Hello World!\nI'm learning C!\nHope I like it.\n");

    // Declaration syntax:
    // type variableName = value;
    int myNum = 15;
    char myLetter = 'D';

    // Declare without assignment:
    float myFloat;
    // Assign:
    myFloat = 5.99;

    // Format Specifiers are needed to print out vars.
    printf("var \"myNum\": %d\n", myNum);
    printf("var \"myFloat\": %f\n", myFloat);
    printf("var \"myLetter\": %c\n", myLetter);

    // Overwrite a value
    int newNum = 10;
    myNum = newNum;
    printf("myNum is now: %d\n", myNum);

    // Adding vars together
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("x + y = %d\n", sum);

    // Multiple declarations
    int a = 5, b = 6, c = 50;
    // Assigning the same value:
    int e, f, g;
    e = f = g = 50;
    printf("%d\n", e + f + g);

    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%.2f\n", myFloatNum); // Outputs 3.500000
    printf("%.3lf\n", myDoubleNum); // Outputs 19.990000

    // Explicit conversions
    float sumConversion = (float) 5 / 2;
    printf("%f\n", sumConversion);

    const int MYCONST = 22;
//    MYCONST = 30; // This will fail
    const float PI = 3.14;

    // sizeof operations
    // Note the use of `lu` for a long unsigned int
    printf("sizeof MYCONST: %lu\n", sizeof(MYCONST));

    // boolean values are printed as integers.
    bool isTrue = true;
    bool isFalse = false;
    printf("isTrue: %i\n", isTrue);
    printf("isFalse: %i\n", isFalse);

    printf("10 > 9: %d\n", 10 > 9);

    // if-else
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("old enough to vote\n");
    } else {
        printf("not old enough to vote");
    }

    int someNum = 10;

    if (someNum > 0) {
        printf("The value is a positive number.\n");
    } else if (someNum < 0) {
        printf("The value is a negative number.");
    } else {
        printf("The value is 0.");
    }

    // if-else shorthand
    // variable = (condition) ? expressionTrue : expressionFalse;

    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening");
//    if (time < 18) {
//        printf("Good day.");
//    } else {
//        printf("Good evening.");
//    }

    // Switch
    int day = 4;
    switch (day) {
        case 1:
            printf("case 1");
            break;
        case 4:
            printf("case 4");
            break;
        default:
            printf("no match");
    }

    // while loop
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    // do/while loop

    int j = 0;
    do {
        printf("%d\n", j);
        j++;
    } while (j < 5);

    // for loop
    int n;
    for (n = 0; n <= 10; n++) {
        printf("%d\n", n);
    }

    // nested loop
    for (i = 1; i <= 2; ++i) {
        printf("Outer: %d\n", i);  // Executes 2 times

        // Inner loop
        for (j = 1; j <= 3; ++j) {
            printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
        }
    }

    // break/continue
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (i == 9) {
            break;
        }
        printf("%d\n", i);
    }

    // break/continue in while loop
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }


    // arrays
    int myNums[] = {25, 50, 75, 100};
    printf("%d\n", myNums[1]);
    myNums[1] = 33;
    printf("%d\n", myNums[1]);

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNums[i]);
    }

    // multi-dimensional array
    int matrix[2][3] = {{1, 4, 2},
                        {3, 6, 8}};
    printf("matrix 0, 2 %d", matrix[0][2]);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }

    // strings
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);
    greetings[0] = 'J';
    printf("%s\n", greetings);

    char carBrand[] = "Mitsubishi";
    for (i = 0; i < strlen(carBrand); i++) {
        printf("%c\n", carBrand[i]);
    }

    char greetings2[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    // WE NEED THE `/0` AT THE END FOR THIS WAY, THIS IS THE "null terminating character".
    printf("%s\n", greetings2);

    // string concatenation
    char str1[20] = "HELLO "; // STR1 MUST BE LONG ENOUGH TO HOLD BOTH
    char str2[] = "WORLD!";

    strcat(str1, str2);
    printf("%s\n", str2);
    printf("%s\n", str1);

    char str3[20] = "Hello World!";
    char str4[20];

    strcpy(str4, str3);
    printf("%s\n", str4);

    // comparing strings
    char hello[] = "Hello";
    char hello2[] = "Hello";
    char hi[] = "Hi";
    printf("%d\n", strcmp(hello, hello2));  // Returns 0 (the strings are equal)
    printf("%d\n", strcmp(hello, hi));  // Returns -4 (the strings are not equal)

    // Demonstrate user input
   /* int inputNum;
    printf("Type a number: \n");
    scanf("%d", &inputNum);
    printf("Your number is: %d\n", inputNum);

    // We can also do multiple inputs.
    int newInputNum;
    char myChar;

    printf("Type a number and a character and press enter: \n");
    scanf("%d %c", &myNum, &myChar);
    printf("Your number is: %d\n", newInputNum);
    printf("Your character is: %c\n", myChar);

    // Taking string input
    char firstName[30]; // rememver to specify the size
    printf("Enter your first name: \n");
    scanf("%s", firstName);
    printf("Hello %s\n", firstName);

    // scanf has limitations. newline/space will be interpreted as EOF.
    // we need to use fgets() for reading lines.

    char fullName[30];
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s\n", fullName);*/

    return 0;
}
