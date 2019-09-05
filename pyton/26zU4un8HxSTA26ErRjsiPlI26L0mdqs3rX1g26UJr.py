
        
                video_info = self._download_json(
            'http://feeds.cbsn.cbsnews.com/rundown/story', display_id, query={
                'device': 'desktop',
                'dvr_slug': display_id,
            })
    
                c = f(c)
            d = ''
            for e in c:
                d += chr(e)
    
            nooverwrites_and_exists = (
            self.params.get('nooverwrites', False)
            and os.path.exists(encodeFilename(filename))
        )
    
            try:
            video = self._download_json(
                'https://api.redbull.tv/v3/products/' + video_id,
                video_id, note='Downloading video information',
                headers={'Authorization': token}
            )
        except ExtractorError as e:
            if isinstance(e.cause, compat_HTTPError) and e.cause.code == 404:
                error_message = self._parse_json(
                    e.cause.read().decode(), video_id)['error']
                raise ExtractorError('%s said: %s' % (
                    self.IE_NAME, error_message), expected=True)
            raise
    
            app_id = None
    
    
class SouthParkDeIE(SouthParkIE):
    IE_NAME = 'southpark.de'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.de/(?:clips|alle-episoden|collections)/(?P<id>.+?)(\?|#|$))'
    _FEED_URL = 'http://www.southpark.de/feeds/video-player/mrss/'
    
    
if len(sys.argv) <= 1:
    print('Specify the version number as parameter')
    sys.exit()
version = sys.argv[1]
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    import io
import optparse
import os
import sys
    
    **youtube-dl** \[OPTIONS\] URL [URL...]
    
    from __future__ import unicode_literals
    
    
class TestGetValidHistoryWithoutCurrent(object):
    @pytest.yield_fixture(autouse=True)
    def fail_on_warning(self):
        warnings.simplefilter('error')
        yield
        warnings.resetwarnings()
    
        def test_get_version(self, shell, Popen):
        Popen.return_value.stdout.read.side_effect = [b'fish, version 3.5.9\n']
        assert shell._get_version() == '3.5.9'
        assert Popen.call_args[0][0] == ['fish', '--version']
    
        def test_to_shell(self, shell):
        assert shell.to_shell('pwd') == 'pwd'
    
    
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, result', [
    ('vom file.py', ['vim file.py']),
    ('fucck', ['fsck']),
    ('got commit', ['git commit', 'go commit'])])
def test_get_new_command(script, result):
    assert get_new_command(Command(script, '')) == result

    
    
@pytest.mark.parametrize('script, pyenv_cmd', [
    ('pyenv globe', 'globe'),
    ('pyenv intall 3.8.0', 'intall'),
    ('pyenv list', 'list'),
])
def test_match(script, pyenv_cmd, output):
    assert match(Command(script, output=output))
    
    misspelled_subcommand = '''\
az provider: 'lis' is not in the 'az provider' command group. See 'az provider --help'.
    
            for index in range(num_batches):
            # get a batch of real images
            image_batch = x_train[index * batch_size:(index + 1) * batch_size]
            label_batch = y_train[index * batch_size:(index + 1) * batch_size]
    
    - RNNs are tricky. Choice of batch size is important,
choice of loss and optimizer is critical, etc.
Some configurations won't converge.
    
    
batch_size = 128
num_classes = 10
epochs = 100
(x_train, y_train), (x_test, y_test) = cifar10.load_data()
    
    
def test_deconv_length():
    assert conv_utils.deconv_length(None, 1, 7, 'same', None) is None
    assert conv_utils.deconv_length(224, 1, 7, 'same', None) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', None) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', None) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', None) == 67
    assert conv_utils.deconv_length(32, 1, 5, 'full', None) == 28
    assert conv_utils.deconv_length(32, 2, 5, 'full', None) == 59
    assert conv_utils.deconv_length(224, 1, 7, 'same', 0) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', 0) == 447
    assert conv_utils.deconv_length(224, 2, 7, 'same', 1) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', 0) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 0) == 67
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 1) == 68
    assert conv_utils.deconv_length(6, 1, 3, 'full', 0) == 4
    assert conv_utils.deconv_length(6, 2, 3, 'full', 1) == 10
    assert conv_utils.deconv_length(6, 2, 3, 'full', 2) == 11
    
        # - Produce data on 1 worker process, consume on main process:
    #   - Worker process runs generator
    #   - BUT on Windows, `multiprocessing` won't marshall generators across
    #     process boundaries -> make sure `predict_generator()` raises ValueError
    #     exception and does not attempt to run the generator.
    if os.name == 'nt':
        with pytest.raises(ValueError):
            model.predict_generator(custom_generator(),
                                    steps=STEPS,
                                    max_queue_size=10,
                                    workers=1,
                                    use_multiprocessing=True)
    else:
        model.predict_generator(custom_generator(),
                                steps=STEPS,
                                max_queue_size=10,
                                workers=1,
                                use_multiprocessing=True)
    
        if metrics_mode == 'list':
        model.compile(optimizer='sgd',
                      loss='binary_crossentropy',
                      metrics=['acc', metric_fn])
    elif metrics_mode == 'dict':
        model.compile(optimizer='sgd',
                      loss='binary_crossentropy',
                      metrics={'out': ['acc', metric_fn]})
    
        def predict_proba(self, x, batch_size=32, verbose=0):
        '''Generates class probability predictions for the input samples.
    
        @interfaces.legacy_embedding_support
    def __init__(self, input_dim, output_dim,
                 embeddings_initializer='uniform',
                 embeddings_regularizer=None,
                 activity_regularizer=None,
                 embeddings_constraint=None,
                 mask_zero=False,
                 input_length=None,
                 **kwargs):
        if 'input_shape' not in kwargs:
            if input_length:
                kwargs['input_shape'] = (input_length,)
            else:
                kwargs['input_shape'] = (None,)
        super(Embedding, self).__init__(**kwargs)
    
    
def gae_application(environ, start_response):
    cookie = environ.get('HTTP_COOKIE', '')
    options = environ.get('HTTP_X_GOA_OPTIONS', '')
    if environ['REQUEST_METHOD'] == 'GET' and not cookie:
        if '204' in environ['QUERY_STRING']:
            start_response('204 No Content', [])
            yield ''
        else:
            timestamp = long(os.environ['CURRENT_VERSION_ID'].split('.')[1])/2**28
            ctime = time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime(timestamp+8*3600))
            html = u'GoAgent Python Server %s \u5df2\u7ecf\u5728\u5de5\u4f5c\u4e86\uff0c\u90e8\u7f72\u65f6\u95f4 %s\n' % (__version__, ctime)
            start_response('200 OK', [('Content-Type', 'text/plain; charset=utf-8')])
            yield html.encode('utf8')
        raise StopIteration
    
    
@section Exceptions
    
        Errors from the lexer are never passed to the parser.  Either you want
    to keep going or you do not upon token recognition error.  If you do not
    want to continue lexing then you do not want to continue parsing.  Just
    throw an exception not under RecognitionException and Java will naturally
    toss you all the way out of the recognizers.  If you want to continue
    lexing then you should not throw an exception to the parser--it has already
    requested a token.  Keep lexing until you get a valid one.  Just report
    errors and keep going, looking for a valid token.
    '''
    
    def nextToken(self):
        '''Return a Token object from your input stream (usually a CharStream).
        
        Do not fail/return upon lexing error; keep chewing on the characters
        until you get a good one; errors are not passed through to the parser.
        '''
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    site_info = 'CNTV.com'
download = cntv_download
download_playlist = playlist_not_supported('cntv')

    
            for p in js_path:
            if 'mtool' in p or 'mcore' in p:
                js_text = get_content(p)
                hit = re.search(r'\(\'(.+?)\',(\d+),(\d+),\'(.+?)\'\.split\(\'\|\'\),\d+,\{\}\)', js_text)
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
    from ..activations import relu
from ..utils import get_wb, get_shape
    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b
    
        References:
        K.permute_dimensions()
    '''
    return tf.transpose(x, perm)
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()
    
            # Adding model 'EventTag'
        db.create_table(u'tagstore_eventtag', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('event_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')()),
            ('key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('value', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagValue'], db_column='value_id')),
            ('date_added', self.gf('django.db.models.fields.DateTimeField')(
                db_index=True)),
        ))
        db.send_create_signal('tagstore', ['EventTag'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['project_id',
        # 'event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['project_id', 'event_id', 'key_id', 'value_id'])
    
            # Changing field 'GroupTagValue.project_id'
        db.alter_column(u'tagstore_grouptagvalue', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
            # Adding model 'Nonce'
        db.create_table(
            'social_auth_nonce',
            (('id',
              self.gf('django.db.models.fields.AutoField')(
                  primary_key=True)),
                ('server_url',
                 self.gf('django.db.models.fields.CharField')(
                     max_length=NONCE_SERVER_URL_LENGTH)),
                ('timestamp',
                 self.gf('django.db.models.fields.IntegerField')()),
                ('salt',
                 self.gf('django.db.models.fields.CharField')(
                     max_length=40)),
             ))
        db.send_create_signal('social_auth', ['Nonce'])
    
            # Adding unique constraint on 'UserSocialAuth', fields ['provider', 'uid']
        db.create_unique(u'social_auth_usersocialauth', ['provider', 'uid'])
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    from __future__ import print_function
    
    '''
@author: Gordeev Andrey <gordeev.and.and@gmail.com>
    
    
def main():
    '''
    >>> Order(100)
    <Price: 100, price after discount: 100>
    
        print('rm1: {0}'.format(rm1))
    print('rm2: {0}'.format(rm2))
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
    '''
*What is this pattern about?
The Adapter pattern provides a different interface for a class. We can
think about it as a cable adapter that allows you to charge a phone
somewhere that has outlets in a different shape. Following this idea,
the Adapter pattern is useful to integrate classes that couldn't be
integrated due to their incompatible interfaces.
    
    
  def _OnCompleteDone_FixIt( self ):
    completions = self._GetCompletionsUserMayHaveCompleted()
    fixit_completions = [ _GetFixItCompletion( c ) for c in completions ]
    fixit_completions = [ f for f in fixit_completions if f ]
    if not fixit_completions:
      return
    
        try:
      eq_( expected_vim_data, vim_data )
    except Exception:
      print( 'Expected:\n'{}'\nwhen parsing:\n'{}'\nBut found:\n'{}''.format(
          expected_vim_data,
          completion_data,
          vim_data ) )
      raise
    
    
def _BuildQfListItem( goto_data_item ):
  qf_item = {}
  if 'filepath' in goto_data_item:
    qf_item[ 'filename' ] = ToUnicode( goto_data_item[ 'filepath' ] )
  if 'description' in goto_data_item:
    qf_item[ 'text' ] = ToUnicode( goto_data_item[ 'description' ] )
  if 'line_num' in goto_data_item:
    qf_item[ 'lnum' ] = goto_data_item[ 'line_num' ]
  if 'column_num' in goto_data_item:
    # ycmd returns columns 1-based, and QuickFix lists require 'byte offsets'.
    # See :help getqflist and equivalent comment in
    # vimsupport.ConvertDiagnosticsToQfList.
    #
    # When the Vim help says 'byte index', it really means '1-based column
    # number' (which is somewhat confusing). :help getqflist states 'first
    # column is 1'.
    qf_item[ 'col' ] = goto_data_item[ 'column_num' ]
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def _SendRequest( self ):
    self._response_future = self.PostDataToHandlerAsync(
      self._request_data,
      'receive_messages',
      timeout = TIMEOUT_SECONDS )
    return
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def KeywordsFromSyntaxListOutput_Basic_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Statement''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    
class UnsafeThreadPoolExecutor( _base.Executor ):
  def __init__( self, max_workers ):
    '''Initializes a new ThreadPoolExecutor instance.
    
        classifiers=[
        'Development Status :: 3 - Alpha',
    
    def get_download_fn(core, url, msgId):
    def download_fn(downloadDir=None):
        params = {
            'msgid': msgId,
            'skey': core.loginInfo['skey'],}
        headers = { 'User-Agent' : config.USER_AGENT }
        r = core.s.get(url, params=params, stream=True, headers = headers)
        tempStorage = io.BytesIO()
        for block in r.iter_content(1024):
            tempStorage.write(block)
        if downloadDir is None:
            return tempStorage.getvalue()
        with open(downloadDir, 'wb') as f:
            f.write(tempStorage.getvalue())
        tempStorage.seek(0)
        return ReturnValue({'BaseResponse': {
            'ErrMsg': 'Successfully downloaded',
            'Ret': 0, },
            'PostFix': utils.get_image_postfix(tempStorage.read(20)), })
    return download_fn