#include<iostream>
#include<cmath>
int main() {
	int n ,i;
	std:: cout << "Nhap n: "; std:: cin >> n;
	int dem =0;
	for (i=1;dem <= n; i++) {
		dem+=i;
	}
	std:: cout << i;
	return 0;
}