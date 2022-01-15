// "Copyright [2022] Mehedi Hasan"
// Learning Started 15/01/22 | 9.50 p.m
//
// Self_Study : https://www.cplusplus.com/reference/vector/vector

#include<iostream>
#include<vector>

#define vec std::vector
#define cout std::cout
#define cin std::cin
#define endl std::endl
#define pb push_back


int main() {
  vec <int> vector1;
  vec <int> vector2;
  // Vec 1
  // int arr[] {10, 20};
  vector1.insert(vector1.end(), {10, 20});      // vector.insert(_position, _value(array/value))
  // vector1.pb(10);
  // vector1.pb(20);
  cout << "vector1 :\n" << vector1.at(0) << "\t" << vector1.at(1) << "\nSize : " << vector1.size() << endl;
  //
  // Vec 2
  vector2.insert(vector2.end(), {100, 200});
  // vector2.pb(100);
  // vector2.pb(200);
  cout << "Vector2 :\n" << vector2.at(0) << "\t" << vector2.at(1) << "\nSize : " << vector2.size() << endl;
  //
  // Vec_2d
  vec<vec<int>> vector_2d;
  vector_2d.insert(vector_2d.end(), {vector1, vector2});
  // vector_2d.pb(vector1);
  // vector_2d.pb(vector2);
  //
  cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;
  //
  // Update
  vector1.at(0) = 1000;
  cout << "\nAfter Update : " << vector1.at(0) << " " << vector1.at(1) << endl;
  cout << "\nAfter Update 2d vector : \n" << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;
  //
  // Another way to add vectors value from array
  int arr[] {2, 5, 8, 11, 14};
  std::vector<int> TestVector(arr, arr+5);   // To add array in a Vector Dynamically | (_arrayName, _arraySize)
  for (int i = 0; i < 5; i++) {
  cout << TestVector.at(i) << " ";
  }
}
