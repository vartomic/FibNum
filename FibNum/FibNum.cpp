#include <iostream>

struct Fib {

    int size;

    int *nums;

    char sym;
};

Fib* fabricFib(int size, char sym) {
    Fib fib;
    fib.size = size;
    fib.nums = new int[fib.size];
    fib.sym = sym;
    return &fib;
}

int createFib(Fib &fib) {
    

    int num_next = 1;
    int num1 = 0;
    int num2 = 1;
    
    for (int i = 0; i <= fib.size; i++) {

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

    Fib* fib = fabricFib(7, '*');

    createFib(*fib);
    drawFib(*fib, 70);
    return 0;
}


