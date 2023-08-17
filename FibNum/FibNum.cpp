#include <iostream>

struct Fib {

    int size;

    int *nums[100]{new int{size}};

    char sym;
};

int createFib(Fib &fib, int size, char sym) {
    
    fib.size = size;
    fib.sym = sym;

    int num_next = 1;
    int num1 = 0;
    int num2 = 1;
    
    for (int i = 0; i < size; i++) {
        


        num_next = num1 + num2;
        std::cout << fib.nums << '\n';
        //std::cout << num_next << '\n';
        num1 = num2;
        num2 = num_next;
    }
    return 0;
}

void drawFib(Fib fib, int limit) {
    for (int i = 0; i < limit; i++) {

    }
}

int main() {

    Fib fib;

    createFib(fib, 5, '*');
    //drawFib(fib, 70);
    return 0;
}


