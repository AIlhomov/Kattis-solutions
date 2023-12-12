#include <iostream>
#include <vector>
using namespace std;

int deno[] = { 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111 };
int n = sizeof(deno) / sizeof(deno[0]);
int svar = 0;
void findMin(int V)
{
	vector<int> ans;

	for (int i = n - 1; i >= 0; i--) {
		while (V >= deno[i]) {
			V -= deno[i];
			ans.push_back(deno[i]);
		}
	}

	//print result
	for (int i = 0; i < ans.size(); i++)
		if (ans[i] > 0) {
			svar++;
		}
	cout << svar;
}

int main()
{	
	int svar = 0;
	int n = 0;
	cin >> n;
	findMin(n);
	return 0;
}
