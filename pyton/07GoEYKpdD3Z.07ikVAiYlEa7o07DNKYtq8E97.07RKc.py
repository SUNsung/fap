
        
                # Load GoAgent CA
        with open(CertUtil.ca_keyfile, 'rb') as fp:
            content = fp.read()
        ca = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_privatekey = OpenSSL.crypto.load_privatekey(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_thumbprint = ca.digest('sha1')
        CertUtil.ca_subject = ca.get_subject()
        ca_cert_error = True
        if os.path.exists(CertUtil.ca_certfile):
            with open(CertUtil.ca_certfile, 'rb') as fp:
                ca_cert_error = fp.read() not in content
        if ca_cert_error:
            with open(CertUtil.ca_certfile, 'wb') as fp:
                fp.write(OpenSSL.crypto.dump_certificate(OpenSSL.crypto.FILETYPE_PEM, ca))
    
                    # not in range and not EOF/EOT, must be invalid symbol
                self.noViableAlt(s, input)
                return 0
    
    
    def rewind(self, marker=None):
        '''
        Reset the stream so that next call to index would return marker.
        The marker will usually be index() but it doesn't have to be.  It's
        just a marker to indicate what state the stream was in.  This is
        essentially calling release() and seek().  If there are markers
        created after this marker argument, this routine must unroll them
        like a stack.  Assume the state the stream was in when this marker
        was created.
    
            return '[@%d,%d:%d=%r,<%d>%s,%d:%d]' % (
            self.index,
            self.start, self.stop,
            txt,
            self.type, channelStr,
            self.line, self.charPositionInLine
            )
    
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
    ConfigDialog_spec = {
    'file': 'configdialog',
    'kwds': {'title': 'ConfigDialogTest',
             '_htest': True,},
    'msg': 'IDLE preferences dialog.\n'
           'In the 'Fonts/Tabs' tab, changing font face, should update the '
           'font face of the text in the area below it.\nIn the '
           ''Highlighting' tab, try different color schemes. Clicking '
           'items in the sample program should update the choices above it.'
           '\nIn the 'Keys', 'General' and 'Extensions' tabs, test settings '
           'of interest.'
           '\n[Ok] to close the dialog.[Apply] to apply the settings and '
           'and [Cancel] to revert all changes.\nRe-run the test to ensure '
           'changes made have persisted.'
    }
    
        def verify_code(self, code_object, *, bytecode_written=False):
        super().verify_code(code_object)
        if bytecode_written:
            self.assertIn(self.cached, self.loader.written)
            data = bytearray(self.util.MAGIC_NUMBER)
            data.extend(self.init._pack_uint32(0))
            data.extend(self.init._pack_uint32(self.loader.source_mtime))
            data.extend(self.init._pack_uint32(self.loader.source_size))
            data.extend(marshal.dumps(code_object))
            self.assertEqual(self.loader.written[self.cached], bytes(data))
    
            '''
        endtime = None
        waittime = timeout
        result = predicate()
        while not result:
            if waittime is not None:
                if endtime is None:
                    endtime = _time() + waittime
                else:
                    waittime = endtime - _time()
                    if waittime <= 0:
                        break
            self.wait(waittime)
            result = predicate()
        return result
    
    def python_implementation():
    
    def _unparse_datetime(dt, legacy=False):
    '''Format a date or datetime object as a pair of (date, time) strings
    in the format required by the NEWNEWS and NEWGROUPS commands.  If a
    date object is passed, the time is assumed to be midnight (00h00).
    
    
@need_c_queue
class CPriorityQueueTest(PriorityQueueTest, unittest.TestCase):
    queue = c_queue