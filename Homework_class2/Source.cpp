#include <string>
#include "Bird.h"

class parrots{
public:
	// 1. ��� ������� ������� ����������� �� ���������
	parrots(): _speed(50) {}
	//parrots() { this->_speed = 50; }

	// 2. ������ ������� ����������� �� ���������
	//parrots() = delete;

	// 3. ���������� � ����������� ��� operator[] ��� ������� � ��������� ���� std::string �� �������
	parrots(const std::string& color) : _color(color) {}
		const char operator[](int index) {
			return _color[index];
	}
	// 4. ���������� � ����������� ��� ������ ������������ ������ �� ������	�������
		const std::string& getColor()const {
			return _color;
		}

private:
	int _speed;
	std::string _color;
};

int main() {

	// 5. �����, � ������������ �������� ���������� ������, � � ����������� - ���������
	Bird sparrow(14);

}