#!/usr/bin/env sh
#
aclocal && autoconf && automake --add-missing

autoreconf -i -v && ./configure

exit 0
