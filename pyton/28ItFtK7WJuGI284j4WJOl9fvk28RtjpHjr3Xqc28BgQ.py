
        
            '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
        def __init__(self, orig):
        self._orig = orig
    
    from httpie import ExitStatus
from httpie.core import main
    
    # def test_unicode_url_verbose(self):
#     r = http(httpbin.url + '--verbose', u'/get?test=' + UNICODE)
#     assert HTTP_OK in r
    
        # 'A byte-content-range-spec with a byte-range-resp-spec whose
    # last- byte-pos value is less than its first-byte-pos value,
    # or whose instance-length value is less than or equal to its
    # last-byte-pos value, is invalid. The recipient of an invalid
    # byte-content-range- spec MUST ignore it and any content
    # transferred along with it.'
    if (first_byte_pos >= last_byte_pos or
            (instance_length is not None and
             instance_length <= last_byte_pos)):
        raise ContentRangeError(
            'Invalid Content-Range returned: %r' % content_range)
    
        Assumes `from __future__ import division`.
    
        # Auth
    def get_auth_plugins(self):
        return [plugin for plugin in self if issubclass(plugin, AuthPlugin)]
    
        # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    # Create different classifiers. The logistic regression cannot do
# multiclass out of the box.
classifiers = {'L1 logistic': LogisticRegression(C=C, penalty='l1'),
               'L2 logistic (OvR)': LogisticRegression(C=C, penalty='l2'),
               'Linear SVC': SVC(kernel='linear', C=C, probability=True,
                                 random_state=0),
               'L2 logistic (Multinomial)': LogisticRegression(
                C=C, solver='lbfgs', multi_class='multinomial'),
               'GPC': GaussianProcessClassifier(kernel)
               }
    
    
class TextTestResult(_TextTestResult):
    def printSummary(self, start, stop):
        write = self.stream.write
        writeln = self.stream.writeln
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        return None
    
            self.assertEqual((0).bit_length(), 0)
        self.assertEqual((1).bit_length(), 1)
        self.assertEqual((-1).bit_length(), 1)
        self.assertEqual((2).bit_length(), 2)
        self.assertEqual((-2).bit_length(), 2)
        for i in [2, 3, 15, 16, 17, 31, 32, 33, 63, 64, 234]:
            a = 2**i
            self.assertEqual((a-1).bit_length(), i)
            self.assertEqual((1-a).bit_length(), i)
            self.assertEqual((a).bit_length(), i+1)
            self.assertEqual((-a).bit_length(), i+1)
            self.assertEqual((a+1).bit_length(), i+1)
            self.assertEqual((-a-1).bit_length(), i+1)
    
        def test_make_frame(self):
        self.dialog.row = 0
        self.dialog.top = self.root
        frame, label = self.dialog.make_frame()
        self.assertEqual(label, '')
        self.assertIsInstance(frame, Frame)
    
        >>> from decimal import Decimal as D
    >>> data = [D('0.1375'), D('0.2108'), D('0.3061'), D('0.0419')]
    >>> _sum(data)
    (<class 'decimal.Decimal'>, Fraction(6963, 10000), 4)
    
        def test_mul(self):
        d = deque('abc')
        self.assertEqual(d * -5, deque())
        self.assertEqual(d * 0, deque())
        self.assertEqual(d * 1, deque('abc'))
        self.assertEqual(d * 2, deque('abcabc'))
        self.assertEqual(d * 3, deque('abcabcabc'))
        self.assertIsNot(d * 1, d)
    
        def dump(self, stream, start=None, end=None):
        for j, (trans, i) in enumerate(zip(self.transitions, self.type_indices)):
            utc = datetime.utcfromtimestamp(trans)
            tti = self.ttis[i]
            lmt = datetime.utcfromtimestamp(trans + tti.tt_gmtoff)
            abbrind = tti.tt_abbrind
            abbr = self.abbrs[abbrind:self.abbrs.find(0, abbrind)].decode()
            if j > 0:
                prev_tti = self.ttis[self.type_indices[j - 1]]
                shift = ' %+g' % ((tti.tt_gmtoff - prev_tti.tt_gmtoff) / 3600)
            else:
                shift = ''
            print('%s UTC = %s %-5s isdst=%d' % (utc, lmt, abbr, tti[1]) + shift, file=stream)
    
        def keys(self):
        '''Return a list of keys.'''
        return list(self.iterkeys())
    
    The utility functions are useful for converting between the various expected
color formats, and for calculating other color values.
    
            # issue 3382
        self.assertEqual(format(complex(NAN, NAN), 'f'), 'nan+nanj')
        self.assertEqual(format(complex(1, NAN), 'f'), '1.000000+nanj')
        self.assertEqual(format(complex(NAN, 1), 'f'), 'nan+1.000000j')
        self.assertEqual(format(complex(NAN, -1), 'f'), 'nan-1.000000j')
        self.assertEqual(format(complex(NAN, NAN), 'F'), 'NAN+NANj')
        self.assertEqual(format(complex(1, NAN), 'F'), '1.000000+NANj')
        self.assertEqual(format(complex(NAN, 1), 'F'), 'NAN+1.000000j')
        self.assertEqual(format(complex(NAN, -1), 'F'), 'NAN-1.000000j')
        self.assertEqual(format(complex(INF, INF), 'f'), 'inf+infj')
        self.assertEqual(format(complex(1, INF), 'f'), '1.000000+infj')
        self.assertEqual(format(complex(INF, 1), 'f'), 'inf+1.000000j')
        self.assertEqual(format(complex(INF, -1), 'f'), 'inf-1.000000j')
        self.assertEqual(format(complex(INF, INF), 'F'), 'INF+INFj')
        self.assertEqual(format(complex(1, INF), 'F'), '1.000000+INFj')
        self.assertEqual(format(complex(INF, 1), 'F'), 'INF+1.000000j')
        self.assertEqual(format(complex(INF, -1), 'F'), 'INF-1.000000j')
    
        def test_stdin_stdout(self):
        args = sys.executable, '-m', 'json.tool'
        with Popen(args, stdin=PIPE, stdout=PIPE, stderr=PIPE) as proc:
            out, err = proc.communicate(self.data.encode())
        self.assertEqual(out.splitlines(), self.expect.encode().splitlines())
        self.assertEqual(err, b'')
    
        def test_structures(self):
        WNDPROC = WINFUNCTYPE(c_long, c_int, c_int, c_int, c_int)
    
        def test_3(self):
        class X(Structure):
            pass
        class Y(Structure):
            _fields_ = [('x', X)] # finalizes X
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])