# XOR-linked-lists
Проект выполнен в рамках учебного курса "Основы программирования".

## Содержание
### Типы
| Название | Описание |
| -------- | -------- |
| list_t | Непрозрачный тип представления списка. Все функции данной библиотеки принимают либо возвращают указатели на переменные этого типа. Программист не должен самостоятельно изменять содержимое памяти, по этим адресам. |
| lst_iter_t | Непрозрачный тип представления двунаправленных итераторов списка. Функции с префиксом `lst_iter_` принимают значения этого типа. |
| lst_elem_t | Тип элементов, хранящихся в списке. Работоспособность этой библиотеки проверена исходя, что этот тип является целочисленным. **TODO**: организовать работу библиотки при общем типе. |

### Библиотека
Библиотека предоставляет интерфейс для работы со списком. Реализации этих функций находится в файле [xlist.c](xlist.c)

| Название | Описание | Ответсвенный | 
| -------- | -------- | ------------ | 
| [lst_new](#lst_new) | Создаёт новый список | const | [Гурьев](https://github.com/mymedia2/2list/commits?author=mymedia2) | Протестирована |
| [lst_free](#lst_free) | Освобождает память, занимаемую списком | O(n) | [Гурьев](https://github.com/mymedia2/2list/commits?author=mymedia2) | Протестирована |
| [lst_append](#lst_append) | Добавляет элемент в конец | const | [Макаровская](https://github.com/mymedia2/2list/commits?author=mnika1996) | Протестирована |
| [lst_insert_before](#lst_insert_before) | Добавляет элемент перед тем, на который указывает итератор | const | [Табалин](https://github.com/mymedia2/2list/commits?author=Iluvmagick) | Не реализована |
| lst_insert_range | Копирует в список элементы массива | O(n) | — | Запланирована |
| lst_insert_list | Копирует в список элементы из другого списка | O(n) | — | Запланирована |
| [lst_delete](#lst_delete) | Удаляет элемент, на который указывает итератор | const | [Копцева](https://github.com/mymedia2/2list/commits?author=Treenoga) | Не проходит тесты |
| [lst_clear](#lst_clear) | Удаляет все элементы в списке | O(n) | [Копцева](https://github.com/mymedia2/2list/commits?author=Treenoga) | Протестирована |
| lst_empty | Проверяет, не является ли список пустым | const | — | Запланирована |
| [lst_size](#lst_size) | Вычисляет размер списка | O(n) | [Руденко](https://github.com/mymedia2/2list/commits?author=gr33n-made) | Протестирована |
| [lst_index](#lst_index) | Возвращает элемент с заданным номером | O(n) | [Табалин](https://github.com/mymedia2/2list/commits?author=Iluvmagick) | Протестирована |
| lst_repack | Переупаковывает список | O(n) | [Гурьев](https://github.com/mymedia2/2list/commits?author=mymedia2) | Нет тестов |
### Алгоритмы
Нижеследующие функции реализуют стандартные алгоритмы для нашего списка. Их реализации хранятся в файле [algorithm.c](algorithm.c).

| Название | Описание | Сложность | Ответсвенный | Готовность |
| -------- | -------- | :-------: | ------------ | ---------- |
| lst_binsearch | Выполняет биарный поиск | O(log n) | [Гурьев](https://github.com/mymedia2/2list/commits?author=mymedia2) | Отказались |
| [lst_count](#lst_count) | Возвращает количество вхождений заданного значения | O(n) | [Чжун](https://github.com/mymedia2/2list/commits?author=russjungbok) | Протестирована |
| [lst_copy](#lst_copy) | Возвращает копию списка | O(n) | [Макаровская](https://github.com/mymedia2/2list/commits?author=mnika1996) | Протестирована |
| [lst_compare](#lst_compare) | Сравнивает два списка | O(n) | [Гурьев](https://github.com/mymedia2/2list/commits?author=mymedia2) | Не реализована |
| [lst_find](#lst_find) | Возвращает итератор на первое вхождение значения | O(n) | [Табалин](https://github.com/mymedia2/2list/commits?author=Iluvmagick) | Протестирована |
| [lst_for_each](#lst_for_each) | Замещает каждый элемент в списке результатом вызова функции | O(n) | [Гурьев](https://github.com/mymedia2/2list/commits?author=mymedia2) | Протестирована |
| [lst_max](#lst_max) | Возвращает наибольшее значение из списка | O(n) | [Копцева](https://github.com/mymedia2/2list/commits?author=Treenoga) | Протестирована |
| [lst_min](#lst_min) | Возвращает наименьшее значение из списка | O(n) | [Копцева](https://github.com/mymedia2/2list/commits?author=Treenoga) | Протестирована |
| lst_random_shuffle | Переставляет элементы в случайном порядке | O(n) | [Руденко](https://github.com/mymedia2/2list/commits?author=gr33n-made) | Отказались |
| [lst_replace](#lst_replace) | Заменяет все вхождения одного значения на другое | O(n) | [Чжун](https://github.com/mymedia2/2list/commits?author=russjungbok) | Протестирована |
| [lst_remove](#lst_remove) | Удаляет из списка все вхождения заданного значения | O(n) | [Чжун](https://github.com/mymedia2/2list/commits?author=russjungbok) | Не реализована |
| [lst_sort](#lst_sort) | Сортирует список | O(n log n) | [Руденко](https://github.com/mymedia2/2list/commits?author=gr33n-made) | Не реализована |
| lst_swap | Обменивает два списка | const | [Макаровская](https://github.com/mymedia2/2list/commits?author=mnika1996) | Не реализована |
## Тесты
В этом разделе содержатся описания работы всех функций из этой библиотеке. Ко многим из них преведены примеры их использования. Эти примеры одновременно являются и тестами. Чтобы запутить их, выполните команду `make` в каталоге с репозиторием. По этой команде запустится скрипт `./doctest.py`, который на основе данного файла сформирует код на Си, и скомпилирует его. Если все тесты будут пройдены,выводится соответствуещее сообщение, иначе будут показаны различия между выводом программы и приведёнными здесь результатами.

Далее содержатся директивы doctest.py. Каждая директива занимает ровно одну строчку и представляет собой HTML комментарий вида `<!-- doctest: команда -->`. Кроме директивы в строчке ничего не должно быть. Получив команду, doctest.py ищет на следующей строчке первый, самый левый, блок кода и обрабатывает его согласно директиве. Подобнее см. [doctest.py](doctest.py).

### lst_new
`list_t* lst_new(int)`

Создаёт и инициализирует список и возвращает на него указатель. В случае нехватки памяти возвращается нулевой указатель. Параметр игнорируется.

**Пример:**
<!-- doctest: run -->
```c
list_t* L;
if (!(L = lst_new(0))) {
	/* ошибка при создании списка  */
	abort();
}
/* работаем со списком */
lst_free(L);
```

### lst_free
`void lst_free(list_t* lst)`

Уничтожает список lst и освобождает память. Обязательно вызывайте эту функцию перед выходом из программы.

### lst_append
`int lst_append(list_t* lst, lst_elem_t el)`

Вставляет элемент el в конец списка lst. В случае успеха возвращает ненулевое значение, иначе 0. Если произошли ошибки — список остаётся в корректном состоянии. Все итераторы списка остаются в валидном состоянии.

<!-- doctest: before -->
**Список до:** `96 78 84 61 57 30 43 50 71`

**Пример:**
<!-- doctest: code -->
```c
lst_append(L, 42);
lst_append(L, 13);
```

<!-- doctest: after -->
**Результат:** `96 78 84 61 57 30 43 50 71 42 13`

### lst_insert_before
`int lst_insert_before(lst_iter_t it, lst_elem_t el)`

Вставляет элемент el перед тем, на который указывает it. В случае успеха возвращает ненулевое значение, иначе 0. Итераторы, указывающие на элементы после it остаются валиднымы (включая it). Итераторы до it могут быть испорчены, но не далее некоторого количества.

_Не реализована_

<!-- doctest: pass -->
**Список до:** `28 13 74 2 52 58 68 95 65`

**Пример:**
<!-- doctest: pass -->
```c
lst_iter_t p = lst_find(L, 68);
lst_insert_before(p, 42);
p = lst_iter_by_index(L, 3);
lst_insert_before(p, 13);
```

<!-- doctest: after -->
**Результат:** `28 13 74 13 2 52 58 42 68 95 65`

### lst_delete
`void lst_delete(lst_iter_t it)`

Удаляет элемент, на который указывает it. it и некоторое количество итераторов после становятся недействительными. До it остаются валидными.

<!-- doctest: before -->
**Список до:** `64 54 89 76 52 71 4 23 24 52 94 69 29 22`

**Пример:**
<!-- doctest: code -->
```c
lst_delete(lst_find(L, 52));
lst_delete(lst_iter_by_index(L, 2));
lst_delete(lst_iter_by_index(L, 11));
```

<!-- doctest: after -->
**Результат:** `64 54 76 71 4 23 24 52 94 69 29`

### lst_clear
`void lst_clear(list_t* lst)`

Очищает список lst. После этой операции размер списка становится равным нулю, список можно заново использовать (как после [lst_new](#lst_new). Обратите внимание, не освобождается вся память, занимаемая списком, чтобы уничтожить список используйте [lst_free](#lst_free).

_Тест пропускается из-за итераторов_

<!-- doctest: pass -->
**Список до:** `65 15 44 42 51 4 74 40 75`

**Пример:**
<!-- doctest: pass -->
```c
lst_clear(L);
```

<!-- doctest: after -->
**Результат:** ` `

 * ------------------------------------------------------------------

### lst_iter_by_index
### lst_index
<!-- doctest: before -->
**Список:** `19 0 69 79 46 23 93 11 31 42 65 90 26 7 89`

<!-- doctest: assert -->
```c
lst_index(L, 6) == 93;
lst_index(L, 11) == 90;
```

### lst_count
<!-- doctest: before -->
**Список:** `37 13 78 78 13 29 78 6 13 51 90 32 13 95`

<!-- doctest: assert -->
```c
lst_count(L, 13) == 4;
lst_count(L, 78) == 3;
```

### lst_repack
<!-- doctest: before -->
**Список:** `20 88 70 63 5 21 19 89 47 94 87 9 55 79 62 93 97 34 16 61 72 12 38 31 15`

<!-- doctest: code -->
```c
lst_repack(L);
```

<!-- doctest: after -->
**Результат:** `20 88 70 63 5 21 19 89 47 94 87 9 55 79 62 93 97 34 16 61 72 12 38 31 15`

### lst_copy
### lst_compare
### lst_find
<!-- doctest: before -->
**Список:** `37 52 41 45 67 26`

<!-- doctest: assert -->
```c
lst_iter_is_null(lst_find(L, 13)) == 1;
lst_iter_is_null(lst_find(L, 45)) == 0;
```

### lst_for_each
<!-- doctest: pass -->
**Список:** `56 15 69 24 16`

<!-- doctest: pass -->
```c
lst_elem_t func(lst_elem_t l) {
	return l + 1;
}
...
lst_for_each(L, func);
```

<!-- doctest: pass -->
**Результат:** `57 16 70 25 17`

### lst_max
<!-- doctest: before -->
**Список:** `39 53 48 27 17 83 75 15 28`

<!-- doctest: assert -->
```c
lst_max(L) == 83;
```

### lst_min
<!-- doctest: before -->
**Список:** `39 53 48 27 17 83 75 15 28`

<!-- doctest: assert -->
```c
lst_min(L) == 15;
```

### lst_replace
<!-- doctest: before -->
**Список:** `35 60 69 4 69 82 42 69 90 32 87 69 76`

<!-- doctest: code -->
```c
lst_replace(L, 69, 42);
```

<!-- doctest: after -->
**Результат:** `35 60 42 4 42 82 42 42 90 32 87 42 76`

### lst_remove
Ещё не готова

<!-- doctest: pass -->
**Список:** `66 42 56 42 29 1 73 42 97 34 42 63`

<!-- doctest: pass -->
```c
lst_remove(L, 42);
```

<!-- doctest: after -->
**Результат:** `66 56 29 1 73 97 34 63`

### lst_sort
Ещё не готова

<!-- doctest: pass -->
**Список:** `61 78 91 19 40 11 63 62 42 55 15 35`

<!-- doctest: pass -->
```c
lst_sort(L);
```

<!-- doctest: after -->
**Результат:** `11 15 19 35 40 42 55 61 62 63 78 91`


### lst_size
<!-- doctest: before -->
**Список:** `72 64 62 75 20 15 68 64 74 57 16 24 84 97 43 54 92 26 27`

<!-- doctest: assert -->
```c
lst_size(L) == 19;
```

