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

 
void solve()
{
	Node *head = new Node(13);
	insert(head, 84);
	insert(head, 27);
	insert(head, 22);
	insert(head, 55);
	insert(head, 74);
	
	// reverse(head);
	
	print(head);
	
}
 
int32_t main()
{
    solve();
    return 0;
}