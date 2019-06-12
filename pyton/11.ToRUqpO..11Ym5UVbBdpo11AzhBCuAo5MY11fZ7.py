
        
        import numpy as np
    
    from __future__ import print_function
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
    
def testMap():
    check(b'\x96'
          b'\xde\x00\x00'
          b'\xde\x00\x01\xc0\xc2'
          b'\xde\x00\x02\xc0\xc2\xc3\xc2'
          b'\xdf\x00\x00\x00\x00'
          b'\xdf\x00\x00\x00\x01\xc0\xc2'
          b'\xdf\x00\x00\x00\x02\xc0\xc2\xc3\xc2', ({}, {None: False},
                                                    {True: False,
                                                     None: False}, {},
                                                    {None: False},
                                                    {True: False,
                                                     None: False}))

    
    fig.savefig('pandas_logo.svg')
fig.savefig('pandas_logo.png')

    
    
def test_bin8():
    header = b'\xc4'
    data = b''
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 2
    assert b[0:2] == header + b'\x00'
    assert b[2:] == data
    assert unpackb(b) == data
    
    
def test_read_map_header():
    unpacker = Unpacker()
    unpacker.feed(packb({'a': 'A'}))
    assert unpacker.read_map_header() == 1
    assert unpacker.unpack() == B'a'
    assert unpacker.unpack() == B'A'
    try:
        unpacker.unpack()
        assert 0, 'should raise exception'
    except OutOfData:
        assert 1, 'okay'
    
        # 5 ok for read_size=16, while 6 glibc detected *** python: double free or
    # corruption (fasttop):