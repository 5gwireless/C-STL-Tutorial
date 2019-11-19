// hash class in C++ STL

// The hash class is default constructible, which means that one can construct this object without any arguments or initialization values.
// It is used to get the hash value of the argument that is being passed to it. If the argument doesn’t change, the value doesn’t change either.

#include <bitset> 

// functional header 
// for hash<class template> class 
#include <functional> 

#include <iostream> 
#include <string> 
#include <vector> 

using namespace std; 

// To demonstrate String Hashing 
void stringHashing() 
{ 

	// Get the string 
	// to get its hash value 
	string hashing1 = "Geeks"; 

	// Instatiation of Object 
	hash<string> mystdhash; 

	// Using operator() to get hash value 
	cout << "String hash values: "
		<< mystdhash(hashing1) 
		<< endl; 
} 

// To demonstrate BITSET Hashing 
void bitsetHashing() 
{ 

	// Get the BITSET 
	// to get its hash value 
	bitset<5> h_bitset("10101"); 

	// Instatiation of Object 
	hash<bitset<5> > hash_bitset; 

	// Using operator() to get hash value 
	cout << "\nBitset 10101 hash value: "
		<< hash_bitset(h_bitset) << endl; 
} 

// To demonstrate Vector<bool> Hashing 
void vectorHashing() 
{ 

	// Get the Vector<bool> 
	// to get its hash value 
	vector<bool> 
		h_vecbool{ true, false, 
				true, false }; 

	// Instatiation of Object 
	hash<vector<bool> > hash_vector_bool; 

	// Using operator() to get hash value 
	cout << "\nVector<bool> hash value: "
		<< hash_vector_bool(h_vecbool) 
		<< endl; 
} 

// To demonstrate Char Hashing 
void charHashing() 
{ 

	// Get the char 
	// to get its hash value 
	char ch = 'a'; 

	// Instatiation of Object 
	hash<char> hash_char; 

	// Using operator() to get hash value 
	cout << "\nChar hash values: "
		<< hash_char(ch) 
		<< endl; 
} 

// Driver Code 
int main() 
{ 

	stringHashing(); 
	bitsetHashing(); 
	vectorHashing(); 
	charHashing(); 
} 

//Output:
//String hash values: 4457761756728957899
//Bitset 10101 hash value: 17123654466142159564
//Vector hash value: 16935082123893034051
//Char hash values: 97