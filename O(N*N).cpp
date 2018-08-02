#include<iostream>

using namespace std;

int main ()
{
  int arr_1[20], arr_2[20], n, i, j, flag = 0;
  cout << "How many elements in arrays?";
  cin >> n;
  cout << "\nEnter elements of the array 1\n";

  for (i = 0; i < n; ++i)
    cin >> arr_1[i];

  cout << "\nEnter elements of the array 2\n";

  for (j = 0; j < n; ++j)
    cin >> arr_2[j];


  for (i = 0; i < n; ++i)
    {
      for (j = 0; j < n; ++j)
	{
	  if (arr_1[i] == arr_2[j])
	    {
	      flag = 1;
	      cout <<i;
	    }
	}
    }
  if (flag == 0)
    {
      cout << "\n No match found!";
    }


  return 0;
}
