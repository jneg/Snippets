#include <iostream>  // cout
#include <vector>    // vector

// Generates fibonacci sequence
// to the fibonacci index
void fibIndex(long x)
{
   std::vector<long> seq{0,1};
   for(long i=2; i<=x; ++i) { seq.push_back(seq[i-1]+seq[i-2]); }
   for(auto it=seq.cbegin(); it!=seq.cend(); ++it)
   {
      if(it==seq.cend()-1) std::cout << *it << std::endl;
      else std::cout << *it << ", ";
   }
}

// Generates fibonacci sequence
// up to the fibonacci value
void fibLimit(long x)
{
   std::vector<long> seq{0,1};
   for(long i=2; seq[i-1]<=x; ++i) { seq.push_back(seq[i-1]+seq[i-2]); }
   for(auto it=seq.cbegin(); it!=seq.cend()-1; ++it)
   {
      if(it==seq.cend()-2) std::cout << *it << std::endl;
      else std::cout << *it << ", ";
   }
}

int main()
{
   fibIndex(20);
   fibLimit(1000);
}
