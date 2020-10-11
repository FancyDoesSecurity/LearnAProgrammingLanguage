/*
        C programming language write up
        made by: Discord=Fancy#4481 Allias=Fancy
        PS: this will not cover the ENTIRE language
        but it does cover A LOT of it making you at least
        decently Knowledgeable
my one take on pros and cons to c:
    PROS TO C:
        FASTEST PROGRAMMING LANGUAGE
        LOTS OF DOCUMENTATION AND TUTORIALS
        VERY USEFUL FOR APPLICATION PROGRAMMING
        MOST NETWORK SERVICES AND SUCH ARE BUILT IN C

    CONS TO C:
        HARD TO PICK UP
        HARD TO READ AT A HIGH LEVL
*/

#include <stdio.h>
// stdio.h = A standard C library for doing buffered input and output to the operating system.
// (The "standard" of standard I/O is at most marginally related to the "standard" of standard input and output.)
// In general, Perl relies on whatever implementation of standard I/O a given operating system supplies, so the
// buffering characteristics of a Perl program on one machine may not exactly match those on another machine.
//Normally this only influences efficiency, not semantics
#include <stdlib.h>
// stdlib.h = A standard library in computer programming is the library made available across
// implementations of a programming language. These libraries are conventionally described in
// programming language specifications; however, contents of a language's associated library may
// also be determined by more informal practices of a language's community.
#include <math.h>
// math.h = The math.h header defines various mathematical functions and one macro. All the
// functions available in this library take double as an argument and return double as the result.


int main() {
    data_types();
    printf_function();
    working_with_numberz();
    grabbing_user_input();
    fgets_function();
    new_line();
    functions();
    function_example("Fancy\n please read the source code!");
    return_statement();
    if_else_statements(10, 29);
    switch_statement();
    struct_statement();
    strcpy_statement();
    while_loops();
    for_loops();
    two_dimensional_arrays();
    memory_addresses();
    so_lets_talk_about_pointers();
    derefrencing_pointers_like_a_g();
    reading_and_writing_files();
    return 0;
}
void data_types() {
    // data types
    int integer = 40;
    double decimal = 40.50;
    float this_is_a_float = 49.22;
    char normal_string[] = "this is a string";
    double integers[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    const int this_is_a_constant = 5;
    char array[20] = "array";
    char another_array[6] ="array", word2[5]="hurray",word3[5]="cool_array";
    char statically_assign_a_value[20];

}

void printf_function() {
    // function: printf
    printf("this is printing text\n");
    // this %d holds the place of a variable sorta
    // and is able to take a place holder as seen it has 500
    printf("number: %d", 500);
    // this %s holds the place of a variable AGAIN
    // BUT it holds strings :)
    printf("string: %s", "stringz yuh");
}

void working_with_numberz() {
    // %f = floating point number. example: (double, float)
    // ps: sums the final value to a very exact number
    printf("%f", 88.7, "output: 88.700000");
    // mathz
    // addition
    printf("%f", 5.9 + 2.4);
    // division
    printf("%f", 5.9 / 2.4);
    // subtraction
    printf("%f", 5.9 - 2.4);
    // multiplication
    printf("%f", 5.9 * 2.4);
    // (if you want exact number)
    printf("%d", 888);
    // square root
    printf("%f", sqrt(24));
    // cube
    printf("%f", pow(24, 3));
    // ceiling (rounding the value given)
    printf("%f", ceil(2362342.234));
    // floor (rounds the value down)
    printf("%f", floor(23324.324));

}

void grabbing_user_input() {
    // user input getting an integer
    // declare the data type
    int integer;
    // declare the prompt
    printf("ENTER INT> ");
    // scanf = scanf format string refers to a control parameter used by a
    // class of functions in the string-processing libraries of various programming
    // languages. The format string specifies a method for reading a string into an
    // arbitrary number of varied data type parameter. The input string is by default
    // read from the standard input, but variants exist that read the input from other sources
    // PS: the & before the variable is called a pointer!
    scanf("%d", &integer);
    // return the input to the screen
    printf("return: ", integer);
    /*
        same thing would go for other taking input for
        other datatypes just change the %d according to
        the correct datatye
        -------------------
            DIFFERENT PLACE HOLDERS FOR USER INPUT:
                %d = whole number
                %lf = double
                %c = string
                %s = string of charachters
    */
}

void fgets_function() {
    /*
    fgets = The C library function char *fgets(char *str, int n,
    FILE *stream) reads a line from the specified stream and
    stores it into the string pointed to by str. It stops when
    either (n-1) characters are read, the newline character is
    read, or the end-of-file is reached, whichever comes first.
    SHORT: basically grabs a line of text
    example:
    */
    char example[30];
    printf("Enter > ");
    /* PS: stdin = The default input stream for your program,
    which if possible shouldn't care where its data is
    coming from. Represented within a Perl program by
    the filehandle STDIN. More at PerlDoc

    SHORT: standerd input

    fgets takes 3 values
    first: the variable
    second: the amount of value you want to take
    third: the type of input
    */
    fgets(example, 30, stdin);
    printf("return: ", example);
}

void new_line() {
    // its a silly little thing but you'd be suprised
    // at how much you use it! introducing: \n a new line charachter
    // whenever you input that into a string of text you get a new line!
    printf("Example: new line\nnewline");
}

void functions() {
    /*
    what is void? - void basically means it returns nothing ( also known as a return type)
    functions structure: void name(variables taken inside the function) {
        whatever is in these curly brakets gets executed ( basically the reason or code behind the fuction )
    }
    return type = functions can return any primitive data type
    different return types: 
                    char 	Smallest addressable unit of the machine that can contain basic character set. It is an integer type. Actual type can be either signed or unsigned. It contains CHAR_BIT bits. 	8 	%c
                    signed char 	Of the same size as char, but guaranteed to be signed. Capable of containing at least the [−127, +127] range. 	8 	%c (or %hhi for numerical output)
                    unsigned char 	Of the same size as char, but guaranteed to be unsigned. Contains at least the [0, 255] range. 	8 	%c (or %hhu for numerical output)
                    short
                    short int
                    signed short
                    signed short int 	Short signed integer type. Capable of containing at least the [−32,767, +32,767] range. 	16 	%hi or %hd
                    unsigned short
                    unsigned short int 	Short unsigned integer type. Contains at least the [0, 65,535] range. 	16 	%hu
                    int
                    signed
                    signed int 	Basic signed integer type. Capable of containing at least the [−32,767, +32,767] range. 	16 	%i or %d
                    unsigned
                    unsigned int 	Basic unsigned integer type. Contains at least the [0, 65,535] range. 	16 	%u
                    long
                    long int
                    signed long
                    signed long int 	Long signed integer type. Capable of containing at least the [−2,147,483,647, +2,147,483,647] range. 	32 	%li or %ld
                    unsigned long
                    unsigned long int 	Long unsigned integer type. Capable of containing at least the [0, 4,294,967,295] range. 	32 	%lu
                    long long
                    long long int
                    signed long long
                    signed long long int 	Long long signed integer type. Capable of containing at least the [−9,223,372,036,854,775,807, +9,223,372,036,854,775,807] range. Specified since the C99 version of the standard. 	64 	%lli or %lld
                    unsigned long long
                    unsigned long long int 	Long long unsigned integer type. Contains at least the [0, +18,446,744,073,709,551,615] range. Specified since the C99 version of the standard. 	64 	%llu
                    float 	Real floating-point type, usually referred to as a single-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 single-precision binary floating-point format (32 bits). This format is required by the optional Annex F "IEC 60559 floating-point arithmetic". 		Converting from text:

                        %f %F
                        %g %G
                        %e %E
                        %a %A

                    double 	Real floating-point type, usually referred to as a double-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 double-precision binary floating-point format (64 bits). This format is required by the optional Annex F "IEC 60559 floating-point arithmetic". 		

                        %lf %lF
                        %lg %lG
                        %le %lE
                        %la %lA

                    long double 	Real floating-point type, usually mapped to an extended precision floating-point number format. Actual properties unspecified. It can be either x86 extended-precision floating-point format (80 bits, but typically 96 bits or 128 bits in memory with padding bytes), the non-IEEE "double-double" (128 bits), IEEE 754 quadruple-precision floating-point format (128 bits), or the same as double. See the article on long double for details. 		%Lf %LF
                    %Lg %LG
                    %Le %LE
                    %La %LA
   
    CALLING FUNCTIONS: 
            int main() {
                function();
                return 0;
            }
            void function() {
                printf("function")'
            }

    */

}

void function_example(char my_name[]){
    printf("My Name Is: %s", my_name);
}

void return_statement() {
    /*
        the return statement returns a value
    exmaple:
        double really_ez_math(double value) {
        double sum = value * value ^ value - value / value + value;
        return sum;
    */
    return 0;
    }

void if_else_else_if_statements(int numberJuan, int numberDose) {
    /*
    if statements add Intelligents to our programs by allowing it to make decisions
    the following code is just for example and how to right if statements
    */
    // declaring the value
    int sum_of_both;
    // the if statement comparing both given values using the < statement
    if(numberDose < numberJuan) {
        sum_of_both = numberJuan;
    // else if is another if statement following the current if kinda like a
    // "hey also if (this) please do (this)"
    } else if(numberJuan <= numberDose){
        sum_of_both = numberDose;
    } else {
    // else does not need to compare anything so you dont need to give it any input
    // else is just the code to execute if the if is not true
        sum_of_both = numberDose;
    }
    return sum_of_both;
}

void switch_statement() {
    /*
    official: A switch statement allows a variable to be tested for 
    equality against a list of values. Each value is called a case, 
    and the variable being switched on is checked for each switch case.

    Fancy's Definition: legit an advanced if statement comparing one thing
    to a multitude of different things 
    */

    // declaring the value & variable
    char whatever = "AAABBBCCC";
    // switch statement
    switch(whatever) {
        // case is what the switch statement is comparing to
        case 'AAABBBCCC':
            // code to be executed on the correct case
            printf("switch statement hell yeah");
            // break takes you out of the looping switch statement
            break;
        case 'AABB':
            printf("this isnt getting executed lol");
        case 'not':
            printf("this also isnt getting executed");
        // default is an else statement but for the switch statement
        default:
            printf("hey thats not valid");
    }
}

void struct_statement() {
    /*
    official: A struct in the C programming language (and many derivatives) is a composite data type
     (or record) declaration that defines a physically grouped list of variables under one name in a 
     block of memory, allowing the different variables to be accessed via a single pointer or by the 
     struct declared name which returns the same address. The struct data type can contain other data 
     types so is used for mixed-data-type records such as a hard-drive directory entry (file length,
     name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).

    Fancy's one take: data structure to hold groups of data types
    */
    // example of a struct
    struct Fancy_example{
        char example[100];
        double yuh;
        int ok;
    };
}

void strcpy_statement() {
    /*
    offical: strcpy() is a standard library function in C/C++ and is used to copy one string to another. 
    In C it is present in string.h header file and in C++ it is present in cstring header file.

    Fancy's Bible states: bruh its used to copy a string
    */
    char jordan12 = "jordan 12's";
    strcpy(jordan12, "sheesh");
}

void while_loops() {
    /*
    Fancy's bible states that while loops are basically a statement with a given
    variable and while that variable is true it will loop through given code
    example:
    */

    // declaring variable and value
    int this_isa_loop = 100;
    // main while loop
    // EXAMPLE 1:
    while(this_isa_loop <= 2000) {
        // printing value
        printf("%d\n", this_isa_loop);
        // adding one to the variable each time it loops
        this_isa_loop = this_isa_loop + 1;
    }
    // EXAMPLE 2:
    int loopy_loop = 200;
    do {
        printf("%d\n", loopy_loop);
        loopy_loop = loopy_loop + 1;
    }
    while(loopy_loop <= 5000);
}

void for_loops() {
    /*
        A for loop is a repetition control structure that 
        allows you to efficiently write a loop that needs 
        to execute a specific number of times.
    */
    int a = 222;
    while(a <= 44444) {
        printf("&d\n", a);
        // a++ is just adding 1 to it each loop 
        a++;
    }
    int a;
    // condenced while loop basically ( the initial for loop )
    int we_compare[] = {2, 4, 5 ,6 ,7 ,8 , 77};
    for(a = 223333; a <= 3333333; a++) {
        printf("%d\n", we_compare[a]);
    }
}

void two_dimensional_arrays() {
    /*
    An array of arrays is known as 2D array. The two dimensional (2D) array in C programming is 
    also known as matrix. A matrix can be represented as a table of rows and columns.
    */

    // before making the 2d array you must specicy the number of elements and then
    // the number of elements in the array for example:
    int example[3][4] = {
        {1, 2, 3, 11},
        {4, 5, 6, 22},
        {7, 8, 9, 33}
    };
   /*
   this is how you use the 2d array:
        you have to specify the index spot (the column)
        and then you need to specify the element
   */
    printf("%d", example[0][3]);
}

void memory_addresses() {
    /*
    whats a memory address? -  In computing, a memory address is a reference to a specific memory location used 
    at various levels by software and hardware. Memory addresses are fixed-length sequences of digits 
    conventionally displayed and manipulated as unsigned integers. Such numerical semantic bases itself 
    upon features of CPU (such as the instruction pointer and incremental address registers), as well 
    upon use of the memory like an array endorsed by various programming languages.
    */

    // basically all im trying to say is you need to be aware of your variables 
    // because it's memory and also C has a lot of dangerous functions and statements
    // that can lead to different exploits like buffer overflow and integer overflow etc.
    // so it is good to know about how memory addressing works or atleast a simple understanding
    int wow = 300;
    double right = 4.55;
    char ok = "this is a string";
    printf("%d %f %s", (wow , right, ok));
    // printing the actual memory address:
    // %p stands for pointer which we will talk about a it soon
    // and you need to declare the & before the variable you want to grab dont
    // ask me why
    printf("%p", &ok);
}

void so_lets_talk_about_pointers() {
    /*
    pointers: Pointers in C are easy and fun to learn. Some C programming tasks are performed more easily with pointers, 
    and other tasks, such as dynamic memory allocation, cannot be performed without using pointers. So it becomes necessary 
    to learn pointers to become a perfect C programmer. Let's start learning them in simple and easy steps.
    As you know, every variable is a memory location and every memory location has its address defined which can 
    be accessed using ampersand (&) operator, which denotes an address in memory. 
    */
    // if you didnt wanna read that its basically a memory address
    // a poiner is pretty much just a type of data lol

    // variables!
    double for_example = 555.444;
    int another_example = 333;
    // converting variables to pointers!
    double * pFor_example = &for_example;
    int * pAnother_example = &another_example;
}

void derefrencing_pointers_like_a_g() {
    // variables
    double for_example = 555.444;
    int another_example = 333;
    // converting variables to pointers
    double * pFor_example = &for_example;
    int * pAnother_example = &another_example;
    printf("derefrenced pointer integer:%f \n derefrenced pointer double: %d \n", *pFor_example, *pAnother_example);
}

void reading_and_writing_files() {
    // FILE is creating the pointer to the physical file on the machine
    // we need to declare FILE before creating our file clearly.
    // if you want you can go read the man pages for fopen its really not to hard
    FILE * file_pointer = fopen("/home/user/Desktop/new_file.txt", "w");
    // fprintf is file printf which is just printing whatever into the file
    fprintf(file_pointer, "we out here writing to a file!!!");
    fclose(file_pointer);
    // i bet you can tell what fclose does thats right it closes the file!
    // we set the FILE * (variable) = fopen("name", "mode");
    // boom 
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /*
    ok now lets read from a file
    */
    char str[999];
    FILE * file;
    file = fopen("test.txt" , "r");
    if (file) {
        while (fscanf(file, "%s", str)!=EOF)
            printf("%s",str);
        fclose(file);
}
}
