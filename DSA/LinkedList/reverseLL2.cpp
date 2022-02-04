// https://leetcode.com/problems/reverse-linked-list-ii/
#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vi              vector<int>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

struct Node {
	int data;
	struct Node* next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};

void insert(Node* &head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void print(Node* head) {
    if (head == NULL) {
        cout << "null";
        return;
    }

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
} 

int getLength(Node *head) {
    if(head == NULL)
        return 0;
    if(head ->next == NULL)
        return 1;
    
    int len = 0;
    while(head) {
        head = head->next;
        len++;
    }
    return len;
}

Node* reverseKGroup(Node* head, int start, int end) {

        if(head == NULL)
            return head;

        Node *cur = head;
        Node *next = NULL;
        Node *prev = NULL;
        Node *temp = head;
        Node *temp2 = NULL;
        int ct = start;

       	while(--start!= 0 && cur != NULL) {
            temp = cur;
       		cur = cur->next;
       	}

        temp2 = cur;

        // reverse first k half
        while(cur != NULL && ct <= end) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            ct++;
        }
        
        if(temp == temp2) {
            temp->next = cur;
            return prev;            
        }

        temp->next = prev;
        temp2->next = cur;

        return head;
            
    }

void solve()
{
	
	Node *head = new Node(1);
	insert(head, 2);
	insert(head, 3);
	insert(head, 4);
	insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    // insert(head, 8);
    // insert(head, 9);
    
    Node *temp = reverseKGroup(head, 1, 3);
    
    print(temp);
	
}
 
int32_t main()
{
    solve();
    return 0;
}