#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void Insert(int addr, int num){ // addr 번지 뒤에 num을 추가
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void Erase(int addr){ // addr 번지의 원소를 제거
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void Traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void Insert_test(){
  cout << "****** insert_test *****\n";
  Insert(0, 10); // 10(address=1)
  Traverse();
  Insert(0, 30); // 30(address=2) 10
  Traverse();
  Insert(2, 40); // 30 40(address=3) 10
  Traverse();
  Insert(1, 20); // 30 40 10 20(address=4)
  Traverse();
  Insert(4, 70); // 30 40 10 20 70(address=5)
  Traverse();
}

void Erase_test(){
  cout << "****** erase_test *****\n";
  Erase(1); // 30 40 20 70
  Traverse();
  Erase(2); // 40 20 70
  Traverse();
  Erase(4); // 40 70
  Traverse();
  Erase(5); // 40
  Traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  Insert_test();
  Erase_test();
}