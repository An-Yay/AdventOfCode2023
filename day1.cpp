#include <bits/stdc++.h>
using namespace std;

int main()
{
      ifstream Text("day1.txt");
      string str;
      long long int sum = 0;
      while (getline(Text, str))
      {
            int len = str.length();
            int i = 0;
            int j = len - 1;
            int d1 = 0, d2 = 0;
            while (i < len)
            {
                  if (isdigit(str[i]))
                  {
                        d1 = str[i] - '0';
                        break;
                  }
                  i++;
            }
            while (j >= 0)
            {
                  if (isdigit(str[j]))
                  {
                        d2 = str[j] - '0';
                        break;
                  }
                  j--;
            }
            cout << (d1 * 10) + d2 << '\n';

            sum += ((d1 * 10) + d2);
      }
      cout << sum;
      return 0;
}