#include <bits/stdc++.h>
using namespace std;

#define N 5
int arr[N];
int rear = -1;
int front = -1;

// ----------------------------------------------------------LENGTH------------------------------------------------------
void length() {
    int len = 1;
    int i = front;
    while(i != rear) {
        len++;
        i = (i+1) % N;
    }
    cout << "Length : " << len << endl;
}

// ----------------------------------------------------------ENQUEUE------------------------------------------------------
void enqueue(int data) {
    if((rear+1)%N == front) {
        cout << "Overflow Condition" << endl;
    }
    else if(rear == -1){
        rear = front = 0;
        arr[rear] = data;
    }
    else {
        rear = (rear+1) % N;
        arr[rear] = data;
    }
}

// ----------------------------------------------------------DENQUEUE------------------------------------------------------
void dequeue() {
    if(front == -1)
        cout << "Underflow Condition" << endl;
    else if(front == rear) {
        front = rear = -1;
    }
    else {
        front = (front+1) % N;
    }
}

// ----------------------------------------------------------PEEK------------------------------------------------------
void peek() {
    if(front == -1)
        cout << "Queue is empty" << endl;
    else 
        cout << arr[front];
}

// ----------------------------------------------------------DISPLAY------------------------------------------------------
void display() {
    if(front == -1)
        cout << "Queue is empty" << endl;
    else {
        int i = front;
        while(i != rear){
            cout << arr[i] << " ";
            i = (i+1) % N;
        }
        cout << arr[rear] << endl;
    }
}

int main() {

    enqueue(23);
    dequeue();
    enqueue(59);
    length();
    enqueue(9);
    enqueue(8);
    enqueue(8);
    enqueue(4);
    enqueue(48);
    length();

    cout << "Front : " << arr[front];
    cout << "Rear : " << arr[rear];
    cout << endl;

    display();
    return 0;
}