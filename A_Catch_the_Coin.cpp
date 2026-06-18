#include <iostream>

using namespace std;

int main()
{
  short int n;
  cin >> n;
  int x, y;
  int y_after;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    y_after = y - abs(x);
    if (y<0)
    {
      if (y_after)
      {
      }
      
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }

  return 0;
}

// cout << "(" << x << "," << y_after << ")";