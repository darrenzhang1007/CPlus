#include <iostream>

using namespace std;

int main() {
	char ch = 'a';
	// &������
	//&ch = 97; // &ch ��ֵ���Ϸ�
	char* cp = &ch; // &ch ��ֵ
	//&cp = 97; // &cp ��ֵ���Ϸ�
	char** cpp = &cp; // &cp��ֵ

	// * ������
	*cp = 'a'; // *cp ��ֵȡ����ch��λ��
	char ch2 = *cp; // *cp ��ֵȡ����ch�洢��λ��
	// *cp + 1 = 'a'; // *cp+1��ֵ���Ϸ���λ��
	ch2 = *cp + 1; //*cp + 1 ��ֵȡ�����ַ���ASCII��+1����
	*(cp + 1) = 'a'; //*(cp+1)��ֵ�﷨�ϺϷ���ȡch����λ��

	return 0;
}