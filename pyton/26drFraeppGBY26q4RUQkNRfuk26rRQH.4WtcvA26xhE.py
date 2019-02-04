
        
        
def win_service_start(service_name, real_main):
    try:
        cb = START_CALLBACK(
            functools.partial(win_service_main, service_name, real_main))
        dispatch_table = _ctypes_array(SERVICE_TABLE_ENTRY, [
            SERVICE_TABLE_ENTRY(
                service_name,
                cb
            ),
            SERVICE_TABLE_ENTRY(None, ctypes.cast(None, START_CALLBACK))
        ])
    
    
def main():
    parser = optparse.OptionParser(usage='%prog CHANGELOG VERSION BUILDPATH')
    options, args = parser.parse_args()
    if len(args) != 3:
        parser.error('Expected a version and a build directory')
    
    secret_msg = b'Secret message goes here'
    
    entries = []
for v in versions:
    fields = v.split('.')
    year, month, day = map(int, fields[:3])
    faked = 0
    patchlevel = 0
    while True:
        try:
            datetime.date(year, month, day)
        except ValueError:
            day -= 1
            faked += 1
            assert day > 0
            continue
        break
    if len(fields) >= 4:
        try:
            patchlevel = int(fields[3])
        except ValueError:
            patchlevel = 1
    timestamp = '%04d-%02d-%02dT00:%02d:%02dZ' % (year, month, day, faked, patchlevel)
    
    import io
import optparse
    
    import itertools
import json
import os
import re
import sys
    
    
from youtube_dl import YoutubeDL