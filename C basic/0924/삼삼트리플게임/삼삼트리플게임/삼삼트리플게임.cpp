/////////////////////////////////////////////////////////////////////////////////////////////
// �⺻ �����ڵ�� ���� �����ص� ���� �����ϴ�. ��, ����� ���� ����
// �Ʒ� ǥ�� ����� ���� �ʿ�� �����ϼ���.
// ǥ�� �Է� ����
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// scanf("%d&", &a);                      // int ���� 1�� �Է¹޴� ����
// scanf("%f %f", &b, &c);               // float ���� 2�� �Է¹޴� ���� 
// scanf("%lf %lf %lf;", &d, &e, &f);     // double ���� 3�� �Է¹޴� ����
// scanf("%c", &g);                      // char ���� 1�� �Է¹޴� ����
// scanf("%s", &var);                    // ���ڿ� 1�� �Է¹޴� ����
// scanf("%lld", &AB);                   // long long ���� 1�� �Է¹޴� ����
/////////////////////////////////////////////////////////////////////////////////////////////
// ǥ�� ��� ����
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = 'ABCDEFG';
// long long AB = 12345678901234567L;
// printf("%d", a);                      // int ���� 1�� ����ϴ� ����
// printf("%f %f", b, c);                // float ���� 2�� ����ϴ� ����
// printf("%lf %lf %lf", d, e, f);       // double ���� 3�� ����ϴ� ����
// printf("%c", g);                      // char ���� 1�� ����ϴ� ����
// printf("%s", var);                    // ���ڿ� 1�� ����ϴ� ����
// printf("%lld", AB);                   // long long ���� 1�� ����ϴ� ����
/////////////////////////////////////////////////////////////////////////////////////////////




#include <stdio.h>
int card[9];
char color[9];
int R[12];
int G[12];
int B[12];
int main(void)
{
	int T;
	int i = 0;
	setbuf(stdout, NULL);
	freopen("���Ʈ���ð���.txt", "r", stdin);
	scanf("%d", &T);


	
	for (int tc = 0; tc < T; tc++) {
		for (i = 0; i < 10; i++) {
			R[i] = 0;
			G[i] = 0;
			B[i] = 0;
		}
		int N = 0;
		int a = 0;
		scanf("%d", &a);
		//printf("%d\n", a);
		scanf(" %s", &color);
		//printf(" %s\n", color);
		int j = 0;
		int b;
		while (a > 0) {
			b = a % 10;
			if (color[8 - j] == 'R') {
				R[b] += 1;
			}
			if (color[8 - j] == 'G') {
				G[b] += 1;
			}
			if (color[8 - j] == 'B') {
				B[b] += 1;
			}
			a /= 10;
			j += 1;
		}
		int cnt = 0;


		for (int i = 0; i < 10; i++) {

			if (R[i] > 2) {
				R[i] -= 3;
				cnt += 1;
			}
			if (G[i] > 2) {
				G[i] -= 3;
				cnt += 1;
			}
			if (B[i] > 2) {
				B[i] -= 3;
				cnt += 1;
			}
			while (R[i] > 0 && R[i + 1] > 0 && R[i + 2] > 0) {
				R[i] -= 1;
				R[i + 1] -= 1;
				R[i + 2] -= 1;
				cnt += 1;
			}
			while (G[i] > 0 && G[i + 1] > 0 && G[i + 2] > 0) {
				G[i] -= 1;
				G[i + 1] -= 1;
				G[i + 2] -= 1;
				cnt += 1;
			}
			while (B[i] > 0 && B[i + 1] > 0 && B[i + 2] > 0) {
				B[i] -= 1;
				B[i + 1] -= 1;
				B[i + 2] -= 1;
				cnt += 1;
			}
		}
		if (cnt == 3) {
			printf("#%d Win\n",tc+1);

		}
		else{
			printf("#%d Continue\n", tc+1);
		}
	}	
	return 0;
}