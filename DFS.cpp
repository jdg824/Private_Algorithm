#include <iostream>
#include <vector>

using namespace std;

int number = 7;		//DFS 현재 들어가있는 노드의 숫자
int c[7];	//다녀온곳 확인
vector<int> a[8];	//이번에 만든 노드들

void DFS(int x) {
	if (c[x]) return;	//다녀온곳이라면 바로 return
	c[x] = true;	//안다녀온곳
	cout << x << ' ';

	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		DFS(y);
	}
}

int main(void) {
	a[1].push_back(2);
	a[2].push_back(1);

	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);

	a[2].push_back(4);
	a[4].push_back(2);

	a[2].push_back(5);
	a[5].push_back(2);

	a[3].push_back(6);
	a[6].push_back(3);

	a[3].push_back(7);
	a[7].push_back(3);

	a[4].push_back(5);
	a[5].push_back(4);

	a[6].push_back(7);
	a[7].push_back(6);

	DFS(1);	//1번 노드부터 시작때림

	return 0;
}
