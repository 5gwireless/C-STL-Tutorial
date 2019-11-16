// Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values.


#include <iterator> 
#include <map> 
  
using namespace std; 
  
int main() 
{ 
  
    // empty map container 
    map<int, int> gquiz1; 
  
    // insert elements in random order 
    gquiz1.insert(pair<int, int>(1, 40)); 
    gquiz1.insert(pair<int, int>(2, 30)); 
    gquiz1.insert(pair<int, int>(3, 60)); 
    gquiz1.insert(pair<int, int>(4, 20)); 
    gquiz1.insert(pair<int, int>(5, 50)); 
    gquiz1.insert(pair<int, int>(6, 50)); 
    gquiz1.insert(pair<int, int>(7, 10)); 
  
    // printing map gquiz1 
    map<int, int>::iterator itr; 
    cout << "\nThe map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // assigning the elements from gquiz1 to gquiz2 
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end()); 
  
    // print all elements of the map gquiz2 
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // remove all elements up to 
    // element with key=3 in gquiz2 
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    // remove all elements with key = 4 
    int num; 
    num = gquiz2.erase(4); 
    cout << "\ngquiz2.erase(4) : "; 
    cout << num << " removed \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    cout << endl; 
  
    // lower bound and upper bound for map gquiz1 key = 5 
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = "; 
    cout << gquiz1.lower_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << gquiz1.lower_bound(5)->second << endl; 
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = "; 
    cout << gquiz1.upper_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << gquiz1.upper_bound(5)->second << endl; 
  
    return 0; 


//======================================================================

// CPP program to illustrate 
// Implementation of clear() function 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Take any two maps 
    map<int, string> map1, map2; 
      
    // Inserting values 
    map1[1] = "India"; 
    map1[2] = "Nepal"; 
    map1[3] = "Sri Lanka"; 
    map1[4] = "Myanmar"; 
      
    // Print the size of map 
    cout<< "Map size before running function: \n"; 
    cout << "map1 size = " << map1.size() << endl; 
    cout << "map2 size = " << map2.size() << endl;; 
      
    // Deleting the map elements 
    map1.clear(); 
    map2.clear(); 
      
    // Print the size of map 
    cout<< "Map size after running function: \n"; 
    cout << "map1 size = " << map1.size() << endl; 
    cout << "map2 size = " << map2.size(); 
    return 0; 
} 