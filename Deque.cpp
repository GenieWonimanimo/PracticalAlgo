#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x) {
    dat[--head] = x;
}

void push_back(int x) {
    dat[tail++] = x;
}

void pop_front() {
    head++;
}

void pop_back() {
    tail--;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail - 1];
}

bool isEmpty() {
    return head == tail;
}

void test() {
    push_front(1);
    push_front(2);
    push_back(3);
    push_back(4);
    while (!isEmpty()) {
        cout << front() << " ";
        pop_front();
    }
    cout << "\n\n";
    
    push_front(1);
    push_front(2);
    push_back(3);
    push_back(4);
    while (!isEmpty()) {
        cout << back() << " ";
        pop_back();
    }
}

int main(void) {
    test();
    return 0;
}