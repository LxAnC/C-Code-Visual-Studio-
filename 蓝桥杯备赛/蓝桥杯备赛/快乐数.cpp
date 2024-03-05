#include<iostream>
using namespace std;
int fast, slow;
int bitsum(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10 * (n % 10);
		n /= 10;
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	int slow = n, fast = bitsum(n);
	while (slow != fast)
	{
		slow = bitsum(n);
		fast = bitsum(bitsum(n));
	}
	return slow == 1;
}