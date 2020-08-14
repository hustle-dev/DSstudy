#include <stdio.h>

// ���� Ž���̸� ���� ���� Ž���� �ٸ����� mid���� ���� Ž���� ��� �߾ӿ��� ã�⸦ ����������
// ���� Ž���� ã�� ������ ã�� ��ġ�� ����ϸ� ã�� ������ ���� Ž������ ȿ�������� ã�� �� ����
// double������ ����� ������ ��� ������� �Ǽ������� ����Ǿ� ������ �ּ�ȭ �ǵ���!

int ISearch(int ar[], int first, int last, int target)
{
	int mid;

	if (ar[first] > target || ar[last]< target) // ���� �Ѿ� ������ �������� �Ǵ��� �ؾ���!
		return -1;

	mid = ((double)(target - ar[first]) / (ar[last] - ar[first]) * (last - first)) + first;

	if (ar[first] == target)
		return mid;
	else if (target < ar[mid])
		return ISearch(ar, first, mid - 1, target);
	else
		return ISearch(ar, mid + 1, last, target);
}

int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = ISearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 2);
	if (idx == -1)
		printf("Ž������ \n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);


	return 0;
}