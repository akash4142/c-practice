#include<iostream>
using namespace std;
class part
{
private:
	int modelnumber;
	int partnumber;
	float cost;
public:
	void setpart(int mn, int pn, float c) {
		modelnumber = mn;
		partnumber = pn;
		cost = c;
	}
	void showpart() {
		cout << "Model " << modelnumber;
		cout << ", part " << partnumber;
		cout << " , costs $" << cost << endl;
	}
 };
int main() {
	part p1,p2;
	p1.setpart(10, 20, 100.34);
	p2.setpart(20, 120, 2383.34);

	p1.showpart();
	p2.showpart();
	return 0;
}
