class Solution
{
public:
  string longestCommonPrefix (vector < string > &strs)
  {
    std::sort (strs.begin (), strs.end ());
    string results = "";
    int len = strs.size ();
      
    string first = strs[0];
    string last = strs[len - 1];

    for (int i = 0; i < first.size (); i++)
      {
        
	if (first[i] == last[i])
        
	  {
	    results += first[i];

	  }
	else
	    break;
      }

    return results;
  }
};
