
        
        # Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
            writeln(self.separator2)
        writeln('Ran %d contract%s in %.3fs' % (run, plural, stop - start))
        writeln()
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
    # The name of an image file (within the static path) to use as favicon of the
# docs.  This file should be a Windows icon file (.ico) being 16x16 or 32x32
# pixels large.
#html_favicon = None
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_empty(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': ''})
        self.assertFalse(self.validator.hsts('test.com'))
    
    # If false, no module index is generated.
#latex_domain_indices = True
    
        @classmethod
    def fromfile(cls, fileobj):
        if fileobj.read(4).decode() != 'TZif':
            raise ValueError('not a zoneinfo file')
        fileobj.seek(20)
        header = fileobj.read(24)
        tzh = (tzh_ttisgmtcnt, tzh_ttisstdcnt, tzh_leapcnt,
               tzh_timecnt, tzh_typecnt, tzh_charcnt) = struct.unpack('>6l', header)
        transitions = array('i')
        transitions.fromfile(fileobj, tzh_timecnt)
        if sys.byteorder != 'big':
            transitions.byteswap()
    
    # maximal line length when calling readline(). This is to prevent
# reading arbitrary length lines. RFC 3977 limits NNTP line length to
# 512 characters, including CRLF. We have selected 2048 just to be on
# the safe side.
_MAXLINE = 2048
    
        def handle_get(self):
        '''Handles the HTTP GET request.
    
        def assertAlmostEqual(self, a, b):
        if isinstance(a, complex):
            if isinstance(b, complex):
                unittest.TestCase.assertAlmostEqual(self, a.real, b.real)
                unittest.TestCase.assertAlmostEqual(self, a.imag, b.imag)
            else:
                unittest.TestCase.assertAlmostEqual(self, a.real, b)
                unittest.TestCase.assertAlmostEqual(self, a.imag, 0.)
        else:
            if isinstance(b, complex):
                unittest.TestCase.assertAlmostEqual(self, a, b.real)
                unittest.TestCase.assertAlmostEqual(self, 0., b.imag)
            else:
                unittest.TestCase.assertAlmostEqual(self, a, b)
    
            for fn in (posix.lchflags, chflags_nofollow):
            # ZFS returns EOPNOTSUPP when attempting to set flag UF_IMMUTABLE.
            flags = dummy_symlink_st.st_flags | stat.UF_IMMUTABLE
            try:
                fn(_DUMMY_SYMLINK, flags)
            except OSError as err:
                if err.errno != errno.EOPNOTSUPP:
                    raise
                msg = 'chflag UF_IMMUTABLE not supported by underlying fs'
                self.skipTest(msg)
            try:
                new_testfn_st = os.stat(support.TESTFN)
                new_dummy_symlink_st = os.lstat(_DUMMY_SYMLINK)
    
        exception = ['<p>%s: %s' % (strong(pydoc.html.escape(str(etype))),
                                pydoc.html.escape(str(evalue)))]
    for name in dir(evalue):
        if name[:1] == '_': continue
        value = pydoc.html.repr(getattr(evalue, name))
        exception.append('\n<br>%s%s&nbsp;=\n%s' % (indent, name, value))
    
    class StructFieldsTestCase(unittest.TestCase):
    # Structure/Union classes must get 'finalized' sooner or
    # later, when one of these things happen:
    #
    # 1. _fields_ is set.
    # 2. An instance is created.
    # 3. The type is used as field of another Structure/Union.
    # 4. The type is subclassed
    #
    # When they are finalized, assigning _fields_ is no longer allowed.