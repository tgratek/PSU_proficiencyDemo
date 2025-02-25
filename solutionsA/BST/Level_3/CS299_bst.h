#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;   //some questions use char * data;
    node * left;
    node * right;
};

class table
{
    public:
    	//These functions are supplied already
    	table();			//supplied
    	~table();			//supplied
        void build(); 		//supplied
        void display(); 	//supplied


/* ************** PLACE YOUR PROTOTYPE HERE ***************** */
        int findMax();

		// remove the largest item from a BST
		// return the value of the largest item removed
        int remove_largest();

		// display every data item smaller than the root’s data
		// return the number of times displayed
        int display_smaller_root();

		// count the number of nodes larger than the smallest item
		// in a BST and return the count

		// remove every leaf, unless it is the same as the root’s data
		// return the number of items removed.

		// create a new BST with a copy of all of the data divisible by 3
		// minimize traversal and return the number of items copied.
        int copy_div_two(node *&);

 
 
 	private:
 		node * root;
                
        int remove_largest(node *&, node *&);
        int findMax(int & num, node * ruut);
        void remove_node(node*&, node *&);//ONLY FOR USE w/ rmv_lrg!
        void display_smaller_root(int, int &, node *&);
        void copy_div(int & count, node * ruut, node *& cpy);
};


void dealocate_nodes(node *& root);
void display_nodes(node * root);
void add_node(int num, node *& root);
