class Solution {
public:
  bool isPalindrome(int x) {
    if (x<0)
{
      return false;
    }
    int result = 0;

    while (x!= 0)
{
      result = result*10 + (x%10);
      x /= 10;
    }

    if (result == x)
      return true;
    else
      return false;


  }
};
