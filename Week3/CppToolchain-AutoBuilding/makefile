src=$(wildcard *.cpp)
obj=$(patsubst %.cpp, %.o, $(src))
source=$(wildcard ./include/*.h)
test=$(wildcard ./lib/*.a)
dest=display

cc=g++
macro=TEST3


$(dest): $(obj) $(test)
	$(cc) $^ -lGL -lglut -lGLU -o $(dest)
	@echo "type macro=TEST1 or TEST2 or TEST3 to generate different graph, default by TEST3"


$(obj): $(src) $(source)
	$(cc) -c $(src) -I ./include/ -D $(macro)



clean:
	rm $(obj)

