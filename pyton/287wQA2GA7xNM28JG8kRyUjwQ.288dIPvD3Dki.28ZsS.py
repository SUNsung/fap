
        
                '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        '''
    if not env.stdout_isatty and not args.prettify:
        Stream = partial(
            RawStream,
            chunk_size=RawStream.CHUNK_SIZE_BY_LINE
            if args.stream
            else RawStream.CHUNK_SIZE
        )
    elif args.prettify:
        Stream = partial(
            PrettyStream if args.stream else BufferedPrettyStream,
            env=env,
            conversion=Conversion(),
            formatting=Formatting(
                env=env,
                groups=args.prettify,
                color_scheme=args.style,
                explicit_json=args.json,
            ),
        )
    else:
        Stream = partial(EncodedStream, env=env)
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
    
def program(args, env, log_error):
    '''
    The main program without error handling
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
        def prepare(self, **kwargs):
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re
    
        def test_small_ints(self):
        for i in range(-5, 257):
            self.assertIs(i, i + 0)
            self.assertIs(i, i * 1)
            self.assertIs(i, i - 0)
            self.assertIs(i, i // 1)
            self.assertIs(i, i & -1)
            self.assertIs(i, i | 0)
            self.assertIs(i, i ^ 0)
            self.assertIs(i, ~~i)
            self.assertIs(i, i**1)
            self.assertIs(i, int(str(i)))
            self.assertIs(i, i<<2>>2, str(i))
        # corner cases
        i = 1 << 70
        self.assertIs(i - i, 0)
        self.assertIs(0 * i, 0)
    
        def entry_ok(self):
        'Return sensible ConfigParser section name or None.'
        self.entry_error['text'] = ''
        name = self.entry.get().strip()
        if not name:
            self.showerror('no name specified.')
            return None
        elif len(name)>30:
            self.showerror('name is longer than 30 characters.')
            return None
        elif name in self.used_names:
            self.showerror('name is already in use.')
            return None
        return name
    
        When the number of data points is odd, the middle value is returned.
    When it is even, the smaller of the two middle values is returned.
    
        def test_strange_subclass(self):
        class X(deque):
            def __iter__(self):
                return iter([])
        d1 = X([1,2,3])
        d2 = X([4,5,6])
        d1 == d2   # not clear if this is supposed to be True or False,
                   # but it used to give a SystemError
    
    Usually an IFF-type file consists of one or more chunks.  The proposed
usage of the Chunk class defined here is to instantiate an instance at
the start of each chunk and read from the instance until it reaches
the end, after which a new instance can be instantiated.  At the end
of the file, creating a new instance will fail with an EOFError
exception.
    
        def _artcmd(self, line, file=None):
        '''Internal: process a HEAD, BODY or ARTICLE command.'''
        resp, lines = self._longcmd(line, file)
        resp, art_num, message_id = self._statparse(resp)
        return resp, ArticleInfo(art_num, message_id, lines)
    
        # We only ever write one 'entry point' symbol - either
    # 'main' or 'WinMain'.  Therefore, there is no need to
    # pass a subsystem switch to the linker as it works it
    # out all by itself.  However, the subsystem _does_ determine
    # the file extension and additional linker flags.
    target_link_flags = ''
    target_ext = '.exe'
    if subsystem_details[vars['subsystem']][2]:
        target_link_flags = '-dll'
        target_ext = '.dll'
    
        def on_diagnostics_passed(self):
        raise UnsupportedTransition
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
        def test_tc2_output(self):
        self.tc2.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc2)
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    class ParameterInjectionTest(unittest.TestCase):
    
    print()
    
        def setReporter(self, reporter):
        self._reporter = reporter
    
    *TL;DR80
Provides the ability to restore an object to its previous state.
'''
    
        def __init__(self, super_user=False):
        self.super_user = super_user