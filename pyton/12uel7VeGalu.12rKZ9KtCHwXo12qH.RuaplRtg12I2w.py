
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.SUPERVISOR)
    
        MOTORCYCLE = 0
    COMPACT = 1
    LARGE = 2
    
        def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
    
if __name__ == '__main__':
    HitCounts.run()

    
    from mrjob.job import MRJob
    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
    
class HashTable(object):
    
        def create_signature(self):
        # Create signature based on url and contents
        pass
    
            if error is None:
            # store the user id in a new session and return to the index
            session.clear()
            session['user_id'] = user['id']
            return redirect(url_for('index'))
    
        def logout(self):
        return self._client.get('/auth/logout')
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post['title'] == 'updated'
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
            :param resource: the name of the resource.  To access resources within
                         subfolders use forward slashes as separator.
        :param mode: resource file opening mode, default is 'rb'.
        '''
        if mode not in ('r', 'rb'):
            raise ValueError('Resources can only be opened for reading')
        return open(os.path.join(self.root_path, resource), mode)
    
    
class SecureCookieSessionInterface(SessionInterface):
    '''The default session interface that stores sessions in signed cookies
    through the :mod:`itsdangerous` module.
    '''
    #: the salt that should be applied on top of the secret key for the
    #: signing of cookie based sessions.
    salt = 'cookie-session'
    #: the hash function to use for the signature.  The default is sha1
    digest_method = staticmethod(hashlib.sha1)
    #: the name of the itsdangerous supported key derivation.  The default
    #: is hmac.
    key_derivation = 'hmac'
    #: A python serializer for the payload.  The default is a compact
    #: JSON derived serializer with support for some extra Python types
    #: such as datetime objects or tuples.
    serializer = session_json_serializer
    session_class = SecureCookieSession
    
    import numpy as np
import gc
from datetime import datetime
from sklearn.isotonic import isotonic_regression
from sklearn.utils.bench import total_seconds
import matplotlib.pyplot as plt
import argparse
    
        if dataset_name == 'shuttle':
        dataset = fetch_mldata('shuttle')
        X = dataset.data
        y = dataset.target
        # we remove data with label 4
        # normal data are then those of class 1
        s = (y != 4)
        X = X[s, :]
        y = y[s]
        y = (y != 1).astype(int)
    
        if args.plot is not None:
        max_val = getattr(args, args.plot)
        if args.plot in ('classes', 'samples'):
            min_val = 2
        else:
            min_val = 0
        steps = np.linspace(min_val, max_val, num=args.n_steps + 1)[1:]
        if args.plot in ('classes', 'samples'):
            steps = np.unique(np.round(steps).astype(int))
        setattr(args, args.plot, steps)
    
        results = defaultdict(lambda: [])
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
    import time
    
    ###############################################################################
clf = SGDRegressor(penalty='l1', alpha=.2, fit_intercept=True, max_iter=2000,
                   tol=None)
clf.fit(X_train, y_train)
print('model sparsity: %f' % sparsity_ratio(clf.coef_))
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (3 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    from scrapy.commands import ScrapyCommand
from scrapy.contracts import ContractsManager
from scrapy.utils.misc import load_object
from scrapy.utils.conf import build_component_list
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
        def long_desc(self):
        return 'Run the spider defined in the given file'
    
        def update_vars(self, vars):
        '''You can use this function to update the Scrapy objects that will be
        available in the shell
        '''
        pass
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
        def __init__(self, crawler):
        self._crawler = crawler
        self._schemes = {}  # stores acceptable schemes on instancing
        self._handlers = {}  # stores instanced handlers for schemes
        self._notconfigured = {}  # remembers failed handlers
        handlers = without_none_values(
            crawler.settings.getwithbase('DOWNLOAD_HANDLERS'))
        for scheme, clspath in six.iteritems(handlers):
            self._schemes[scheme] = clspath
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
    
site_info = 'coub.com'
download = coub_download
download_playlist = playlist_not_supported('coub')

    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
        bokecc_metas = matchall(content, bokecc_patterns)
    for meta in bokecc_metas:
        found = True
        bokecc.bokecc_download_by_id(meta[1], output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    
    def get_api_key(page):
    match = match1(page, pattern_inline_api_key)
    # this happens only when the url points to a gallery page
    # that contains no inline api_key(and never makes xhr api calls)
    # in fact this might be a better approch for getting a temporary api key
    # since there's no place for a user to add custom infomation that may
    # misguide the regex in the homepage
    if not match:
        return match1(get_html('https://flickr.com'), pattern_inline_api_key)
    return match
    
        # Test an invalid call (bpo-34125)
    def test_unbound_method_no_args(self):
        kwargs = {}
        def f(p):
            dict.get(**kwargs)
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident)])
    
    
supports_unicode_filenames = (sys.platform == 'darwin')
    
    from collections import namedtuple
import os
import platform
import re
import subprocess
import sys
    
        def c_locale_get_error_handler(self, locale, isolated=False, encoding=None):
        # Force the POSIX locale
        env = os.environ.copy()
        env['LC_ALL'] = locale
        env['PYTHONCOERCECLOCALE'] = '0'
        code = '\n'.join((
            'import sys',
            'def dump(name):',
            '    std = getattr(sys, name)',
            '    print('%s: %s' % (name, std.errors))',
            'dump('stdin')',
            'dump('stdout')',
            'dump('stderr')',
        ))
        args = [sys.executable, '-X', 'utf8=0', '-c', code]
        if isolated:
            args.append('-I')
        if encoding is not None:
            env['PYTHONIOENCODING'] = encoding
        else:
            env.pop('PYTHONIOENCODING', None)
        p = subprocess.Popen(args,
                              stdout=subprocess.PIPE,
                              stderr=subprocess.STDOUT,
                              env=env,
                              universal_newlines=True)
        stdout, stderr = p.communicate()
        return stdout
    
    # Simple class representing a record in our database.
MemoRecord = namedtuple('MemoRecord', 'key, task')
    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    def test():
    PROCESSES = 4
    print('Creating pool with %d processes\n' % PROCESSES)
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    
  def Response( self ):
    return {
      'completions': self._results,
      'completion_start_column': self.request_data[ 'start_column' ]
    }
    
    
  def No_Insertion_Text_test( self ):
    self._Check( 0, {
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : '',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0'
    } )

    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
    
@YouCompleteMeInstance()
@patch.object( ycm_buffer_module,
               'DIAGNOSTIC_UI_ASYNC_FILETYPES',
               [ 'ycmtest' ] )
@patch( 'ycm.youcompleteme.YouCompleteMe.FiletypeCompleterExistsForFiletype',
        return_value = True )
@patch( 'ycm.client.base_request._ValidateResponseObject', return_value = True )
@patch( 'ycm.client.base_request.BaseRequest.PostDataToHandlerAsync' )
@patch( 'ycm.client.messages_request._HandlePollResponse' )
def YouCompleteMe_OnPeriodicTick_ValidResponse_test( ycm,
                                                     handle_poll_response,
                                                     post_data_to_handler_async,
                                                     *args ):