#include "system.h"

void S_alloc_init() {


}

void S_reset_allocation_pointer(ptr tc) {
  (void)tc;
}

void S_reset_scheme_stack(ptr tc, iptr n) {
  (void)tc;
  (void)n;
}

ptr S_code(ptr tc, iptr type, iptr n) {
  (void)tc;
  (void)type;
  (void)n;
  return NULL;
}

ptr S_relocation_table(iptr n) {
  (void)n;
  return NULL;
}

ptr Sstring_utf8(const char *s, iptr n) {
  (void)s;
  (void)n;
  return NULL;
}

ptr S_exactnum(ptr a, ptr b) {
  (void)a;
  (void)b;
  return NULL;
}

ptr Sflonum(double x) {
  (void)x;
  return NULL;
}

ptr S_closure(ptr cod, iptr n) {
  (void)cod;
  (void)n;
  return NULL;
}

ptr S_weak_cons(ptr car, ptr cdr) {
  (void)car;
  (void)cdr;
  return NULL;
}

ptr S_inexactnum(double rp, double ip)  {
  (void)rp;
  (void)ip;
  return NULL;
}

ptr S_fxvector(iptr n) {
  (void)n;
  return NULL;
}

ptr S_record(iptr n) {
  (void)n;
  return NULL;
}

ptr S_cons_in(ISPC s, IGEN g, ptr car, ptr cdr) {
  (void)s;
  (void)g;
  (void)car;
  (void)cdr;
  return NULL;
}

ptr S_string(const char *s, iptr n) {
  (void)s;
  (void)n;
  return NULL;
}

ptr S_symbol(ptr name) {
  (void)name;
  return NULL;
}

ptr S_bignum(iptr n, IBOOL sign) {
  (void)n;
  (void)sign;
  return NULL;
}

ptr Sbox (ptr ref) {
  (void)ref;
  return NULL;
}

ptr Scons(ptr car, ptr cdr) {
  (void)car;
  (void)cdr;
  return NULL;
}

ptr S_rational(ptr n, ptr d) {
  (void)n;
  (void)d;
  return NULL;
}

ptr S_vector (iptr n) {
  (void)n;
  return NULL;
}

ptr S_mkcontinuation(ISPC s, IGEN g, ptr nuate, ptr stack, iptr length, iptr clength, ptr link, ptr ret, ptr winders) {
  (void)s;
  (void)g;
  (void)nuate;
  (void)stack;
  (void)length;
  (void)clength;
  (void)link;
  (void)ret;
  (void)winders;
  return NULL;
}

void S_protect(ptr *p) {
  (void)p;
}

ptr S_bytevector(iptr n) {
  (void)n;
  return NULL;
}

void S_scan_dirty(ptr **p, ptr **endp) {
  (void)p;
  (void)endp;
}

void S_dirty_set(ptr *loc, ptr x) {
    (void)loc;
    (void)x;
}

ptr S_find_more_room(ISPC s, IGEN g, iptr n, ptr old) {
  (void)s;
  (void)g;
  (void)n;
  (void)old;
  return NULL;
}

void S_get_more_room() {
}

void S_scan_remembered_set() {
}

ptr S_compute_bytes_allocated(ptr xg, ptr xs) {
  (void)xg;
  (void)xs;
  return NULL;
}

ptr S_null_immutable_fxvector() {
  return NULL;
}

ptr S_null_immutable_bytevector() {
  return NULL;
}

ptr S_null_immutable_string() {
  return NULL;
}

ptr S_thread(ptr xtc) {
  (void)xtc;
  return NULL;
}

ptr S_null_immutable_vector() {
  return NULL;
}

ptr S_tlc(ptr keyval, ptr ht, ptr next) {
  (void)keyval;
  (void)ht;
  (void)next;
  return NULL;
}
