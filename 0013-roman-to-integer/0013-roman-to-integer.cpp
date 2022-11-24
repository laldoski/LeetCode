class Solution
{
public:

  int romanToInt (string Roman)
  {
    std::map < string, int >Roman2int;
      Roman2int.insert (
			{
			"I", 1});
    Roman2int.insert (
		      {
		      "V", 5});
    Roman2int.insert (
		      {
		      "X", 10});
    Roman2int.insert (
		      {
		      "L", 50});
    Roman2int.insert (
		      {
		      "C", 100});
    Roman2int.insert (
		      {
		      "D", 500});
    Roman2int.insert (
		      {
		      "M", 1000});
    Roman2int.insert (
		      {
		      "IV", 4});
    Roman2int.insert (
		      {
		      "IX", 9});
    Roman2int.insert (
		      {
		      "XL", 40});
    Roman2int.insert (
		      {
		      "XC", 90});
    Roman2int.insert (
		      {
		      "CD", 400});
    Roman2int.insert (
		      {
		      "CM", 900});


    int count = 0;
    string str;
    int intValue;

    for (int i = 0; i < Roman.length (); i++)
      {
	char firChar = Roman[i];
	char secChar = Roman[i + 1];
	str += firChar; 
    str += secChar;
	

	if (str == "IV" || str == "IX" || str == "XL" || str == "XC"
	    || str == "CD" || str == "CM")
	  {

	    intValue = Roman2int [str];
	    count += intValue;
	    str.clear ();
	    i++;
	  }

	else
	  {
	    std::string stringValue {firChar};
	    intValue = Roman2int [stringValue];
	    count += intValue;

	    str.clear ();
	  }

      }

    return count;

  }
};
