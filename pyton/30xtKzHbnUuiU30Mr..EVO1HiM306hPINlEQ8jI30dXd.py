
        
        signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
            def report_warning(self, message):
            if re.match(regex, message):
                return
            old_report_warning(message)
        self.report_warning = types.MethodType(report_warning, self)
    
            retval = subprocess.call(args)
        if retval == 0:
            fsize = os.path.getsize(encodeFilename(tmpfilename))
            self.to_screen('\r[%s] %s bytes' % (args[0], fsize))
            self.try_rename(tmpfilename, filename)
            self._hook_progress({
                'downloaded_bytes': fsize,
                'total_bytes': fsize,
                'filename': filename,
                'status': 'finished',
            })
            return True
        else:
            self.to_stderr('\n')
            self.report_error('%s exited with code %d' % (args[0], retval))
            return False

    
            # Video URL construction algorithm is reverse-engineered from cwhplayer.swf
        rtmp_url = 'rtmp://camwithher.tv/clipshare/%s' % (
            ('mp4:%s.mp4' % flv_id) if int(flv_id) > 2010 else flv_id)
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
    This module handles import compatibility issues between Python 2 and
Python 3.
'''
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    
class InvalidHeader(RequestException, ValueError):
    '''The header value provided was somehow invalid.'''
    
        def __len__(self):
        '''Return a count of messages in the mailbox.'''
        self._lookup()
        return len(self._toc)
    
    
class _GeneratorContextManager(_GeneratorContextManagerBase,
                               AbstractContextManager,
                               ContextDecorator):
    '''Helper for @contextmanager decorator.'''
    
        def markup(self, text, escape=None, funcs={}, classes={}, methods={}):
        '''Mark up some plain text, given a context of symbols to look for.
        Each context dictionary maps object names to anchor names.'''
        escape = escape or self.escape
        results = []
        here = 0
    
            from ctypes import _pointer_type_cache
        del _pointer_type_cache[Table]
    
    # A list of ignored prefixes for module index sorting.
#modindex_common_prefix = []
    
        def test_exception_with_success(self):
        def notification():
            # Wait until the main thread is waiting for the exception.
            time.sleep(1)
            with f1._condition:
                f1._state = FINISHED
                f1._exception = IOError()
                f1._condition.notify_all()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      opts = { 'filter_diagnostics' : {
    'java,c,cs' : { 'regex' : '.*taco.*' } } }
    
      raise RuntimeError( 'Cannot find Python 2.7 or 3.4+. '
                      'Set the 'g:ycm_server_python_interpreter' option '
                      'to a Python interpreter path.' )
    
    python_path = []
for folder in os.listdir( DIR_OF_THIRD_PARTY ):
  python_path.append( p.abspath( p.join( DIR_OF_THIRD_PARTY, folder ) ) )
for folder in os.listdir( DIR_OF_YCMD_THIRD_PARTY ):
  # We skip python-future because it needs to be inserted in sys.path AFTER
  # the standard library imports but we can't do that with PYTHONPATH because
  # the std lib paths are always appended to PYTHONPATH. We do it correctly in
  # prod in ycmd/utils.py because we have access to the right sys.path.
  # So for dev, we rely on python-future being installed correctly with
  #   pip install -r test_requirements.txt
  #
  # Pip knows how to install this correctly so that it doesn't matter where in
  # sys.path the path is.
  if folder == 'python-future':
    continue
  python_path.append( p.abspath( p.join( DIR_OF_YCMD_THIRD_PARTY, folder ) ) )
if os.environ.get( 'PYTHONPATH' ):
  python_path.append( os.environ[ 'PYTHONPATH' ] )
os.environ[ 'PYTHONPATH' ] = os.pathsep.join( python_path )
    
            :arg httputil.HTTPServerRequest request: current HTTP request.
        :arg kwargs: additional keyword arguments passed by routing implementation.
        :returns: an instance of `~.httputil.HTTPMessageDelegate` that will be used to
            process the request.
        '''
        raise NotImplementedError()
    
        @gen_test
    def test_task_done(self):
        q = self.queue_class()
        for i in range(100):
            q.put_nowait(i)