# XOR-linked-lists
Проект выполнен в рамках учебного курса "Основы программирования".

### Библиотека
Библиотека предоставляет интерфейс для работы со списком. Реализации этих функций находится в файле [xlist.c](xlist.c)

| Название | Описание | Ответственный | 
| -------- | -------- | ------------ | 
| [delete_elem](#delete_elem) | Удаляет из списка элемент | Пермяков |
| [del_list](#del_list) | Удаляет список и освобождает память | Сорока |
| [addelem_end](#addelem_end) | Добавляет элемент в конец списка | Аксенов |
| [addelem_begin](#addelem_begin) | Добавляет элемент в начало списка | Аксенов |
| [felem_list](#felem_list) | Находит элемент в списке | Аляев |
| [symm_list](#symm_list) | Проверяет, симметричен ли список | Шурыгин |
| [print_list](#print_list) | Выводит элементы списка на экран | Шурыгин |

## Описание 
В этом разделе содержатся описания работы всех функций из этой библиотеке. 

### delete_elem
`int delete_elem(struct xlist **T, int k)`

Удаляет из списка первое вхождение элемента k, возвращает 1 при успешном выполнении и 0, если k не найден

### del_list
`void del_list(struct xlist **T)`

Уничтожает список с двойным указателем на начало T и освобождает память. Обязательно вызывайте эту функцию перед выходом из программы.

### addelem_end
`int lst_append(list_t* lst, lst_elem_t el)`

### addelem_begin
`int lst_insert_before(lst_iter_t it, lst_elem_t el)`

### felem_list
`void lst_delete(lst_iter_t it)`


### symm_list
`void lst_delete(lst_iter_t it)`

### print_list
`void lst_delete(lst_iter_t it)`
