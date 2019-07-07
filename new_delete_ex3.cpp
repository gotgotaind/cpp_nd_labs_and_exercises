#include <iostream>
using namespace std;

/*
Create class called binary_tree
Create structure called node
Declare 4 attributes in structure: integer data, two pointers to the same type of structure,called left and right
Declare main pointer to structure node type called root
This pointer is attribute of class binary_tree
This pointer is going to containt all data related to binary tree trought connectin nodes
Declare two methods called add and search

Add needs to have logic which will be dependant from data attribute and check for its place of creation on left or right side
Search needs to be implemented as recursive function
Check for nullptr in search and call it again on fulfilled condition(< or >)
First function doesn't have return type

Second function indicates its success by sending boolean values
Both class methods are wrappers for two private class method which are going to be implemented recursively for easier usage.
Private functions are using another input parameter -> node pointer
This is designed like this for passage of pointers ( left, right)
Declare two constructors and destructors
One of the constructor - destructor pair is going to be part of node structure
Second pair is going to be of class
Constructors in structure is used to declare new node (Pointers are NULL, data is set)
Constructor in class is esentially wrapper for stucture constructor
Structure destructor deletes left and right pointers
Class destructor deletes root pointer
Test everything in main
 */
        struct node {
            int data;
            node * left;
            node * right;
            node(int _data,node * _left, node * _right): data(_data),left(_left),right(_right){}
            ~node() {
                if( left ) { delete left; }
                if( right ) { delete right; }
            } 
        };

class binary_tree {
    public:

        node *root;
        void add();
        void search();
        void add(int value, node * node) {
            cout << "in add(value, node) " << value << "\t" << node << "\n";
            if( value > node->data)
            {
                cout << "adding right\n";
                cout << "node->right is " << node->right <<"\n";
                //cout << "node->right is " << node->right->data << "\t" << node->right <<"\n";
                if ( node->right == nullptr ) {
                    cout << "just setting right node to a new node\n";
                    node->right=new struct node(value,nullptr,nullptr);
                }
                else {
                    cout << "calling add again\n";
                    add(value,node->right);    
                }
            }
            else
            {
                cout << "adding left\n";
                if ( node->left == nullptr )
                    node->left=new struct  node(value,nullptr,nullptr);
                else
                    add(value,node->left);   
            }
            cout << "out add(value, node) " << "value" << "\t" << node << "\n";
        }
        void add(int value)
        {
            cout << "in add(value) "  << value << "\n";
            add(value,root);
            cout << "out add(value)\n";
        }
        bool search(int value,node * node)
        {
            if ( value == node->data )
                return true;
            else
            {
                if ( value > node->data )
                    if ( node->right == nullptr )
                        return false;
                    else
                        search(value,node->right);
                else
                    if ( node->left == nullptr)
                        return false;
                    else
                        search(value,node->left);       
            }   
        }
        bool search(int value)
        {
            return search(value,root);
        }

        binary_tree(int value) {
            cout << "In binary_tree(value)\n";
            root = new node(value,nullptr,nullptr); 
        }
        ~binary_tree() {
            cout << "In ~binary_tree()\n";
            delete binary_tree::root;
        }
        
};

int main() {
    cout << "Starting!\n"; 
    cout << "Initializing  bt to 5\n";
    binary_tree bt(5);
    cout << "Initialized bt\n";
    cout << "bt right is " << bt.root->right << "\n";
    bt.add(3);
    cout << "added 3\n";
    bt.add(5);
    cout << bt.search(3) << "\n";
    cout << bt.search(4) << "\n"; 
    bt.add(4);
    cout << bt.search(4) << "\n"; 
    cout << "Finished\n";
}