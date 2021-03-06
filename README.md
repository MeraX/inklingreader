InklingReader
==============

This project is an attempt to create a GNU/Linux-friendly version of the Wacom 
Inkling SketchManager. Instead of integrating with proprietary programs, this
program aims to be compatible with free software alternatives like Inkscape.

The program can:

* Display WPI files
* Merge WPI files
* Export to Inkscape SVG (preserving layers), PDF and PNG
* Automatically use different colors when the "new layer" is pressed multiple times.


Screenshot
----------

![InklingReader screenshot](http://roelj.com/Inkling.png)

Dependencies
------------

Make sure you have the following libraries, development packages and build 
tools installed:

* GCC
* Make
* Gtk+-3.0, GLib-2.0 and Cairo
* Librsvg-2.0

Tested distributions
--------------------

The software is built and tested on:

* Debian 7.3, 7.4
* CrunchBang Linux 11
* Fedora 20
* Ubuntu 12.04, 13.04

Since the program uses only widely available libraries it should run OK 
on almost every GNU/Linux distribution. If you have problems getting it
to work on yours, let us know.

Contributing
------------

InklingReader can use help! If you're interested in helping, here's a list 
of things you could do:

* Make use of Autotools to build InklingReader
* Package InklingReader for any distribution
* Request features
* Implement features


License
-------

This project's code is licensed under the GPLv3 or any later version.
