#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) {
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    int n, original, digit;
    
    cout << "Enter a number: ";
    cin >> n;

    original = n;

    Stack s;

   
    while (n > 0) {
        digit = n % 10;
        s.push(digit);
        n = n / 10;
    }

    n = original;

   
    while (n > 0) {
        digit = n % 10;

        if (digit != s.pop()) {
            cout << "Not a Palindrome";
            return 0;
        }

        n = n / 10;
    }

    cout << "Palindrome";

    return 0;
}