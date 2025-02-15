#include <stdio.h>

// adding a function prototype to inform the main function about the type of datatypes() function
void datatypes();
void variables_initializatin();
void precision();
void multi_decleration();
void un_initialized();

void main(){

    /* function call*/
    // datatypes();
    variables_initializatin();
    precision();
    multi_decleration();
    un_initialized();
}

void datatypes(){

    char c;
    int i; 
    float f;
    double d;

    /* inputs */
    printf("Input a Character : ");
    scanf("%c", &c);

    printf("Input an Integer : ");
    scanf("%d", &i);

    printf("Input a Float : ");
    scanf("%f", &f);

    printf("Input a Double : ");
    scanf("%lg", &d);

    /* outputs */
    printf("The Character is : %c\n", c);
    printf("The Integer is : %d\n", i);
    printf("Single-Precision : %f\n", f);
    printf("Double-Precisoin : %lg\n", d);
}

void variables_initializatin(){

    char starts_with = 'X';
    int age = 24;
    double longitude = 47.93847349;

    printf("%c\n%d\n%lg\n", starts_with, age, longitude);
}

void precision(){
    float radius = 0.25;
    double area = 1.0e6;

    printf("%f\n%f\n", radius,  area);
}

void multi_decleration(){

    char a,b,c,d,e;
    
    a = 'H';
    b = 'e';
    c = 'l';
    d = 'o';
    e = '\n';

    printf("%c%c%c%c%c%c",a,b,c,c,d,e);
}

void un_initialized(){

    char c; 
    int i;
    double d;
    float f;

    printf("character : %c\nint : %d\ndouble : %f\nfloat : %f\n", c,i,d,f);
}