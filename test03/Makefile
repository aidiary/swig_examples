all:
	swig -python example.i
	gcc -c example_wrap.c -IC:/Python27/include -DMS_WIN64
	gcc -shared -o _example.pyd example_wrap.o -LC:/Python27/libs -lpython27

clean:
	@rm -rf *.o
	@rm -rf *_wrap.*
	@rm -rf *.pyc *.pyd
	@rm -rf *.gch
	@rm -rf example.py
