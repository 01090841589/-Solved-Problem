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
	int a[1000000];
	int main(void)
	{
		int T;
		int i = 0;
		setbuf(stdout, NULL); 
		freopen("input.txt", "r", stdin);
		scanf("%d", &T);
		for (int tc = 0; tc < T; tc++) {
			int dis = 0;
			scanf("%d", &dis);
			if (dis < 100) {
				a[i] = 0;
			}
			else if (dis < 1000) {
				a[i] = 1;
			}
			else if (dis < 10000) {
				a[i] = 2;
			}
			else if (dis < 100000) {
				a[i] = 3;
			}
			else if (dis < 1000000) {
				a[i] = 4;
			}
			else {
				a[i] = 5;
			}
			i += 1;


		
		}
		for (int j = 0; j < T; j++) {
			printf("#%d %d\n", j + 1, a[j]);
		}
		return 0; 
	}