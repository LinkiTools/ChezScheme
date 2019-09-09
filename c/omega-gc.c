#include "system.h"



void S_gc_init() {

}

void S_do_gc(IGEN mcg, IGEN tg) {
  (void)mcg;
  (void)tg;
}

void Scompact_heap() {
}

void Slock_object(ptr x) {
  (void)x;
}

void Sunlock_object(ptr x) {
  (void)x;
}

void S_register_child_process(INT child) {
  (void)child;
}

IBOOL Slocked_objectp(ptr x) {
  (void)x;
  return 1;
}

IGEN S_maxgen(void) {
  return 0;
}

void S_set_maxgen(IGEN g) {
  (void)g;
}

ptr S_locked_objects(void) {
  return NULL;
}

IGEN S_minfreegen(void) {
  return 0;
}

void S_set_minfreegen(IGEN g) {
  (void)g;
}

IBOOL S_enable_object_counts(void) {
  return 0;
}

void S_set_enable_object_counts(IBOOL eoc) {
  (void)eoc;
}

ptr S_object_counts(void) {
  return NULL;
}

ptr S_vector_in(ISPC s, IGEN g, iptr n) {
  (void)s;
  (void)g;
  (void)n;
  return NULL;
}
