Задача 1. Уникальный вектор
Описание
Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.

Пример правильной работы программы
[IN]: 1 1 2 5 6 1 2 4
[OUT]: 1 2 4 5 6

Задача 2. Печать контейнера
Описание
Нужно реализовать шаблонную функцию, которая печатает содержимое контейнера.

Контейнер может быть любым:

std::set
std::vector
std::list
Пример правильной работы программы
std::set<std::string> test_set = { "one", "two", "three", "four" };
print_container(...); // four one three two. помните почему такой порядок? :)

std::list<std::string> test_list = { "one", "two", "three", "four" };
print_container(...); // one, two, three, four

std::vector<std::string> test_vector = { "one", "two", "three", "four" };
print_container(...); // one, two, three, four
