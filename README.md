# Goodbye

Goodbye is a simple C program developed to study software packaging on linux systems

# Build and Install

`git clone https://github.com/Bacagine/goodbye.git`

`cd goodbye`

`./autogen.sh`

`./configure --prefix=/usr --mandir=/usr/share/man --docdir=/usr/share/doc`

`make && sudo make install`

# Generate a .deb package and install

`git clone https://github.com/Bacagine/goodbye.git`

`cd goodbye`

`./autogen.sh`

`./configure --prefix=/usr --mandir=/usr/share/man --docdir=/usr/share/doc`

`make`

`mkdir -p /tmp/goodbye/DEBIAN`

`cp control /tmp/goodbye/DEBIAN`

`make install DESTDIR=/tmp/goodbye`

`dpkg-deb /tmp/goodbye /tmp/goodbye.deb`

`apt-get install /tmp/goodbye.deb`
