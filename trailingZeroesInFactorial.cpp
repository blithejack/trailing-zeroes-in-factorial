// blithejack
#include <iostream>
#include <assert.h>

int find5(int x) {
  int cnt = 0;
  while((x > 0) && ((x%5) == 0))
  {
    x = x/5;
    ++cnt;
  }
  return cnt;
}

int trailingZeroes(int n) {
  int zeroes = 0;
  for(int i=1; i<=n; i++)
  {
    zeroes += find5(i);
  }
  return zeroes;
}

int main() {
  int n = 10000;
  std::cout << "Trailing 0s of " << n << "! is " 
    << trailingZeroes(n) << std::endl;
  
  assert(2499 == trailingZeroes(n));
  return 0;
}

