#include <stdio.h>

struct NODE {
	int next[26];
	int cnt;
	void init() {
		for (int i = 0; i < 26; i++) {
			next[i] = -1;
		}
		cnt = 0;
	}
}trie[NM];
int root = 0, trieN;
//Ʈ���̴� ĳ�ø޸� cache friendly(�޸𸮰� �ǳʶپ���, ĳ���浹�� ������) �����ͷ� ����� �ȵȴ�, memory locality

void init(void) {
	root = 0;
	trieN = 0;
	trie[0].init();
}

void myInsert(int trieIdx, int bufIdx, int buffer_size, char *buf) {
	trie[trieIdx].cnt++;
	if (bufIdx == buffer_size) return; // �ܾ ������ġ. �ʿ��ϴٸ� ��ĥ�ϴ� �ڵ� �ʿ�
	int ch = buf[bufIdx] - 'a';

	if (trie[trieIdx].next[ch] == -1) { //�ڽ��� ������ ����, �������� ����. new�� ������� ������ �ſ� ������.
		trie[trieIdx].next[ch] = ++trieN;
		trie[trieN].init();
	}

	myInsert(trie[trieIdx].next[ch], bufIdx + 1, buffer_size, buf); // �ڽ��������� ���� Ž��
}
void insert(int buffer_size, char *buf) {
	myInsert(root, 0, buffer_size, buf);
}

int query(int buffer_size, char *buf) {
	int trieIdx = root;
	for (int i = 0; i < buffer_size; i++) {
		int ch = buf[i] - 'a';
		trieIdx = trie[trieIdx].next[ch];
		if (trieIdx == -1) return 0;
	}
	return trie[trieIdx].cnt;
}