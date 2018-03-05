
        
        filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    
def list_extractors(age_limit):
    '''
    Return a list of extractors that are suitable for the given age,
    sorted by extractor ID.
    '''
    
            return self._extract_nuevo(
            'http://www.anitube.se/nuevo/econfig.php?key=%s' % key, video_id)

    
        _TESTS = [{
        'url': 'http://camwithher.tv/view_video.php?viewkey=6e9a24e2c0e842e1f177&page=&viewtype=&category=',
        'info_dict': {
            'id': '5644',
            'ext': 'flv',
            'title': 'Periscope Tease',
            'description': 'In the clouds teasing on periscope to my favorite song',
            'duration': 240,
            'view_count': int,
            'comment_count': int,
            'uploader': 'MileenaK',
            'upload_date': '20160322',
        },
        'params': {
            'skip_download': True,
        }
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=6dfd8b7c97531a459937',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?page=&viewkey=6e9a24e2c0e842e1f177&viewtype=&category=',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=b6c3b5bea9515d1a1fc4&page=&viewtype=&category=mv',
        'only_matching': True,
    }]
    
        ###########################################################################
    # Generate dataset
    ###########################################################################
    n_nonzeros = int(opts.ratio_nonzeros * opts.n_features)
    
    for lang, page in pages.items():
    
    
n_train = 20  # samples for training
n_test = 200  # samples for testing
n_averages = 50  # how often to repeat classification
n_features_max = 75  # maximum number of features
step = 4  # step size for the calculation
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def post_process(self, output):
        for x in output:
            if isinstance(x, (BaseItem, dict)):
                for arg in self.args:
                    if not arg in x:
                        raise ContractFail(''%s' field is missing' % arg)

    
        print('Creating table [random_time_series] reference')
    obj = db.session.query(TBL).filter_by(table_name='random_time_series').first()
    if not obj:
        obj = TBL(table_name='random_time_series')
    obj.main_dttm_col = 'ds'
    obj.database = get_or_create_main_db()
    db.session.merge(obj)
    db.session.commit()
    obj.fetch_metadata()
    tbl = obj
    
        # 3. Delete empty permission view menues from roles
    roles = sm.get_session.query(sm.role_model).all()
    for role in roles:
        role.permissions = [p for p in role.permissions if p]
    sm.get_session.commit()
    
        @property
    def sqla_col(self):
        name = self.metric_name
        return literal_column(self.expression).label(name)
    
        @property
    def data(self):
        # work around for https://github.com/pandas-dev/pandas/issues/18372
        return [dict((k, _maybe_box_datetimelike(v))
                     for k, v in zip(self.__df.columns, np.atleast_1d(row)))
                for row in self.__df.values]
    
    def downgrade():
    constraint = find_constraint_name(False) or 'fk_columns_datasource_name_datasources'
    with op.batch_alter_table('columns',
        naming_convention=naming_convention) as batch_op:
        batch_op.drop_constraint(constraint, type_='foreignkey')
        batch_op.create_foreign_key(
            'fk_columns_column_name_datasources',
            'datasources',
            ['column_name'], ['datasource_name'])

    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
    from ..common import *
import urllib.error
from json import loads
from time import time, sleep
    
            d = deque(s)
        d.rotate(-1)            # verify rot(-1)
        self.assertEqual(''.join(d), 'bcdea')
        d.rotate()              # check default to 1
        self.assertEqual(tuple(d), s)
    
    for prec in [9, 19]:
    print('\nPrecision: %d decimal digits\n' % prec)
    for func in to_benchmark:
        start = time.time()
        if C is not None:
            C.getcontext().prec = prec
        P.getcontext().prec = prec
        for i in range(10000):
            x = func()
        print('%s:' % func.__name__.replace('pi_', ''))
        print('result: %s' % str(x))
        print('time: %fs\n' % (time.time()-start))
    
            if nextchar == ''':
            return parse_string(string, idx + 1, strict)
        elif nextchar == '{':
            return parse_object((string, idx + 1), strict,
                _scan_once, object_hook, object_pairs_hook, memo)
        elif nextchar == '[':
            return parse_array((string, idx + 1), _scan_once)
        elif nextchar == 'n' and string[idx:idx + 4] == 'null':
            return None, idx + 4
        elif nextchar == 't' and string[idx:idx + 4] == 'true':
            return True, idx + 4
        elif nextchar == 'f' and string[idx:idx + 5] == 'false':
            return False, idx + 5
    }
    
        def _getline(self, strip_crlf=True):
        '''Internal: return one line from the server, stripping _CRLF.
        Raise EOFError if the connection is closed.
        Returns a bytes object.'''
        line = self.file.readline(_MAXLINE +1)
        if len(line) > _MAXLINE:
            raise NNTPDataError('line too long')
        if self.debugging > 1:
            print('*get*', repr(line))
        if not line: raise EOFError
        if strip_crlf:
            if line[-2:] == _CRLF:
                line = line[:-2]
            elif line[-1:] in _CRLF:
                line = line[:-1]
        return line
    
            for func, args, expected in self.CALLS_POSARGS:
            with self.subTest(func=func, args=args):
                # kwnames=NULL
                result = _testcapi.pyobject_fastcallkeywords(func, args, None)
                self.check_result(result, expected)
    
            self.assertEqual(x[:], a.tolist()[1:])
        with self.assertRaises(ValueError):
            c_int.from_buffer(a, -1)
        with self.assertRaises(ValueError):
            (c_int * 16).from_buffer(a, sizeof(c_int))
        with self.assertRaises(ValueError):
            (c_int * 1).from_buffer(a, 16 * sizeof(c_int))
    
    try:
    WINFUNCTYPE
except NameError:
    # fake to enable this test on Linux
    WINFUNCTYPE = CFUNCTYPE
    
            def func(arg):
            for i in range(10):
##                print arg[i],
                self.result.append(arg[i])
##            print
            return 0
        callback = PROTOTYPE(func)