#/bin/sh

#echo "libtoolize"
#libtoolize
echo "aclocal"
aclocal
echo "autoconf"
autoconf
echo "autoheader"
autoheader
echo "automake"
automake --add-missing
