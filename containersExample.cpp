/* Here we decribe application of C++ containers including
   map, stack, deque, list, vector, array, set 
*/   
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <array>
#include <set>
#include <deque>

using namespace std;


void ittMap(map<char, int> &mmap){
   for (map<char,int>::iterator it=mmap.begin(); it!=mmap.end(); ++it)
    cout << it->first << " => " << it->second << '\n';
}


int main ()
{
// Working with map container	
  map<char,int> mymap ={

  {'A',100},
  {'B',200},
  {'C',300 }};

  char sc = 'b';
  map<char,int>::iterator it =mymap.find(sc);

  for (auto& x: mymap) {
  if (it != mymap.end())
    cout << mymap.at(x.first) <<  x.second << endl;
  }
 // Working with set container
  set<int> myset; 
  set<int>::iterator it2;
  myset.insert(0);
  it2 = myset.begin();
  for (int i = 1; i <= 4; i++) {
  	myset.insert(i*5);
  	++it2;
  	cout <<i <<"element"<< *it2 <<endl;
  }
 // Working with deque container

  deque<int> mydeque(5);

  for (int i = 0; i < 5; i++) mydeque.push_front(i);
  cout << "My deque container:" << endl;
  for (int i = 0; i < mydeque.size(); i++)
  	cout <<"Element" <<i << mydeque.at(i) << endl;
 // Working with array container
   

 // Working with vector container 

 
  list<int> mylist;
  list<int>::iterator it;

  // set some initial values:
  for (int i=1; i<=5; ++i) mylist.push_back(i); // 1 2 3 4 5

  it = mylist.begin();
  it++;       // it points to number 2           ^

  mylist.insert (it,10);                        // 1 10 2 3 4 5

  // "it" still points to number 2                      ^
  mylist.insert (it,2,20);                      // 1 10 20 20 2 3 4 5

  --it;       // it points now to the second 20               ^
                                                 // 1 10 20 20 2 3 4 5
                                                 //      ^
  
  cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it)
    cout << ' ' << *it;
    cout << '\n'; 

   // working with vector
  vector<int> myvector;
  vector<int>::iterator it; 
  int i;

  // allocate an array with space for 12 elements using vector's allocator:
  int * p;
  p = myvector.get_allocator().allocate(10);

  // construct values in-place on the array:
  for (int i=0; i<10; i++) 
  	myvector.push_back(i);

  myvector.push_back(1);
  myvector.push_back(2);

  int sizevec = myvector.size();

  cout << "Vector initial:";
  
  for (it = myvector.begin(); it!=myvector.end(); ++it)
    cout <<"  "<< *it;
    

  int val;
  cout << endl; 
  vector<int> sortvector, newvector(sizevec);
  
  vector<int>::iterator it_new;
  
  it = myvector.begin();
  
  i = 0;
  for (it = myvector.begin(); it!=myvector.end(); ++it){
 
  newvector[i]= myvector[i] ;
  i++;
  }

  it = newvector.begin();

 // for (it = newvector.begin(); it!=newvector.end(); ++it){
 
  while (newvector.size()!=0){
  	it_new = newvector.begin();
  	val = newvector[0];
  	cout << newvector.size() << endl;
  while (it_new != newvector.end())
  {
  //	cout << newvector.size() << endl;
    if (*it_new<= val) {val = *it_new; it = it_new;}
    it_new++;
  } 

  sortvector.push_back(val); 
  newvector.erase(it);
  cout << "Vector newvector:"; 
  for (int j=0; j<newvector.size(); j++) cout << newvector[j];

  cout << endl;	

  cout << "Vector sortvector:";  

  for (int j=0; j<sortvector.size(); j++) cout << sortvector[j];

  cout << endl;	
  it = newvector.begin();
  }
  
  cout << "Vector sorted:";

  for (it = sortvector.begin(); it!=sortvector.end(); ++it){
    cout << ' ' << *it;
    }
 
  /*// destroy and deallocate container:
  for (int i=0; i<10; i++) myvector.get_allocator().destroy(&p[i]);
  myvector.get_allocator().deallocate(p,10);  */
  return 0; 
}
