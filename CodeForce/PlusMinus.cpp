// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int n;
// // // //     cin >> n;
// // // //     while (n--)
// // // //     {
// // // //         int a, b, c;
// // // //         cin >> a >> b >> c;
// // // //         if (a + b == c)
// // // //         {
// // // //             cout << "+" << endl;
// // // //         }
// // // //         else
// // // //         {
// // // //             cout << "-" << endl;
// // // //         }
// // // //     }
// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // // 	// your code goes here
// // int n, a, b;
// // cin >> n;
// // while (n--)
// // {
// // 	cin >> a >> b;
// // 	if ((a * b) % 4 == 0)
// // 		cout << (a * b) / 4 << endl;
// // 	else
// // 		cout << a * b << endl;
// // }
// // int a, b;
// // cin >> a >> b;
// // cout << (a * b) / 4 << endl;
// // cout << a % b << endl;
// // return 0;
// // }
// // for (int i = 0; i < n; i++)
// // {
// // }
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	while(n--)
// 	{
// 		int arr[n];
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>arr[i]<<endl;
// 		}
// 		if(arr[i]==0)
// 		{

// 		}
// 	}
// }/
#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int n;
	cin >> n;
	while (n--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		int rtp = a * 4;
		int audit = 2 * b;
		int nrtp = 0 * c;
		int ans = rtp + nrtp + audit;
		// int ans = a+b+c;
		cout << ans << endl;
	}
	return 0;
}
