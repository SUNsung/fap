
        
            if RESULT and ('info_dict' not in test or 'age_limit' not in test['info_dict'] or
                   test['info_dict']['age_limit'] != 18):
        print('\nPotential missing age_limit check: {0}'.format(test['name']))
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    from youtube_dl.utils import intlist_to_bytes
from youtube_dl.aes import aes_encrypt, key_expansion
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
            if 'skip' in test_case:
            print_skipping(test_case['skip'])
            return
        for other_ie in other_ies:
            if not other_ie.working():
                print_skipping('test depends on %sIE, marked as not WORKING' % other_ie.ie_key())
                return
    
            jsi = JSInterpreter('var x5 = function(){return 42;}')
        self.assertEqual(jsi.call_function('x5'), 42)
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['en']))
        self.assertEqual(md5(subtitles['en']), 'c5593c193eacd353596c11c2d4f9ecc4')
    
        def save(self, must_create=False):
        super().save(must_create)
        self._cache.set(self.cache_key, self._session, self.get_expiry_age())
    
        def __getitem__(self, idx):
        # Prevent unnecessary reevaluation when accessing BoundField's attrs
        # from templates.
        if not isinstance(idx, (int, slice)):
            raise TypeError
        return self.subwidgets[idx]
    
        @staticmethod
    def get_linux_firefox_path():
        home_path = os.path.expanduser('~')
        firefox_path = os.path.join(home_path, '.mozilla/firefox')
        if not os.path.isdir(firefox_path):
            return
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
        deadline = URLFETCH_TIMEOUT
    validate_certificate = bool(int(kwargs.get('validate', 0)))
    accept_encoding = headers.get('Accept-Encoding', '')
    errors = []
    for i in xrange(int(kwargs.get('fetchmax', URLFETCH_MAX))):
        try:
            response = urlfetch.fetch(url, payload, fetchmethod, headers, allow_truncated=False, follow_redirects=False, deadline=deadline, validate_certificate=validate_certificate)
            break
        except apiproxy_errors.OverQuotaError as e:
            time.sleep(5)
        except urlfetch.DeadlineExceededError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DeadlineExceededError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.DownloadError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DownloadError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.ResponseTooLargeError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            response = e.response
            logging.error('ResponseTooLargeError(deadline=%s, url=%r) response(%r)', deadline, url, response)
            m = re.search(r'=\s*(\d+)-', headers.get('Range') or headers.get('range') or '')
            if m is None:
                headers['Range'] = 'bytes=0-%d' % int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE))
            else:
                headers.pop('Range', '')
                headers.pop('range', '')
                start = int(m.group(1))
                headers['Range'] = 'bytes=%s-%d' % (start, start+int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE)))
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.SSLCertificateError as e:
            errors.append('%r, should validate=0 ?' % e)
            logging.error('%r, deadline=%s', e, deadline)
        except Exception as e:
            errors.append(str(e))
            if i == 0 and method == 'GET':
                deadline = URLFETCH_TIMEOUT * 2
    else:
        start_response('500 Internal Server Error', [('Content-Type', 'text/html')])
        error_string = '<br />\n'.join(errors)
        if not error_string:
            logurl = 'https://appengine.google.com/logs?&app_id=%s' % os.environ['APPLICATION_ID']
            error_string = 'Internal Server Error. <p/>try <a href='javascript:window.location.reload(true);'>refresh</a> or goto <a href='%s' target='_blank'>appengine.google.com</a> for details' % logurl
        yield message_html('502 Urlfetch Error', 'Python Urlfetch Error: %r' % method,  error_string)
        raise StopIteration
    
    
    def __str__(self):
        if self.inserted is not None and self.token is not None:
            return 'MissingTokenException(inserted %r at %r)' % (
                self.inserted, self.token.text)
    
    
    def setTokenTypeChannel(self, ttype, channel):
        '''
        A simple filter mechanism whereby you can tell this token stream
        to force all tokens of type ttype to be on channel.  For example,
        when interpreting, we cannot exec actions so we need to tell
        the stream to force all WS and NEWLINE to be a different, ignored
        channel.
	'''
        
        self.channelOverrideMap[ttype] = channel
    
            txt = self.text
        if txt is not None:
            txt = txt.replace('\n','\\\\n')
            txt = txt.replace('\r','\\\\r')
            txt = txt.replace('\t','\\\\t')
        else:
            txt = '<no text>'
    
        def test_del___main__(self):
        # Issue #15001: PyRun_SimpleFileExFlags() did crash because it kept a
        # borrowed reference to the dict of __main__ module and later modify
        # the dict whereas the module was destroyed
        filename = support.TESTFN
        self.addCleanup(support.unlink, filename)
        with open(filename, 'w') as script:
            print('import sys', file=script)
            print('del sys.modules['__main__']', file=script)
        assert_python_ok(filename)
    
        def testSeekable(self):
        bz2f = BZ2File(BytesIO(self.DATA))
        try:
            self.assertTrue(bz2f.seekable())
            bz2f.read()
            self.assertTrue(bz2f.seekable())
        finally:
            bz2f.close()
        self.assertRaises(ValueError, bz2f.seekable)
    
        print('-' * 20)
    
    #
# Function used to calculate result
#
    
      Args:
    filename: The name of the current file.
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
    error: The function to call with any errors found.
  '''
  line = clean_lines.elided[linenum]
    
    
class PackException(Exception):
    pass
    
    align_1_checker_value = b'3'
align_1_offset = 32
align_1_length = 1
align_1_value = 4
u64_byte_checker_value = b'3'
align_2_offset = 35
align_2_length = 1
align_2_value = 4
endianness_offset = 37
endianness_length = 1
platform_offset = 39
platform_length = 1
encoding_offset = 70
encoding_length = 1
dataset_offset = 92
dataset_length = 64
file_type_offset = 156
file_type_length = 8
date_created_offset = 164
date_created_length = 8
date_modified_offset = 172
date_modified_length = 8
header_size_offset = 196
header_size_length = 4
page_size_offset = 200
page_size_length = 4
page_count_offset = 204
page_count_length = 4
sas_release_offset = 216
sas_release_length = 8
sas_server_type_offset = 224
sas_server_type_length = 16
os_version_number_offset = 240
os_version_number_length = 16
os_maker_offset = 256
os_maker_length = 16
os_name_offset = 272
os_name_length = 16
page_bit_offset_x86 = 16
page_bit_offset_x64 = 32
subheader_pointer_length_x86 = 12
subheader_pointer_length_x64 = 24
page_type_offset = 0
page_type_length = 2
block_count_offset = 2
block_count_length = 2
subheader_count_offset = 4
subheader_count_length = 2
page_meta_type = 0
page_data_type = 256
page_amd_type = 1024
page_metc_type = 16384
page_comp_type = -28672
page_mix_types = [512, 640]
subheader_pointers_offset = 8
truncated_subheader_id = 1
compressed_subheader_id = 4
compressed_subheader_type = 1
text_block_size_length = 2
row_length_offset_multiplier = 5
row_count_offset_multiplier = 6
col_count_p1_multiplier = 9
col_count_p2_multiplier = 10
row_count_on_mix_page_offset_multiplier = 15
column_name_pointer_length = 8
column_name_text_subheader_offset = 0
column_name_text_subheader_length = 2
column_name_offset_offset = 2
column_name_offset_length = 2
column_name_length_offset = 4
column_name_length_length = 2
column_data_offset_offset = 8
column_data_length_offset = 8
column_data_length_length = 4
column_type_offset = 14
column_type_length = 1
column_format_text_subheader_index_offset = 22
column_format_text_subheader_index_length = 2
column_format_offset_offset = 24
column_format_offset_length = 2
column_format_length_offset = 26
column_format_length_length = 2
column_label_text_subheader_index_offset = 28
column_label_text_subheader_index_length = 2
column_label_offset_offset = 30
column_label_offset_length = 2
column_label_length_offset = 32
column_label_length_length = 2
rle_compression = b'SASYZCRL'
rdc_compression = b'SASYZCR2'
    
    
def test_1():
    for o in [None, True, False, 0, 1, (1 << 6), (1 << 7) - 1, -1,
              -((1 << 5) - 1), -(1 << 5)]:
        check(1, o)
    
        pick_hash = run_cmd('git rev-parse %s' % pick_branch_name)[:8]
    clean_up()