from example import *

d = Data()
set_array(d)
print_array(d)

# arrayはignoreしたため直接アクセスはできない
print get_array(d.array, 5, 5, 5)
