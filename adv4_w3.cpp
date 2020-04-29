#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

//
int INT_MIN1 =  -2147483648;

long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  long long result = 0;
    int n = a.size();
    //vector<int>::iterator i;
//    a.push_back(INT_MIN);
  //  b.push_back(INT_MIN);
int i=0;
int j=0;
  for (int i = 0; i < a.size() ; i++)
 //  do
  //while(i )
  {
            int maxa =INT_MIN1;
            int maxb = INT_MIN1;
            //vector<int>::iterator am;
           // vector<int>::iterator bm;
            int am;
            int bm;

            //std::cout<< INT_MIN<< "   ";

        for(int j=0; j < a.size() ; j++ )
        //do
        {

            if(a[j] > maxa)
            {
                maxa = a[j];
                am =j;
            }
            if(b[j] > maxb)
            {
                maxb = b[j];
                bm =j;
            }
        //j++;
        }//while(j < a.size());

         //a.erase(a.begin() +am);
       //  b.erase(b.begin() +bm);
        //n--;
        //std::cout<< a[i]<< "   ";
    result += ((long long) maxa) * maxb;
    //i++;
     //a.push_back(INT_MIN);
   //  b.push_back(INT_MIN);
            a[am] = INT_MIN1;
            b[bm] = INT_MIN1;
  }//while(i< a.size());

  return result;
}
/*
3
-2 2 4
-3 3 5
3
1 3 -5
-2 4 1
*/
int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
