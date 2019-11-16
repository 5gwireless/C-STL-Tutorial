// Class Templates Like function templates, class templates are useful when a class defines something that is independent of the data type. Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.

#include <iostream> 
using namespace std; 

template <typename T> 
class Array { 
private: 
	T *ptr; 
	int size; 
public: 
	Array(T arr[], int s); 
	void print(); 
}; 

template <typename T> 
Array<T>::Array(T arr[], int s) { 
	ptr = new T[s]; 
	size = s; 
	for(int i = 0; i < size; i++) 
		ptr[i] = arr[i]; 
} 

template <typename T> 
void Array<T>::print() { 
	for (int i = 0; i < size; i++) 
		cout<<" "<<*(ptr + i); 
	cout<<endl; 
} 

int main() { 
	int arr[5] = {1, 2, 3, 4, 5}; 
	Array<int> a(arr, 5); 
	a.print(); 
	return 0; 
} 


//================================================================
// Can there be more than one arguments to templates?
// Yes, like normal parameters, we can pass more than one data types as arguments to templates. The following example demonstrates the same.

#include<iostream> 
using namespace std; 

template<class T, class U> 
class A { 
	T x; 
	U y; 
public: 
	A() { cout<<"Constructor Called"<<endl; } 
}; 

int main() { 
A<char, char> a; 
A<int, double> b; 
return 0; 
} 
//=================================================================
// What is the difference between function overloading and templates?
// Both function overloading and templates are examples of polymorphism feature of OOP. Function overloading is used when multiple functions do similar operations, templates are used when multiple functions do identical operations.