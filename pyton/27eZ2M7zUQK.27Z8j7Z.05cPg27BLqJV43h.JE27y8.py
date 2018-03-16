
        
            entry = entry_template.replace('@TIMESTAMP@', timestamp)
    entry = entry.replace('@VERSION@', v)
    entries.append(entry)
    
    from test.helper import try_rm
    
            def _find_spec(key):
            m = re.search(
                r'(?m)^//\s*%s:\s*(.*?)\n' % re.escape(key), as_content)
            if not m:
                raise ValueError('Cannot find %s in %s' % (key, testfile))
            return json.loads(m.group(1))
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
    import re
    
            return {
            'id': video_id,
            'url': video_url,
            'ext': 'mp4',
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'categories': categories,
            'duration': duration,
            'view_count': view_count,
            'age_limit': 18,
        }

    
        def _real_extract(self, url):
        # URLs end with [uploader name]/[uploader title]
        # this title is whatever the user types in, and is rarely
        # the proper song title.  Real metadata is in the api response
        album_url_tag = self._match_id(url)
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
    UNICODE = FILE_CONTENT

    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
            if ext == '.htm':  # Python 3
            ext = '.html'
    
        # By default the `-a` argument is parsed for `username:password`.
    # Set this to `False` to disable the parsing and error handling.
    auth_parse = True
    
    
CLIENT_CERT = os.path.join(TESTS_ROOT, 'client_certs', 'client.crt')
CLIENT_KEY = os.path.join(TESTS_ROOT, 'client_certs', 'client.key')
CLIENT_PEM = os.path.join(TESTS_ROOT, 'client_certs', 'client.pem')
    
        def save(self):
        self['__meta__'] = {
            'httpie': __version__
        }
        if self.helpurl:
            self['__meta__']['help'] = self.helpurl
    
                else:
                # Set the URL correctly
                self.args.url = self.args.method
                # Infer the method
                has_data = (
                    (not self.args.ignore_stdin and
                     not self.env.stdin_isatty) or
                    any(item.sep in SEP_GROUP_DATA_ITEMS
                        for item in self.args.items)
                )
                self.args.method = HTTP_POST if has_data else HTTP_GET
    
    
#
# Backwards compat functions.  Some modules include md5s in their return values
# Continue to support that for now.  As of ansible-1.8, all of those modules
# should also return 'checksum' (sha1 for now)
# Do not use md5 unless it is needed for:
# 1) Optional backwards compatibility
# 2) Compliance with a third party protocol
#
# MD5 will not work on systems which are FIPS-140-2 compliant.
#
    
            with self.assertRaises(GCPInvalidURLError) as cm:
            GCPUtils.parse_gcp_url(no_projects_input_url)
        self.assertTrue(cm.exception, GCPInvalidURLError)
    
            if opts.pdb:
            failure.startDebugMode()
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
            def eb_wrapper(failure):
            case = _create_testcase(method, 'errback')
            exc_info = failure.value, failure.type, failure.getTracebackObject()
            results.addError(case, exc_info)
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# No imports from `future` because when this is loaded, sys.path hasn't been set
# up yet!
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
    TIMEOUT_SECONDS = 0.1
    
    import time
from threading import Thread
from ycm.client.base_request import BaseRequest, HandleServerException
    
      for filter_type in iterkeys( config ):
    compiler = FILTER_COMPILERS.get( filter_type )