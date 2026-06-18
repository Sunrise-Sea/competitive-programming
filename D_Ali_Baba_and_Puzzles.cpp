#include <iostream>

int main (){

  long long int a,b,c;
  long long int d;
  std::cin >> a>>b>>c>>d;
  /*
  if 
  {
    std::cout<<"YES";
  }
  else if 
  {
    std::cout<<"YES";
  }
  
  else if 
  {
    std::cout<<"YES";
  }
  else if 
  {
    std::cout<<"YES";
  }
  else if 
  {
    std::cout<<"YES";
  }
  else if 
  {
    std::cout<<"YES";
  }
  else
  {
    std::cout<<"NO";
  }*/
  // alt code much simpler
  if ((a+b-c==d)||(a+b*c==d)||(a*b+c==d)||(a*b-c==d)||(a-b*c==d)||(a-b+c==d))
  {
    std::cout<<"YES";
  }
  else
  {
    std::cout<<"NO";
  }
  
  return 0;
}
