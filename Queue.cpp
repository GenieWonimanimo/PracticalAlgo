#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0; // head는 가장 앞에 있는 원소의 인덱스, tail은 가장 뒤에 있는 원소의 인덱스 + 1

void push(int x) {
    dat[tail] = x;
    tail = (tail + 1) % MX;
}

void pop() {
    head = (head + 1) % MX;
}

int front() {
    return dat[head];
}

int back() {
    return dat[(tail == 0 ? MX - 1 : tail - 1)];
}

bool isEmpty() {
    return head == tail;
}

void test() {
    push(1);
    push(2);
    push(3);
    while (!isEmpty()) {
        cout << front() << " ";
        pop();
    }
}

int main(void) {
    test();
    return 0;
}