//A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:

//Max-Heap: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.
//Min-Heap: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.




//A full binary tree (sometimes proper binary tree or 2-tree) is a tree in which every node other than the leaves has two children.
//A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.

// Heap data structure can be implemented in a range using STL which allows faster input into heap and retrieval of a number always results in the largest number i.e. largest number of the remaining numbers is popped out each time.



//1. make_heap() :- This function is used to convert a range in a container to a heap.
//2. front() :- This function displays the first element of heap which is the maximum number.


// C++ code to demonstrate the working of 
// make_heap(), front() 
#include<iostream> 
#include<algorithm> // for heap operations 
using namespace std; 
int main() 
{ 
	
	// Initializing a vector 
	vector<int> v1 = {20, 30, 40, 25, 15}; 
	
	// Converting vector into a heap 
	// using make_heap() 
	make_heap(v1.begin(), v1.end()); 
	
	// Displaying the maximum element of heap 
	// using front() 
	cout << "The maximum element of heap is : "; 
	cout << v1.front() << endl; 
	
	return 0; 
} 


// Output:
//The maximum element of heap is : 40

//===========================================================

//3. push_heap() :- This function is used to insert elements into heap. The size of the heap is increased by 1. New element is placed appropriately in the heap.
//4. pop_heap() :- This function is used to delete the maximum element of the heap. The size of heap is decreased by 1. The heap elements are reorganised accordingly after this operation.

// C++ code to demonstrate the working of 
// push_heap() and pop_heap() 
#include<iostream> 
#include<algorithm> // for heap operations 
using namespace std; 
int main() 
{ 
	
	// Initializing a vector 
	vector<int> v1 = {20, 30, 40, 25, 15}; 
	
	// Converting vector into a heap 
	// using make_heap() 
	make_heap(v1.begin(), v1.end()); 
	
	// Displaying the maximum element of heap 
	// using front() 
	cout << "The maximum element of heap is : "; 
	cout << v1.front() << endl; 
	
	// using push_back() to enter element 
	// in vector 
	v1.push_back(50); 
	
	// using push_heap() to reorder elements 
	push_heap(v1.begin(), v1.end()); 
	
	// Displaying the maximum element of heap 
	// using front() 
	cout << "The maximum element of heap after push is : "; 
	cout << v1.front() << endl; 
	
	// using pop_heap() to delete maximum element 
	pop_heap(v1.begin(), v1.end()); 
	v1.pop_back(); 
	
	// Displaying the maximum element of heap 
	// using front() 
	cout << "The maximum element of heap after pop is : "; 
	cout << v1.front() << endl; 
	
	return 0; 
} 

// The maximum element of heap is : 40
//The maximum element of heap after push is : 50
//The maximum element of heap after pop is : 40
//=========================================================

// 5. sort_heap() :- This function is used to sort the heap. After this operation, the container is no longer a heap.

// C++ code to demonstrate the working of 
// sort_heap() 
#include<iostream> 
#include<algorithm> // for heap operations 
using namespace std; 
int main() 
{ 
	
	// Initializing a vector 
	vector<int> v1 = {20, 30, 40, 25, 15}; 
	
	// Converting vector into a heap 
	// using make_heap() 
	make_heap(v1.begin(), v1.end()); 
	
	// Displaying heap elements 
	cout << "The heap elements are : "; 
	for (int &x : v1) 
	cout << x << " "; 
	cout << endl; 
	
	// sorting heap using sort_heap() 
	sort_heap(v1.begin(), v1.end()); 
	
	// Displaying heap elements 
	cout << "The heap elements after sorting are : "; 
	for (int &x : v1) 
	cout << x << " "; 
	
	return 0; 
} 
//The heap elements are : 40 30 20 25 15 
//The heap elements after sorting are : 15 20 25 30 40
//======================================================

//6. is_heap() :- This function is used to check whether the container is heap or not. Generally, in most implementations, the reverse sorted container is considered as heap
// 6. is_heap_until() :- This function returns the iterator to the position till the container is the heap. 

// C++ code to demonstrate the working of 
// is_heap() and is_heap_until() 
#include<iostream> 
#include<algorithm> // for heap operations 
using namespace std; 
int main() 
{ 
	
	// Initializing a vector 
	vector<int> v1 = {40, 30, 25, 35, 15}; 
	
	// Declaring heap iterator 
	vector<int>::iterator it1; 
	
	// Checking if container is heap 
	// using is_heap() 
	is_heap(v1.begin(), v1.end())? 
	cout << "The container is heap ": 
	cout << "The container is not heap"; 
	cout << endl; 
	
	// using is_heap_until() to check position 
	// till which container is heap 
	auto it = is_heap_until(v1.begin(), v1.end()); 
	
	// Displaying heap range elements 
	cout << "The heap elements in container are : "; 
	for (it1=v1.begin(); it1!=it; it1++) 
	cout << *it1 << " "; 
	
	return 0; 
} 

// The container is not heap
//The heap elements in container are : 40 30 25 