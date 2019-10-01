
#include <stdio.h>
#define max 1000000 //�ִ� �Է� ����



int Quicksort(int left, int right);
int T;
int A[max];
int B[max];
int result;


int main()
{
	freopen("Text.txt", "r", stdin);
	scanf_s("%d", &T);
	for (int tc = 0; tc < T; tc++) {
		result = 0;
		int n; //�Է��� ���� ����
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) //���ڸ� �Է¹޾� �迭 A�� ����
			scanf_s("%d", &A[i]);
		Quicksort(0, n - 1); //���� ����
		for (int i = 0; i < n; i++) //��� ���
			result += A[i];
		result += n;
		result += A[n - 1];
		printf("#%d %d\n", tc+1, result);
	}

	return 0;

}


int Quicksort(int left, int right)
{
	int i = left; //���� ���ں��� 1�� �����ϱ� ���� ����
	int j = right; //ū ���ں��� 1�� �����ϱ� ���� ����
	int p = (right - left) / 2 + left; //�Ǻ�(�Է¹��� �迭�� ����� ����)
	for (int n = left; n <= right; n++) //A�迭�� ���ڸ� �Ǻ��� ��
	{
		if (n == p) //�Ǻ��� ������ �����ϰ� �Ѿ
			continue;
		if (A[n] <= A[p]) //�Ǻ����� �۰ų� ���� ���� �迭 B�� ���ʺ��� ����
		{
			B[i] = A[n];
			i++;
		}
		if (A[n] > A[p]) //�Ǻ����� ū ���� �迭 B�� ���ʺ��� ����
		{
			B[j] = A[n];
			j--;
		}
	}
	B[j] = A[p]; //�迭 B�� ������ ���� ���� �Ǻ� ����
	p = j; //�Ǻ��� ��ġ ����
	for (int n = left; n <= right; n++) //���ĵ� �迭 B�� �迭 A�� ����
		A[n] = B[n];
	if (left < p - 1) //�Ǻ����� ���� ���ڸ� �ٽ� ����
		Quicksort(left, p - 1);
	if (p + 1 < right) //�Ǻ����� ū ���ڸ� �ٽ� ����
		Quicksort(p + 1, right);
	return 0;
}