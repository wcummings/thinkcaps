#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#include <unistd.h>
#include "config.h"

#define ACPI_PATH	"/proc/acpi/ibm/led"
#define CAPSLOCK	0x01

void set_light(unsigned char light_num, unsigned char state) {
	FILE *fp = fopen(ACPI_PATH, "w");
	fprintf(fp, "%d %s\n", light_num, state ? "on" : "off");
	fclose(fp);
}

int main(void) {
	unsigned int state;
	Display* display = XOpenDisplay(0);

	while(1) {
		XkbGetIndicatorState(display, XkbUseCoreKbd, &state);
		set_light(LIGHT_NUM, (state & CAPSLOCK));
		usleep(100);
	}
}
