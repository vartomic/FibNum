#include <iostream>

struct Fib {

    //size of array
    int size;

    //pointer to array
    int *nums;

    //symbol to print
    char sym;
};

Fib* createFib(Fib* fib, int size, char sym) {

    fib->size = size;
    fib->nums = new int[size];
    fib->sym = sym;

    //first number
    int num_next = 1;

    //second number
    int num1 = 0;

    //third number
    int num2 = 1;

    //loop continues while number of items in array < size of array
    for (int i = 0; i <= fib->size; i++) {

        //first item of array = 1
        fib->nums[i] = num_next;

        // next item of array is sum of next 2 numbers
        num_next = num1 + num2;

        num1 = num2;
        num2 = num_next;

    }
    return fib;
}

Fib* fabricFib(int size, char sym) {

    //allocate memory for fib
    Fib* fib = new Fib[size];
    
    //fills fib
    createFib(fib, size, sym);

    return fib;
}

void drawFib(Fib *fib, int limit) {
    //if size of array lesser than limit, limit changes to equal to size of array
    if (fib->size < limit) {
        limit = fib->size;
    }
    //loop continues while number of items in array < limit
    for (int i = 0; i < limit; i++) {

        //pointer to array
        //int* ptr = &fib->nums[i];

        //prints '*' symbol as many times as current number in array[i] 
        std::cout << std::string(fib->nums[i], '*') << fib->nums[i] << std::endl;

        //pointer moves left on 1 position
        fib->nums[i + 1];
    }  
}

int main() {

    Fib* fib = fabricFib(7, '*');

    drawFib(fib, 70);

    return 0;
}


