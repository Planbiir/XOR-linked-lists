#include "xlist.h"

void print_list(struct xlist *T) {
	struct xlist *s = 0, *p;
	while (T != NULL) {
		printf("%d ", T->elem);
		p = T;
		T = (struct xlist *)((long)s ^ (long)(T->next));
		s = p;
	}
}

int addelem_begin(struct xlist **T, int k) {
	struct xlist *f;
	if ((f = malloc(sizeof(struct xlist)) == NULL) {
		fprintf(stderr, "Too few memory");
		return 1;
	}
	f->elem = k, f->next = *T;
	if ((*T) == NULL) *T = f;
	else {
		(*T)->next = (struct xlist *)((long)((*T)->next) ^ (long)f);
		*T = f;
	}
	return 0;
}

int addelem_end(struct xlist **T, int k) {
	struct xlist *f;
	if ((f = malloc(sizeof(struct xlist)) == NULL) {
		fprintf(stderr, "Too few memory");
		return 1;
	}
	f->elem = k;
	if ((*T) == NULL) *T = f, f->next = NULL;
	else {
		struct xlist *s = NULL, *p, *t = *T;
		while (t->next != s) {
			p = t;
			t = (struct xlist *)((long)s ^ (long)(t->next));
			s = p;
		}
		f->next = t;
		t->next = (struct xlist *)((long)(t->next) ^ (long)f);
	}
	return 0;
}

struct xlist *felem_list(struct xlist *T, int d) {
	struct xlist *s = 0, *p;
	while (T != NULL) {
		if (T->elem == d) return T;
		p = T;
		T = (struct xlist *)((long)s ^ (long)(T->next));
		s = p;
	}
	return NULL;
}

void del_list(struct xlist **T) {
	struct xlist *s = 0, *p;
	while (*T != NULL) {
		p = *T;
		*T = (struct xlist *)((long)s ^ (long)((*T)->next));
		s = p, free(p);
	}
}

int symm_list(struct xlist *T) { /*Проверяет, симметричен ли список*/
	if (T == NULL) return 0;
	struct xlist *b = 0, *e1 = T, *e2 = 0, *p;
	while (e1->next != e2) { /*Передвигаем е1 на последний элемент списка*/
		p = e1;
		e1 = (struct xlist *)((long)e2 ^ (long)(e1->next));
		e2 = p;
	}
	e2 = 0;
	while (T != e1 && T != e2) { /*идем одновременно с начала и с конца и сравниваем элементы*/
		if (T->elem != e1->elem) return 0;
		p = e1;
		e1 = (struct xlist *)((long)e2 ^ (long)(e1->next));
		e2 = p;
		p = T;
		T = (struct xlist *)((long)b ^ (long)(T->next));
		b = p;
	}
	return 1;
}

int delete_elem(struct xlist **T, int k) { /*удаляет из списка первое вхождение элемента k*/
	if (*T == NULL) return 0;
	struct xlist *f;
	if ((*T)->elem == k) {
		f = *T;
		*T = (*T)->next;
		(*T)->next = (struct xlist *)((long)f ^ (long)((*T)->next));
		free(f);
		return 1;
	}
	struct xlist *s = 0, *p, *t = *T;
	while (t->elem != k && t) {
		p = t;
		t = (struct xlist *)((long)s ^ (long)(t->next));
		s = p;
	}
	if (t == NULL) return 0;
	p = (struct xlist *)((long)s ^ (long)(t->next)); /*в s - адрес предыдущего элемента списка, в p - адрес следующего*/
	s->next = (struct xlist *)((long)s->next ^ (long)t ^ (long)p);
	if (p != NULL) p->next = (struct xlist *)((long)p->next ^ (long)t ^ (long)s);
	free(t);
	return 1;
}