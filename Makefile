all: thinkcaps

thinkcaps: thinkcaps.c config.h
	gcc -lX11 thinkcaps.c -o thinkcaps

install:
	install -m 4500 thinkcaps /usr/local/sbin/

clean:
	rm -f thinkcaps
