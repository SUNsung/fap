
        
            item_ok = SectionName.entry_ok  # localize for test override
    
    import os
import time
import calendar
import socket
import errno
import copy
import warnings
import email
import email.message
import email.generator
import io
import contextlib
try:
    import fcntl
except ImportError:
    fcntl = None
    
            self.assertEqual(format(1.5+3j, '20.2f'), '          1.50+3.00j')
        self.assertEqual(format(1.5+3j, '>20.2f'), '          1.50+3.00j')
        self.assertEqual(format(1.5+3j, '<20.2f'), '1.50+3.00j          ')
        self.assertEqual(format(1.5e20+3j, '<20.2f'), '150000000000000000000.00+3.00j')
        self.assertEqual(format(1.5e20+3j, '>40.2f'), '          150000000000000000000.00+3.00j')
        self.assertEqual(format(1.5e20+3j, '^40,.2f'), '  150,000,000,000,000,000,000.00+3.00j  ')
        self.assertEqual(format(1.5e21+3j, '^40,.2f'), ' 1,500,000,000,000,000,000,000.00+3.00j ')
        self.assertEqual(format(1.5e21+3000j, ',.2f'), '1,500,000,000,000,000,000,000.00+3,000.00j')
    
        def test_format(self):
        self.assertEqual('%d' % False, '0')
        self.assertEqual('%d' % True, '1')
        self.assertEqual('%x' % False, '0')
        self.assertEqual('%x' % True, '1')
    
    from concurrent.futures import _base
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
    from ycm.client.debug_info_request import FormatDebugInfoResponse
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa