#include <iostream>
using namespace std;
void towerOfHanoi(int n, char from_rod, char to_rod, char bwt_rod)
{
	if(n==0)
	return;
	else
	{
		towerOfHanoi(n-1,from_rod,bwt_rod,to_rod);
		cout<< "Move disk "<< n << " from rod " << from_rod << " to rod " << to_rod <<endl;
		towerOfHanoi(n-1,bwt_rod,to_rod,from_rod);
	}
}
int main()
{
    int n;
	cout <<"Enter the number of disc : ";
	cin >>n;
	
	towerOfHanoi(n,'A','C','B');
	return 0;
}


