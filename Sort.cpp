// Sorting is one of the most basic functions applied to data. It means arranging the data in a particular fashion, which can be increasing or decreasing. There is a builtin function in C++ STL by the name of sort().
//Internally this function is implemented as Quick-sort. The complexity of it is O(N*log(N)).



#include <algorithm> 
  
using namespace std; 
  
void show(int a[]) 
{ 
    for(int i = 0; i < 10; ++i) 
        cout << a[i] << " "; 
} 
  
int main() 
{ 
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    cout << "\n The array before sorting is : "; 
    show(a); 
  
    sort(a, a+10); 
  
    cout << "\n\n The array after sorting is : "; 
    show(a); 
  
    return 0; 
  
} 