using namespace std;
#include <iostream>

typedef struct node
{
	node *left;
	node *right;
	int data;
} Node;

Node *btree(int a[], int low, int high)
{
	if(low > high) return NULL;
	int mid = (low + high) /2;
	Node *nd = new Node;
	nd->data = a[mid];
	nd->left = btree(a, low, mid-1);
	nd->right = btree(a, mid+1, high);
	return nd;
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int size = sizeof(a)/sizeof(int);
	Node *edge = btree(a, 0, size-1);

	return 0;
}
