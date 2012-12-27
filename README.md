Thinkcaps
=========

Use other lights as a caps lock indicator on newer thinkpads which no longer have a hardware caps lock indicator

Installation
-------------

Thinkcaps depends on the thinkpad-acpi driver and X11 (duh).

```
make
make install
```

Make install will copy the executable to /usr/local/sbin and *set the setuid bit!*

Then simply add it to your xinitrc file, or create a new one if you don't already have one:

```
echo "thinkcaps &" >> ~/.xinitrc
