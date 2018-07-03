
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        def add_cancelled(self, future):
        super(_AllCompletedWaiter, self).add_cancelled(future)
        self._decrement_pending_calls()
    
    try:
    import queue
except ImportError:
    import Queue as queue
    
    
PENDING_FUTURE = create_future(state=PENDING)
RUNNING_FUTURE = create_future(state=RUNNING)
CANCELLED_FUTURE = create_future(state=CANCELLED)
CANCELLED_AND_NOTIFIED_FUTURE = create_future(state=CANCELLED_AND_NOTIFIED)
EXCEPTION_FUTURE = create_future(state=FINISHED, exception=IOError())
SUCCESSFUL_FUTURE = create_future(state=FINISHED, result=42)
    
    
def ExtractKeywordsFromGroup_ContainedSyntaxArgAllowed_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'contained foo zoq',
                   'contained bar goo',
                   'far'
                 ] ) ),
               contains_inanyorder( 'foo', 'zoq', 'bar', 'goo', 'far' ) )

    
      return completion_data
    
        if not done:
      self._result = None
    else:
      self._result = FakeResponse( response, exception )
    
        response = self.HandleFuture( self._response_future,
                                  display_message = False )
    if response is None:
      # Server returned an exception.
      return False
    
            # Pass matched groups to the handler.  Since
        # match.groups() includes both named and
        # unnamed groups, we want to use either groups
        # or groupdict but not both.
        if self.regex.groupindex:
            path_kwargs = dict(
                (str(k), _unquote_or_none(v))
                for (k, v) in match.groupdict().items())
        else:
            path_args = [_unquote_or_none(s) for s in match.groups()]
    
    
if (os.environ.get('TORNADO_NO_EXTENSION') or
        os.environ.get('TORNADO_EXTENSION') == '0'):
    # These environment variables exist to make it easier to do performance
    # comparisons; they are not guaranteed to remain supported in the future.
    _websocket_mask = _websocket_mask_python
else:
    try:
        from tornado.speedups import websocket_mask as _websocket_mask
    except ImportError:
        if os.environ.get('TORNADO_EXTENSION') == '1':
            raise
        _websocket_mask = _websocket_mask_python
    
            See `.BaseIOStream.set_nodelay` for additional details.
    
        The implementations of this interface included with Tornado are
    
    setup(
    name='tornado',
    version=version,
    packages=['tornado', 'tornado.test', 'tornado.platform'],
    package_data={
        # data files need to be listed both here (which determines what gets
        # installed) and in MANIFEST.in (which determines what gets included
        # in the sdist tarball)
        'tornado.test': [
            'README',
            'csv_translations/fr_FR.csv',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.mo',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.po',
            'options_test.cfg',
            'options_test_types.cfg',
            'options_test_types_str.cfg',
            'static/robots.txt',
            'static/sample.xml',
            'static/sample.xml.gz',
            'static/sample.xml.bz2',
            'static/dir/index.html',
            'static_foo.txt',
            'templates/utf8.html',
            'test.crt',
            'test.key',
        ],
    },
    author='Facebook',
    author_email='python-tornado@googlegroups.com',
    url='http://www.tornadoweb.org/',
    license='http://www.apache.org/licenses/LICENSE-2.0',
    description=('Tornado is a Python web framework and asynchronous networking library,'
                 ' originally developed at FriendFeed.'),
    classifiers=[
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy',
    ],
    **kwargs
)

    
        @gen_test
    def test_maxsize(self):
        self.assertRaises(TypeError, queues.Queue, maxsize=None)
        self.assertRaises(ValueError, queues.Queue, maxsize=-1)