
        
        try:
    from .lazy_extractors import *
    from .lazy_extractors import _ALL_CLASSES
    _LAZY_LOADER = True
except ImportError:
    _LAZY_LOADER = False
    from .extractors import *
    
    
def _is_tar_extract(cmd):
    if '--extract' in cmd:
        return True
    
    import re
    
    #############################################
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
        def construct_yaml_str(self, node, unsafe=False):
        # Override the default string handling function
        # to always return unicode objects
        value = self.construct_scalar(node)
        ret = AnsibleUnicode(value)
    
        def flush(self):
        '''Write any pending changes to the disk.'''
        return
    
            # C function: METH_VARARGS
        (dir, (1,), IGNORE_RESULT),
    
    rx = re.compile(r'\((\S+).py, line (\d+)')
    
        def test_is_symlink(self):
        P = self.cls(BASE)
        self.assertFalse((P / 'fileA').is_symlink())
        self.assertFalse((P / 'dirA').is_symlink())
        self.assertFalse((P / 'non-existing').is_symlink())
        self.assertFalse((P / 'fileA' / 'bah').is_symlink())
        if support.can_symlink():
            self.assertTrue((P / 'linkA').is_symlink())
            self.assertTrue((P / 'linkB').is_symlink())
            self.assertTrue((P/ 'brokenLink').is_symlink())
    
        def open_resource(self, resource):
        fullname_as_path = self.fullname.replace('.', '/')
        path = f'{fullname_as_path}/{resource}'
        try:
            return BytesIO(self.zipimporter.get_data(path))
        except OSError:
            raise FileNotFoundError(path)
    
        base = 'src/sentry/locale'
    for locale in os.listdir(base):
        fn = os.path.join(base, locale, 'LC_MESSAGES', 'django.po')
        if not os.path.isfile(fn):
            continue
    
    try:
    import queue
except ImportError:
    import Queue as queue
    
    def sequential():
    return list(map(is_prime, PRIMES))
    
    
def MockAsyncServerResponseDone( response ):
  '''Return a fake future object that is complete with the supplied response
  message. Suitable for mocking a response future within a client request. For
  example:
    
    
  def _HandleMessageResponse( self ):
    vimsupport.PostVimMessage( self._response[ 'message' ], warning = False )