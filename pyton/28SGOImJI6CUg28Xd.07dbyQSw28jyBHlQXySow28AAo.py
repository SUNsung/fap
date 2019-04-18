
        
        with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    module_contents = [
    module_template + '\n' + getsource(InfoExtractor.suitable) + '\n',
    'class LazyLoadSearchExtractor(LazyLoadExtractor):\n    pass\n']
    
    # -- Options for HTML output ----------------------------------------------
    
            password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x0b\xe6\xa4\xd9z\x0e\xb8\xb9\xd0\xd4i_\x85\x1d\x99\x98_\xe5\x80\xe7.\xbf\xa5\x83'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 32))
        self.assertEqual(decrypted, self.secret_msg)
    
    
class YoutubeDL(youtube_dl.YoutubeDL):
    def __init__(self, *args, **kwargs):
        self.to_stderr = self.to_screen
        self.processed_info_dicts = []
        super(YoutubeDL, self).__init__(*args, **kwargs)
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['it']))
        self.assertEqual(md5(subtitles['it']), 'b1d90a98755126b61e667567a1f6680a')
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
        def _get_session_key(self):
        '''
        Instead of generating a random string, generate a secure url-safe
        base64-encoded string of data as our session key.
        '''
        return signing.dumps(
            self._session, compress=True,
            salt='django.contrib.sessions.backends.signed_cookies',
            serializer=self.serializer,
        )
    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
    from setuptools import setup, find_packages
setup(
    name = proj_info['name'],
    version = VERSION,
    
        mime, ext, size = url_info(real_url)
    
                type, ext, size = url_info(real_url)
    
    def ifeng_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
# old pattern /uuid.shtml
# now it could be #uuid
    id = r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', url)
    if id:
        return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
    
def hard_sigmoid(x):
    '''
    x = 0.                  x < -2.5
      = 1.                  x > 2.5
      = 0.2 * x + 0.5       otherwise
    '''
    x = (0.2 * x) + 0.5
    x = tf.clip_by_value(x, 0., 1.)
    return x
    
        s = pd.Series([1, 2, -1, 4])
    s[s < 0] = inc
    
        if not hasattr(command_class, command):
        raise NoSuchCommand(command, command_class)
    
        def format(self, record):
        if isinstance(record.msg, six.binary_type):
            record.msg = record.msg.decode('utf-8')
        message = super(ConsoleWarningFormatter, self).format(record)
        return '{0}{1}'.format(self.get_level_message(record), message)

    
    
def ignore_sigpipe():
    # Restore default behavior for SIGPIPE instead of raising
    # an exception when encountered.
    if not IS_WINDOWS_PLATFORM:
        signal.signal(signal.SIGPIPE, signal.SIG_DFL)

    
    It has been modified to mimic the behaviour of
https://golang.org/pkg/time/#ParseDuration
'''
# MIT LICENSE
#
# Permission is hereby granted, free of charge, to any person
# obtaining a copy of this software and associated documentation files
# (the 'Software'), to deal in the Software without restriction,
# including without limitation the rights to use, copy, modify, merge,
# publish, distribute, sublicense, and/or sell copies of the Software,
# and to permit persons to whom the Software is furnished to do so,
# subject to the following conditions:
#
# The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
# BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
# ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
# CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
from __future__ import absolute_import
from __future__ import unicode_literals
    
        def cherry_pick_prs(self, release_branch, ids):
        if not ids:
            return
        release_branch.checkout()
        for i in ids:
            try:
                i = int(i)
            except ValueError as e:
                raise ScriptError('Invalid PR id: {}'.format(e))
            print('Retrieving PR#{}'.format(i))
            pr = self.gh_repo.get_pull(i)
            patch_data = requests.get(pr.patch_url).text
            self.apply_patch(patch_data)
    
        if answer == 'y' or answer == 'yes':
        return True
    elif answer == 'n' or answer == 'no':
        return False
    elif answer == '':
        return default
    else:
        return None

    
        return create_custom_host_file(client, filename, content)

    
        def test_create_failure(self):
        with mock.patch('compose.service.Service.create_container', crash):
            with pytest.raises(Crash):
                self.project.up(strategy=ConvergenceStrategy.always)
    
        def test_format_call(self):
        prefix = '' if six.PY3 else 'u'
        expected = '(%(p)s'arg1', True, key=%(p)s'value')' % dict(p=prefix)
        actual = verbose_proxy.format_call(
            ('arg1', True),
            {'key': 'value'})