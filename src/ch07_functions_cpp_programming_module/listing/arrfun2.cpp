#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n);

// include iostream vector std::include
int main()
{
	int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
	std::cout<<cookies<< " = array address, ";
	std::cout<<sizeof(cookies) << " = sizeof cookies.\n";
	int sum = sum_arr(cookies, sizeof(cookies)/sizeof(cookies[0]));
	std::cout<< "Totoal cookies eaten: "<<sum<<std::endl;

	sum = sum_arr(cookies, 3);	// a lie
	std::cout<<"First three eaters ate: "<<sum<<" cookies.\n";

	sum = sum_arr(cookies + 4, 4); 	// another lie
	std::cout<<"Last four eaters ate: "<<sum<<" cookies.\n";

	return 1;
}

int sum_arr(int arr[], int n)
{
	int sum = 0;
	for (int i=0; i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
