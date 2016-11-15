from example import int_array, set_array, get_array, print_id

size = 10

a = int_array(size)

for i in range(size):
    set_array(a, i, i * 10)

print(get_array(a, 5))

print_id(a, size)
