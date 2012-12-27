all: thinkcaps

thinkcaps: thinkcaps.c config.h
	gcc -lX11 thinkcaps.c -o thinkcaps

clean:
	rm -f thinkcaps
