
        
        if args.dict:
    jieba.initialize(args.dict)
else:
    jieba.initialize()
if args.user_dict:
    jieba.load_userdict(args.user_dict)
    
        def __init__(self):
        self.tokenizer = self.postokenizer = jieba.posseg.dt
        self.stop_words = self.STOP_WORDS.copy()
        self.pos_filt = frozenset(('ns', 'n', 'vn', 'v'))
        self.span = 5
    
        def __repr__(self):
        return 'pair(%r, %r)' % (self.word, self.flag)
    
    print('='*40)
print('3. 关键词提取')
print('-'*40)
print(' TF-IDF')
print('-'*40)
    
        def testDefaultCut(self):
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test DefaultCut Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test DefaultCut error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testDefaultCut', file=sys.stderr)
    
    if opt.topK==None:
    topK=10
else:
    topK = int(opt.topK)
    
    print('speed %s bytes/second' % (len(content)/tm_cost))
    
    print('speed' , len(content)/tm_cost, ' bytes/second')
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def Start( self ):
    request_data = BuildRequestData( self._buffer_number )
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data[ 'event_name' ] = self._event_name
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
          BaseRequest().GetDataFromHandler( 'healthy', display_message = False )

    
      f = _CreateFilterForTypes( opts, [ 'java', 'xml' ] )
    
    
def MockAsyncServerResponseException( exception ):
  '''Return a fake future object that is complete, but raises an exception.
  Suitable for mocking a response future within a client request. For example:
    
    
def ContentsOfTestFile( test_file ):
  dir_of_script = os.path.dirname( os.path.abspath( __file__ ) )
  full_path_to_test_file = os.path.join( dir_of_script, 'testdata', test_file )
  return ReadFile( full_path_to_test_file )
    
        Args:
        call_queue: A multiprocessing.Queue of _CallItems that will be read and
            evaluated by the worker.
        result_queue: A multiprocessing.Queue of _ResultItems that will written
            to by the worker.
        shutdown: A multiprocessing.Event that will be set as a signal to the
            worker that it should exit when call_queue is empty.
    '''
    while True:
        call_item = call_queue.get(block=True)
        if call_item is None:
            # Wake up queue management thread
            result_queue.put(None)
            return
        try:
            r = call_item.fn(*call_item.args, **call_item.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            result_queue.put(_ResultItem(call_item.work_id,
                                         exception=e))
        else:
            result_queue.put(_ResultItem(call_item.work_id,
                                         result=r))
    
        def init_profile_dir(self):
        '''initialize the profile dir'''
        self._in_init_profile_dir = True
        if self.profile_dir is not None:
            # already ran
            return
        if 'ProfileDir.location' not in self.config:
            # location not specified, find by profile name
            try:
                p = ProfileDir.find_profile_dir_by_name(self.ipython_dir, self.profile, self.config)
            except ProfileDirError:
                # not found, maybe create it (always create default profile)
                if self.auto_create or self.profile == 'default':
                    try:
                        p = ProfileDir.create_profile_dir_by_name(self.ipython_dir, self.profile, self.config)
                    except ProfileDirError:
                        self.log.fatal('Could not create profile: %r'%self.profile)
                        self.exit(1)
                    else:
                        self.log.info('Created profile dir: %r'%p.location)
                else:
                    self.log.fatal('Profile %r not found.'%self.profile)
                    self.exit(1)
            else:
                self.log.debug('Using existing profile dir: %r'%p.location)
        else:
            location = self.config.ProfileDir.location
            # location is fully specified
            try:
                p = ProfileDir.find_profile_dir(location, self.config)
            except ProfileDirError:
                # not found, maybe create it
                if self.auto_create:
                    try:
                        p = ProfileDir.create_profile_dir(location, self.config)
                    except ProfileDirError:
                        self.log.fatal('Could not create profile directory: %r'%location)
                        self.exit(1)
                    else:
                        self.log.debug('Creating new profile dir: %r'%location)
                else:
                    self.log.fatal('Profile directory %r not found.'%location)
                    self.exit(1)
            else:
                self.log.info('Using existing profile dir: %r'%location)
            # if profile_dir is specified explicitly, set profile name
            dir_name = os.path.basename(p.location)
            if dir_name.startswith('profile_'):
                self.profile = dir_name[8:]
    
        # Hack: the 'neutral' colours are not very visible on a dark background on
    # Windows. Since Windows command prompts have a dark background by default, and
    # relatively few users are likely to alter that, we will use the 'Linux' colours,
    # designed for a dark background, as the default on Windows.
    if os.name == 'nt':
        ex_colors.add_scheme(ex_colors['Linux'].copy('Neutral'))
    
    from traitlets.config.configurable import Configurable
from IPython.utils.path import ensure_dir_exists, compress_user
from IPython.utils.decorators import undoc
from traitlets import Instance
    
    @undoc
class DummyDB(object):
    '''Dummy DB that will act as a black hole for history.
    
    Only used in the absence of sqlite'''
    def execute(*args, **kwargs):
        return []
    
    def commit(self, *args, **kwargs):
        pass
    
    def __enter__(self, *args, **kwargs):
        pass
    
    def __exit__(self, *args, **kwargs):
        pass
    
        aliases=Dict(dict(
        keep = 'HistoryTrim.keep'
    ))
    
    def start(self):
        profile_dir = self.profile_dir.location
        hist_file = os.path.join(profile_dir, 'history.sqlite')
        con = sqlite3.connect(hist_file)
    
            If foo+bar can be evaluated in the user namespace, the result is
        placed at the next input prompt. Otherwise, the history is searched
        for lines which contain that substring, and the most recent one is
        placed at the next input prompt.
        '''
        if not arg:                 # Last output
            self.shell.set_next_input(str(self.shell.user_ns['_']))
            return
                                    # Get history range
        histlines = self.shell.history_manager.get_range_by_str(arg)
        cmd = '\n'.join(x[2] for x in histlines)
        if cmd:
            self.shell.set_next_input(cmd.rstrip())
            return
    
      The offset is automatically calibrated based on when the thread is actually
  woken from sleep by increasing/decreasing the offset halfway between its
  current value and `_MIN_OFFSET`.
    
      def testSleeper_SleepUntil(self):
    # Burn in.
    for _ in range(10):
      concurrency.Sleeper().sleep(.01)
    
      Args:
    batched_states: A nested structure with entries whose first dimensions all
      equal `batch_size`.
    batch_size: The number of states in the batch.
    
        :param location: Location of file on system.
    :param chunk_size: The size of each chunk in the stream (in bytes)
    :param mime_type: Specific mime_type.
    :param headers: Custom Headers.
    :param filename: Override filename.
    :param chunked: Enable or disable chunked transfer-encoding
    :param _range:
    '''
    headers = headers or {}
    if filename:
        headers.setdefault(
            'Content-Disposition', 'attachment; filename='{}''.format(filename)
        )
    filename = filename or path.split(location)[-1]
    
        request, response = app.test_client.head('/files/{}'.format(file_name))
    assert response.status == 200
    assert 'Accept-Ranges' in response.headers
    assert 'Content-Length' in response.headers
    assert int(response.headers['Content-Length']) == len(
        get_file_content(static_file_directory, file_name)
    )
    
    GIT_COMMANDS = {
    'get_tag': ['git describe --tags --abbrev=0'],
    'commit_version_change': [
        'git add . && git commit -m 'Bumping up version from '
        '{current_version} to {new_version}''
    ],
    'create_new_tag': [
        'git tag -a {new_version} -m 'Bumping up version from '
        '{current_version} to {new_version}''
    ],
    'push_tag': ['git push origin {new_version}'],
    'get_change_log': [
        'git log --no-merges --pretty=format:'%h::: %cn::: %s' '
        '{current_version}..'
    ],
}