class Solution
{
public:
  int majorityElement (vector < int >&nums)
  {
    int max = 0;
    int maxValue = 0;
    int len = nums.size ();
      map < int, int >count;
    for (int i = 0; i < len; i++)
      {
	count[nums[i]]++;

      }
    std::pair < int, int >maxValuePair;


  for (const auto & entry:count)
      {
	if (max < entry.second)
	  {
	    max = entry.second;
	    maxValuePair = entry;
	  }

      }

    return maxValuePair.first;
  }
};
