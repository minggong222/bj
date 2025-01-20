#include <iostream>
#define ll long long
using namespace std;
int arr[100001];
ll tree[400004];
ll lazy[400004];
int n, m;
void init(int start, int end, int idx)
{
	if (start == end)
	{
		tree[idx] = arr[start];
		return;
	}
	int mid = (start + end) / 2;
	init(start, mid, idx * 2);
	init(mid + 1, end, idx * 2 + 1);
	tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
}
void lazyUpdate(int start, int end, int idx)
{
	if (lazy[idx] == 0)
		return;
	tree[idx] += lazy[idx] * (end - start + 1);
	if (start != end)
	{
		lazy[idx * 2] += lazy[idx];
		lazy[idx * 2 + 1] += lazy[idx];
	}
	lazy[idx] = 0;
	return;
}
void update(int start, int end, int idx, int value, int left, int right)
{
	lazyUpdate(start, end, idx);
	if (start > right || end < left)
		return;
	if (start >= left && end <= right)
	{
		lazy[idx] += value;
		lazyUpdate(start, end, idx);
		return;
	}
	int mid = (start + end) / 2;
	update(start, mid, idx * 2, value, left, right);
	update(mid + 1, end, idx * 2 + 1, value, left, right);
	tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
	return;
}
void find(int start, int end, int idx, int node)
{
	lazyUpdate(start, end, idx);
	if (start == end)
	{
		cout << tree[idx] << '\n';
		return;
	}
	int mid = (start + end) / 2;
	if (mid >= node)
	{
		find(start, mid, idx * 2, node);
	}
	else
	{
		find(mid + 1, end, idx * 2 + 1, node);
	}
	return;
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	init(1, n, 1);
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		if (x == 1)
		{
			int a, b, c;
			cin >> a >> b >> c;
			update(1, n, 1, c, a, b);
		}
		else
		{
			int a;
			cin >> a;
			find(1, n, 1, a);
		}
	}
	return 0;
}