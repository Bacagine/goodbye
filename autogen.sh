#!/bin/sh
# 
# Developed by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
# 
# Date: 20/Feb/2021

autoheader
autoreconf --install
automake --add-missing
