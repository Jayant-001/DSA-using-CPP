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

Node* reverseKGroup(Node* head, int k) {
        
        if(head == NULL)
            return head;
        
        int len = getLength(head);
        
        if(len < k)
            return head;
        
        Node *cur = head;
        Node *next = NULL;
        Node *prev = NULL;
        int ct = 0;
        
        // reverse first k half
        while(cur != NULL && ct < k) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            ct++;
        }
        
        // reverse next half using recursion
        if(next != NULL)
            head->next = reverseKGroup(next, k);
        
        return prev;
            
    }
 
void solve()
{
	
	Node *head = new Node(4);
	insert(head, 5);
	insert(head, 9);
	insert(head, 83);
	insert(head, 23);
	// insert(head, 93);
    
    Node *temp = reverseKGroup(head, 3);
    
    print(temp);
	
}
 
int32_t main()
{
    solve();
    return 0;
}