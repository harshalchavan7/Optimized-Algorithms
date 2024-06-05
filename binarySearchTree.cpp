#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree
{
    private:
        Node* root;
        
        void insert(Node*& node, int value)
        {
            if(node == nullptr) node = new Node(value);
            else if(value < node->data) insert(node->left, value);
            else insert(node->right, value);
        }

        bool search(Node* node, int value)
        {
            if (node == nullptr) return false;
            else if (value == node->data) return true;
            else if (value < node->data) return search(node->left, value);
            else return search(node->right, value);
        }

        Node* findMin(Node* node)
        {
            while (node->left != nullptr) node = node->left;
            return node;
        }

        Node* remove(Node* node, int value)
        {
            if (node == nullptr) return node;
            if (value < node->data) node->left = remove(node->left, value);
            else if (value > node->data) node->right = remove(node->right, value);
            else
            {
                // Node with only one child or no child
                if (node->left == nullptr)
                {
                    Node* temp = node->right;
                    delete node;
                    return temp;
                }
                else if (node->right == nullptr)
                {
                    Node* temp = node->left;
                    delete node;
                    return temp;
                }
                // Node with two children
                Node* temp = findMin(node->right);
                node->data = temp->data;
                node->right = remove(node->right, temp->data);
            }
            return node;
        }

        void inorder(Node* node)
        {
            if (node != nullptr)
            {
                inorder(node->left);
                cout << node->data << " ";
                inorder(node->right);
            }
        }

        void preorder(Node* node)
        {
            if (node != nullptr)
            {
                cout << node->data << " ";
                preorder(node->left);
                preorder(node->right);
            }
        }

        void postorder(Node* node)
        {
            if (node != nullptr)
            {
                postorder(node->left);
                postorder(node->right);
                cout << node->data << " ";
            }
        }

    public:
        BinarySearchTree() : root(nullptr) {}
        void insert(int value)
        {
            insert(root, value);
        }

        bool search(int value)
        {
            return search(root, value);
        }

        void remove(int value)
        {
            root = remove(root, value);
        }

        void inorder()
        {
            inorder(root);
            cout << endl;
        }

        void preorder()
        {
            preorder(root);
            cout << endl;
        }

        void postorder()
        {
            postorder(root);
            cout << endl;
        }
};

int main() {
    BinarySearchTree bst;
    int choice, value;
    
    do
    {
        cout << "\nBinary Search Tree Menu\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. In-order Traversal\n";
        cout << "5. Pre-order Traversal\n";
        cout << "6. Post-order Traversal\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                bst.insert(value);
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                if (bst.search(value)) cout << "Value found in the tree.\n";
                else cout << "Value not found in the tree.\n";
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                bst.remove(value);
                break;
            case 4:
                cout << "In-order Traversal: ";
                bst.inorder();
                break;
            case 5:
                cout << "Pre-order Traversal: ";
                bst.preorder();
                break;
            case 6:
                cout << "Post-order Traversal: ";
                bst.postorder();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
