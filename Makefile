CC=/usr/bin/gcc
CXX=/usr/bin/g++
CFLAGS=-I. -Lbuild/lib -lm -O0 -fpermissive

blipbuffer:
	mkdir -p build
	mkdir -p build/lib
	$(CXX) $(CFLAGS) Blip_Buffer.cpp -fPIC -shared -o build/lib/libblipbuffer.so
	$(CXX) $(CFLAGS) blipbuffer_c.c -lblipbuffer -flinker-output=dyn -fPIC -shared -o build/lib/libblipbuffer_c.so

clean:
	rm -rv build

