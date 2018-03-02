
Debian
====================
This directory contains files used to package Transendd/Transend-qt
for Debian-based Linux systems. If you compile Transendd/Transend-qt yourself, there are some useful files here.

## Transend: URI support ##


Transend-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install Transend-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your Transendqt binary to `/usr/bin`
and the `../../share/pixmaps/Transend128.png` to `/usr/share/pixmaps`

Transend-qt.protocol (KDE)

