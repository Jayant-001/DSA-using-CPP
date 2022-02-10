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

// return starting node of cycle in a linked list in O(n) space
Node* detectLoop(Node *head) {
	if(head == NULL)
		return NULL;
	
	map<Node*, bool> visited;
	while(head != NULL) {
		if(visited[head] == true)
			return head;
		visited[head] = true;
		head = head->next;
	}
	return NULL;
}

// return true if there is a cycle present in given Linked List in O(1) space
bool floydCycle(Node *head) {
	if(head == NULL) return false;
	
	Node *slow = head;
	Node *fast = head;
	
	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast)
			return true;
	}
	return false;
}

// ------------------------------------------------optimised approach----------------------------------------------
// return starting node of cycle in given Linked List in O(1) space
Node* getStartingNode(Node *head) {
	if(head == NULL) return NULL;
	
	Node *slow = head;
	Node *fast = head;
	Node *t = NULL;
	
	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow) {
			t = slow;
			break;
		}
	}
	
	if(t == NULL) return NULL;
	
	Node *temp = head;
	while(temp != slow) {
		temp = temp->next;
		slow = slow->next;
	}
	
	return temp;
}

// remove loop from a Lined List------------------------------------
void removeLoop(Node* &head) {
	if(head == NULL) return;
	
	Node *loop = head;
	while(head->next != loop) {
		head = head->next;
	}
	head -> next = NULL;
}

void solve()
{
	
	Node *head = new Node(1);
	insert(head, 2);
	insert(head, 3);
	insert(head, 4);
	insert(head, 5);
	
	Node *temp;
	Node *cur = head;
	
	while(cur) {
		temp = cur;
		cur = cur->next;
	}
	
	// creating a cycle at second node
	temp->next = head->next;
	
	cout << "Cycle present?: " << floydCycle(head) << endl;
	
	Node *t = getStartingNode(head);
	// Node *t = detectLoop(head);
	if(t == NULL)
		cout << "No Cycle";
	else
		cout << "Cycle at node: " << t->data << endl;
	
	// removeLoop(t);
	cout << "Cycle present?: " << floydCycle(head) << endl;
	// while(head) {
	// 	cout << head->data << endl;
	// 	head = head->next;
	// }
	
}

int32_t main()
{
    solve();
    return 0;
}