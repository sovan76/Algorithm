#include <stdio.h>

int n;
int arr[1000]; // assuming max size 1000

// Preorder traversal using array representation
void preorder(int i) {
    if (i >= n || arr[i] == -1) return;
    printf("%d ", arr[i]);
    preorder(2*i + 1); // left child
    preorder(2*i + 2); // right child
}

// Inorder traversal using array representation
void inorder(int i) {
    if (i >= n || arr[i] == -1) return;
    inorder(2*i + 1);
    printf("%d ", arr[i]);
    inorder(2*i + 2);
}

// Postorder traversal using array representation
void postorder(int i) {
    if (i >= n || arr[i] == -1) return;
    postorder(2*i + 1);
    postorder(2*i + 2);
    printf("%d ", arr[i]);
}

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Preorder: ");
    preorder(0);
    printf("\n");

    printf("Inorder: ");
    inorder(0);
    printf("\n");

    printf("Postorder: ");
    postorder(0);
    printf("\n");

    return 0;
}
