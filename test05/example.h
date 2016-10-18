typedef struct _Data
{
    int id;
    char *name;
} Data;

Data *data_new(int id, char *name);
void data_print(Data *d);
