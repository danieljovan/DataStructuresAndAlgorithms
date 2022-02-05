#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool findCommonItemsN2(vector<char> array1, vector<char> array2)
{
  for (int i=0; i<array1.size(); i++) {
    for (int j=0; j<array2.size(); j++) {
      if (array1[i] == array2[j])
        return true;
    }
  }
  return false;
}

bool findCommonItemsSet (vector<char> arr1, vector<char> arr2)
{
  set<int> letters(arr1.begin(), arr1.end());
  for (int i=0; i<arr2.size(); i++)
  {
    if (letters.count(arr2[i]))
      return true;
  }
  return false;
}

int main() {
  vector<char> arr1 = {'a', 'b', 'c'};
  vector<char> arr2 = {'x', 'w', 'y', 'z'};
  // cout << boolalpha << findCommonItemsN2(arr1, arr2) << endl;
  cout << boolalpha << findCommonItemsSet(arr1, arr2) << endl;
  return 0;
} 