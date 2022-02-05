#include <iostream>
#include "findCommonItems/findCommonItems.h"
using namespace std;



int main() {
  vector<char> arr1 = {'a', 'b', 'c'};
  vector<char> arr2 = {'x', 'w', 'y', 'z'};
  // cout << boolalpha << findCommonItemsN2(arr1, arr2) << endl;
  cout << boolalpha << findCommonItemsSet(arr1, arr2) << endl;
  return 0;
} 