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

// Recursive solution
void reverse2(Node* &head, Node *cur, Node *prev) {
    if(cur == NULL) {
        head = prev;
        return;
    }
    
    Node *forward = cur->next;
    reverse2(head, forward, cur);
    cur->next = prev;
}

// Iterative solution
void reverse(Node* &head) {
    
    if(head == NULL || head->next == NULL) {
        return;
    }

    Node *cur = head;
    Node *prev = NULL;
    Node *forward = NULL;
    
    while(cur) {
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
    }
    head = prev;
}
 
void solve()
{
	Node *head = new Node(4);
	insert(head, 5);
	insert(head, 9);
	insert(head, 83);
	insert(head, 23);
	insert(head, 93);
	insert(head, 73);
    
    // reverse(head);
    reverse2(head, head, NULL);
    
	print(head);
	
}
 
int32_t main()
{
    solve();
    return 0;
}