#include <iostream>

struct Fib {

    int size;

    int *nums;

    char sym;
};

int createFib(Fib &fib, int size, char sym) {
    
    fib.size = size;
    fib.sym = sym;

    int num_next = 1;
    int num1 = 0;
    int num2 = 1;

    fib.nums = new int[100];
    
    for (int i = 0; i <= size; i++) {

        fib.nums[i] = num_next;
     
        num_next = num1 + num2;
        num1 = num2;
        num2 = num_next;

    }
    return 0;
}

void drawFib(Fib &fib, int limit) {

    if (fib.size < limit) {
        limit = fib.size;
    }

    for (int i = 0; i < limit; i++) {

        int* ptr = &fib.nums[i];

        std::cout << std::string(*ptr, '*') << *ptr << std::endl;

        *ptr = fib.nums[i + 1];
    }  
}

int main() {

    Fib fib;

    createFib(fib, 7, '*');
    drawFib(fib, 70);
    return 0;
}


