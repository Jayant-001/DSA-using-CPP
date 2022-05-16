#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node *left;
		node *right;

	node(int d) {
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};
//					Creation of b-tree
node* buildTree() {
	cout << "Enter data to insert: " << endl;
	int d;
	cin >> d;

	if(d == -1)
		return NULL;

	node *root = new node(d);

	// insert to left
	cout << "Enter data to insert left of " << d <<endl;
	root->left = buildTree();

	// insert to right
	cout << "Enter datat to insert right of " << d << endl;
	root -> right = buildTree();

	return root;
}

//------------          build tree from level order 
void buildFromLevelORder(node* &root) {
	queue<node*> q;
	cout << "Enter root node: " << endl;
	int data;
	cin >> data;
	root = new node(data);
	q.push(root);
	while(!q.empty()) {
		node *temp = q.front();
		q.pop();
		
		cout << "Enter left node of " << temp->data << endl;
		int leftData;
		cin >> leftData;
		if(leftData != -1) {
			temp->left = new node(leftData);
			q.push(temp->left);
		}
		
		cout << "Enter right node of " << temp->data << endl;
		int rightData;
		cin >> rightData;
		if(rightData != -1) {
			temp->right = new node(rightData);
			q.push(temp->right);
		}
		
	}
}


//				B-Tree Traversal
void inOrder(node *root) {
	if(root == NULL)
		return;

	inOrder(root->left);
	cout << root-> data << " ";
	inOrder(root->right);
}

void preOrder(node *root) {
	if(root == NULL) return;

	cout << root->data <<  " ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(node *root) {
	if(root == NULL) return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data <<  " ";
}

void levelOrder(node *root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()) {
		if(q.front() == NULL) {
			cout << endl;
			q.pop();
			if(q.empty())
				return;
			q.push(NULL);
		}
		node *n = q.front();
		if(n->left != NULL)
			q.push(n->left);
		if(n->right != NULL)
			q.push(n->right);
		cout << n->data << " ";
		q.pop();
	}
}

//								Get Height of BT
int getHeight(node *root) {
	if(root == NULL) return 0;
	return max(getHeight(root->left), getHeight(root->right))+1;
}

//								Size of BT(number of nodes)
int sizeOfBT(node *root) {
	if(root == NULL) return 0;
	return sizeOfBT(root->left) + sizeOfBT(root->right)+1;
}

// 		  						Maximum number in BT
int getMaxBT(node *root) {
	if(root == NULL) return INT_MIN;
	return max(root->data, max(getMaxBT(root->left), getMaxBT(root->right)));
}

void countLeafNode(node *root, int &ct) {
	if(root == NULL) return;

	if(root->left == NULL && root->right == NULL) ct++;
	countLeafNode(root->left, ct);
	countLeafNode(root->right, ct);
}

pair<int, int> diameterOfBT(node *root) {
	if(root == NULL)
		return make_pair(0, 0);

	pair<int, int> left = diameterOfBT(root->left);
	pair<int, int> right = diameterOfBT(root->right);

	int op1 = left.first;
	int op2 = right.second;
	int op3 = left.second + right.second+1;
	pair<int, int> ans;

	ans.first = max(op1, max(op2, op3));
	ans.second = max(left.second, right.second)+1;
	return ans;

}

int main() {

	node* root = NULL;
	buildFromLevelORder(root);
	levelOrder(root);
	
	int ct = 0;
	countLeafNode(root, ct);
	cout << endl << "No of leaf node = " << ct << endl;
	
	cout << endl << "Diameter of BT= " << diameterOfBT(root).first << endl;

/*
	root = buildTree();

	cout << endl << "InOrder traversal " << endl;
	inOrder(root);

	cout << endl << "Preorder traversal " <<endl;
	preOrder(root);

	cout << endl << "PostOrder traversal " <<endl;
	postOrder(root);
	
	cout << endl << "LevelOrder traversal " <<endl;
	levelOrder(root);
	
	cout << endl;
	cout << "Height = " << getHeight(root) << endl;

	cout << "SIze of BT: " << sizeOfBT(root) << endl;
	
	cout << "Maximum in BT: " << getMaxBT(root) << endl;
*/	
	
	return 0;
}