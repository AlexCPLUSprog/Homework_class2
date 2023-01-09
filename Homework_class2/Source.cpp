#include <string>
#include "Bird.h"

class parrots{
public:
	// 1. ƒва способа создать конструктор по умолчанию
	parrots(): _speed(50) {}
	//parrots() { this->_speed = 50; }

	// 2. —пособ удалить конструктор по умолчанию
	//parrots() = delete;

	// 3. ќбъ€вление и определение дл€ operator[] дл€ доступа к элементам пол€ std::string по индексу
	parrots(const std::string& color) : _color(color) {}
		const char operator[](int index) {
			return _color[index];
	}
	// 4. ќбъ€вление и определение дл€ любого константного метода по своему	желанию
		const std::string& getColor()const {
			return _color;
		}

private:
	int _speed;
	std::string _color;
};

int main() {

	// 5.  ласс, в конструкторе которого выдел€етс€ пам€ть, а в деструкторе - удал€етс€
	Bird sparrow(14);

}