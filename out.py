#! /usr/bin/env python
import sys
f = open('data.txt', 'w')
input = raw_input()
f.write(input)  # python will convert \n to os.linesep
f.close()  # you can omit in most cases as the destructor will call it
