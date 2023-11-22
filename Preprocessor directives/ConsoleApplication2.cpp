#include <iostream>

#define MODE 1

#ifndef MODE
#error Please specify MODE
#else
#if MODE == 0
#define TRAINING_MODE
#elif MODE == 1
#define COMBAT_MODE
int add(int a, int b) {
    return a + b;
}
#else
#define UNKNOWN_MODE
#endif
#endif

int main() {
    int a;
    int b;
    int result;

    system("chcp 1251");
#ifdef TRAINING_MODE
    std::cout << "������� � ������ ����������\n";
#elif defined(COMBAT_MODE)
    std::cout << "������� � ������ ������\n";
    std::cout << "������� ��� �����: ";
    std::cin >> a >> b;
    result = add(a, b);
    std::cout << "��������� ��������: " << result << std::endl;
#elif defined(UNKNOWN_MODE)
    std::cout << "����������� �����. ���������� ������.\n";
#endif

    return 0;
}