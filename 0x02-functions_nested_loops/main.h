#ifndef MAIN_H
#define MAIN_H
/*Write a program that prints _putchar, followed by a new line.*/
int _putchar(char c);

/* Write a function that prints the alphabet, in lowercase, followed by a new line.*/
void print_alphabet(void);

/* Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.*/
void print_alphabet_x10(void);

/* Write a function that checks for lowercase character. Prototype: int _islower(int c); Returns 1 if c is lowercase Returns 0 otherwise*/
int _islower(int c);

/* Write a function that checks for alphabetic character. Prototype: int _isalpha(int c); Returns 1 if c is a letter, lowercase or uppercase Returns 0 otherwise*/
int _isalpha(int c);

/*Write a function that prints the sign of a number. Prototype: int print_sign(int n); Returns 1 and prints + if n is greater than zero Returns 0 and prints 0 if n is zero Returns -1 and prints - if n is less than zero*/
int print_sign(int n);

/* Write a function that computes the absolute value of an integer. Prototype: int _abs(int); FYI: The standard library provides a similar function: abs. Run man abs to learn more.*/
int _abs(int);

#endif
