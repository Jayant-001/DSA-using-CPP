#include <bits/stdc++.h>
using namespace std;

#define N 10
int arr[N];
int rear = -1;
int front = -1;

void length() {
    cout << "Lenght: " << rear+1 << endl;
}

void peek() {
    cout << "Top: " << arr[front] << endl;
}

void enqueue(int data) {
    if(rear == N-1) {
        cout << "Overflow condition" << endl;
    }
    else if(rear == -1) {
        rear++;
        front++;
        arr[rear] = data;
    }
    else {
        rear++;
        arr[rear] = data;
    }
}

void dequeue() {
    if(front == -1) {
        cout << "Underflow condition" << endl;
        return;
    }
    else if(rear == front) {
        rear = -1;
        front = -1;
    }
    else 
        front++;
}

void display() {
    if(front == -1) {
        cout << "List is empty" << endl;
        return;
    }
    for(int i = front; i <= rear; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main() {

    enqueue(23);
    enqueue(48);
    enqueue(78);
    dequeue();
    enqueue(85);
    enqueue(481);
    display();
    dequeue();

    peek();


    length();

}