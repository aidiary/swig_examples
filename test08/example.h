typedef struct _Foo
{
    int id;
} Foo;

typedef struct _Bar
{
    int id;
} Bar;

void set(int id, Foo *pfoo, Bar *pbar);
void print_id(Foo *pfoo, Bar *pbar);
