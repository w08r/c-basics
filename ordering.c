int foo(int *x) {
  while (!*x);
  return *x;
}

/* int main() { */
/*   int x; */
/*   foo(&x); */
/*   return 0; */
/* } */
