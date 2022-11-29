class Solution
{
public:
  int hammingWeight (uint32_t n)
  {
    int count = 0;
    int binaryNum[32];

    int i = 0;
    while (n > 0)
      {

	binaryNum[i] = n % 2;
	n = n / 2;
	i++;

      }

    for (int j = i - 1; j >= 0; j--)
      {

	if (binaryNum[j] == 1)
	  count++;

      }


    return count;
  }
};
