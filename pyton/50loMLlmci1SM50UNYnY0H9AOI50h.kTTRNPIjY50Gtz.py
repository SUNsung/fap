
        
            for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
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
    
    
def get_base_name(base):
    if base is InfoExtractor:
        return 'LazyLoadExtractor'
    elif base is SearchInfoExtractor:
        return 'LazyLoadSearchExtractor'
    else:
        return base.__name__
    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
    from youtube_dl.aes import aes_decrypt, aes_encrypt, aes_cbc_decrypt, aes_cbc_encrypt, aes_decrypt_text
from youtube_dl.utils import bytes_to_intlist, intlist_to_bytes
import base64
    
    
def runtest(ns, test):
    '''Run a single test.
    
    import xml.etree.ElementTree as ET
    
            self.abcd_parent = ErrorRaisingArgumentParser(add_help=False)
        self.abcd_parent.add_argument('a')
        self.abcd_parent.add_argument('-b')
        c_group = self.abcd_parent.add_argument_group('c')
        c_group.add_argument('--d')
    
            class FloatSizeof:
            def __sizeof__(self):
                return 4.5
        self.assertRaises(TypeError, sys.getsizeof, FloatSizeof())
        self.assertIs(sys.getsizeof(FloatSizeof(), sentinel), sentinel)
    
        def get_output(self, *args, failure=False, **kw):
        kw = dict(self.DEFAULT_ENV, **kw)
        if failure:
            out = assert_python_failure(*args, **kw)
            out = out[2]
        else:
            out = assert_python_ok(*args, **kw)
            out = out[1]
        return out.decode().rstrip('\n\r')
    
        # compile the pattern
    _compile(code, p.data, flags)
    
    
# Split a path in a drive specification (a drive letter followed by a
# colon) and the path specification.
# It is always true that drivespec + pathspec == p
def splitdrive(p):
    '''Split a pathname into drive/UNC sharepoint and relative path specifiers.
    Returns a 2-tuple (drive_or_unc, path); either part may be empty.
    
        def read_text(self, encoding=None, errors=None):
        '''
        Open the file in text mode, read it, and close the file.
        '''
        with self.open(mode='r', encoding=encoding, errors=errors) as f:
            return f.read()
    
        def test_str_common(self):
        # Canonicalized paths roundtrip
        for pathstr in ('a', 'a/b', 'a/b/c', '/', '/a/b', '/a/b/c'):
            self._check_str(pathstr, (pathstr,))
        # Special case for the empty path
        self._check_str('.', ('',))
        # Other tests for str() are in test_equivalences()
    
    import unittest
import sys
from ctypes import *