#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
    pos--;
}

int top() {
    return dat[pos - 1];
}

bool isEmpty() {
    return pos == 0;
}

bool isFull() {
    return pos == MX;
}

void stack_test() {
    push(1);
    push(2);
    push(3);
    while (!isEmpty()) {
        cout << top() << " ";
        pop();
    }
}

int main(void) {
    stack_test();
    return 0;
}