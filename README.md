# Goodbye

Goodbye is a simple C program developed to study software packaging on linux systems

To better understand my codes, read the README.md at [this link](https://github.com/Bacagine/Bacagine)

# Build and Install

```bash
$ git clone https://github.com/Bacagine/goodbye.git
$ cd goodbye
$ ./autogen.sh
$ ./configure --prefix=/usr --mandir=/usr/share/man --docdir=/usr/share/doc`
$ make && sudo make install`
```

# Generate a .deb package and install
```bash
$ git clone https://github.com/Bacagine/goodbye.git
$ cd goodbye
$ ./autogen.sh
$ ./configure --prefix=/usr --mandir=/usr/share/man --docdir=/usr/share/doc
$ make
$ mkdir -p /tmp/goodbye/DEBIAN
$ cp control /tmp/goodbye/DEBIAN
$ make install DESTDIR=/tmp/goodbye
$ dpkg-deb --build /tmp/goodbye /tmp/goodbye.deb
$ sudo apt-get install /tmp/goodbye.deb
```

