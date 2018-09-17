
Debian
====================
This directory contains files used to package solarisd/solaris-qt
for Debian-based Linux systems. If you compile solarisd/solaris-qt yourself, there are some useful files here.

## solaris: URI support ##


solaris-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install solaris-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your solarisqt binary to `/usr/bin`
and the `../../share/pixmaps/solaris128.png` to `/usr/share/pixmaps`

solaris-qt.protocol (KDE)

