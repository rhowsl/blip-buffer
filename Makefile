CC=/usr/bin/gcc
CXX=/usr/bin/g++
CFLAGS=-I. -L. -lm -O0 -fpermissive

blipbuffer:
	mkdir -p bin
	$(CXX) $(CFLAGS) Blip_Buffer.cpp -shared -o bin/libblipbuffer.so
	$(CXX) $(CFLAGS) blipbuffer_c.c -shared -o bin/libblipbuffer_c.so
clean:
	rm -rv bin

