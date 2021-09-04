//Q1. Write a program to Swap to two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, temp;
    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

//Q2. Write a program to find the largest number among three numbers entered by the user.
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter any 3 numbers : "<<endl;
    cin>>num1>>num2>>num3;
    if(num1 >= num2 && num1 >= num3) {
        cout<< num1 << " is the largest number";
    } else if(num2 >= num3) {
        cout<< num2 << " is the largest number";
    } else {
        cout<< num3 << " is the largest number";
    }
    return 0;
}

//Q3. Write a program to check whether a year entered by a user is Leap year or not.
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter any year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }else
            cout << year << " is a leap year.";
    }else
        cout << year << " is not a leap year.";
    return 0;
}
//Q4. Write a program to display Fibonacci Series upto nth term. (Using loops)
#include <iostream>
using namespace std;
int main() {
  int n1=0,n2=1,n3,i,num;
  cout<<"Enter the number of elements: ";
  cin>>num;
  cout<<n1<<" "<<n2<<" ";
  for(i=2;i<num;++i)
  {
    n3=n1+n2;
    cout<<n3<<" ";
    n1=n2;
    n2=n3;
  }
  return 0;
}

//Q5. Write a program to check whether a number is Prime or Not.
#include <iostream>
using namespace std;
int main()
{
  int num, i, m=0, flag=0;
  cout << "Enter the Number to check Prime: ";
  cin >> num;
  m=num/2;
  for(i = 2; i <= m; i++)
  {
    if(num % i == 0)
    {
      cout<< num <<" is not a Prime Number"<<endl;
      flag=1;
      break;
      }
  }
  if (flag==0)
      cout <<num <<" is a Prime Number"<<endl;
  return 0;
}
//Q6. Print this pattern using loops (For n=5)
#include<iostream>
using namespace std;
int main()
{
    int i, space, j;
    for(i=1; i<=5; i++)
    {
        for(space=5; space>i; space--)
            cout<<" ";
        for(j=0; j<i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

//Q7.Write a program that takes n elements from the user and displays the second largest element of an array.
#include <iostream>
using namespace std;
int main(){
   int n, num[50], largest, second;
   cout<<"Enter number of elements: ";
   cin>>n;
   for(int i=0; i<n; i++){
      cout<<"Enter Array Element "<<(i+1)<<": ";
      cin>>num[i];
   }
   if(num[0]<num[1]){
      largest = num[1];
      second = num[0];
   }
   else{
      largest = num[0];
      second = num[1];
   }
   for (int i = 2; i< n ; i ++) {
      if (num[i] > largest) {
         second = largest;
         largest = num[i];
      }

      else if (num[i] > second && num[i] != largest) {
         second = num[i];
      }
   }
   cout<<"Second Largest Element in array is: "<<second;
   return 0;
}
//Q8. Left Rotation
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, d; cin >> N >> d;
    vector<int> v(N);
    for (size_t i = 0; i < v.size(); ++i) {
        cin >> v[i];
    }
    d = d % N;
    for (int i = d; i < N; ++i)
        cout << v[i] << ' ';
    for (int i = 0; i < d; ++i)
        cout << v[i] << ' ';
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

//Q9. Grading Students
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
int n;
cin >> n;
for(int a0 = 0; a0 < n; a0++){
int grade;
cin >> grade;
if (grade >= 38) {
int rem = grade % 5;
if (rem >= 3) grade += 5 - rem;
}
cout << grade << endl;
}
return 0;
}

//10. CamelCase
#include <bits/stdc++.h>
using namespace std;
int main() {

 string str;
 int cnt = 1;
 cin >> str;
 int len = str.length();
 for(int i = 0; i < len; i++){
        if(str[i]>= 65 && str[i] <= 90)cnt++;
 }
 cout << cnt << endl;
 return 0;
}
