
        
        
class CBSNewsEmbedIE(CBSIE):
    IE_NAME = 'cbsnews:embed'
    _VALID_URL = r'https?://(?:www\.)?cbsnews\.com/embed/video[^#]*#(?P<id>.+)'
    _TESTS = [{
        'url': 'https://www.cbsnews.com/embed/video/?v=1.c9b5b61492913d6660db0b2f03579ef25e86307a#1Vb7b9s2EP5XBAHbT6Gt98PAMKTJ0se6LVjWYWtdGBR1stlIpEBSTtwi%2F%2FvuJNkNhmHdGxgM2NL57vjd6zt%2B8PngdN%2Fyg79qeGvhzN%2FLGrS%2F%2BuBLB531V28%2B%2BO7Qg7%2Fy97r2z3xZ42NW8yLhDbA0S0KWlHnIijwKWJBHZZnHBa8Cgbpdf%2F89NM9Hi9fXifhpr8sr%2FlP848tn%2BTdXycX25zh4cdX%2FvHl6PmmPqnWQv9w8Ed%2B9GjYRim07bFEqdG%2BZVHuwTm65A7bVRrYtR5lAyMox7pigF6W4k%2By91mjspGsJ%2BwVae4%2BsvdnaO1p73HkXs%2FVisUDTGm7R8IcdnOROeq%2B19qT1amhA1VJtPenoTUgrtfKc9m7Rq8dP7nnjwOB7wg7ADdNt7VX64DWAWlKhPtmDEq22g4GF99x6Dk9E8OSsankHXqPNKDxC%2FdK7MLKTircTDgsI3mmj4OBdSq64dy7fd1x577RU1rt4cvMtOaulFYOd%2FLewRWvDO9lIgXFpZSnkZmjbv5SxKTPoQXClFbpsf%2Fhbbpzs0IB3vb8KkyzJQ%2BywOAgCrMpgRrz%2BKk4fvb7kFbR4XJCu0gAdtNO7woCwZTu%2BBUs9bam%2Fds71drVerpeisgrubLjAB4nnOSkWQnfr5W6o1ku5Xpr1MgrCbL0M0vUyDtfLLK15WiYp47xKWSLyjFVpwVmVJSLIoCjSOFkv3W7oKsVliwZJcB9nwXpZ5GEQQwY8jNKqKCBrgjTLeFxgdCIpazojDgnRtn43J6kG7nZ6cAbxh0EeFFk4%2B1u867cY5u4344n%2FxXjCqAjucdTHgLKojNKmSfO8KRsOFY%2FzKEYCKEJBzv90QA9nfm9gL%2BHulaFqUkz9ULUYxl62B3U%2FRVNLA8IhggaPycOoBuwOCESciDQVSSUgiOMsROB%2FhKfwCKOzEk%2B4k6rWd4uuT%2FwTDz7K7t3d3WLO8ISD95jSPQbayBacthbz86XVgxHwhex5zawzgDOmtp%2F3GPcXn0VXHdSS029%2Fj99UC%2FwJUvyKQ%2FzKyixIEVlYJOn4RxxuaH43Ty9fbJ5OObykHH435XAzJTHeOF4hhEUXD8URe%2FQ%2FBT%2BMpf8d5GN02Ox%2FfiGsl7TA7POu1xZ5%2BbTzcAVKMe48mqcC21hkacVEVScM26liVVBnrKkC4CLKyzAvHu0lhEaTKMFwI3a4SN9MsrfYzdBLq2vkwRD1gVviLT8kY9h2CHH6Y%2Bix6609weFtey4ESp60WtyeWMy%2BsmBuhsoKIyuoT%2Bq2R%2FrW5qi3g%2FvzS2j40DoixDP8%2BKP0yUdpXJ4l6Vla%2Bg9vce%2BC4yM5YlUcbA%2F0jLKdpmTwvsdN5z88nAIe08%2F0HgxeG1iv%2B6Hlhjh7uiW0SDzYNI92L401uha3JKYk268UVRzdOzNQvAaJqoXzAc80dAV440NZ1WVVAAMRYQ2KrGJFmDUsq8saWSnjvIj8t78y%2FRa3JRnbHVfyFpfwoDiGpPgjzekyUiKNlU3OMlwuLMmzgvEojllYVE2Z1HhImvsnk%2BuhusTEoB21PAtSFodeFK3iYhXEH9WOG2%2FkOE833sfeG%2Ff5cfHtEFNXgYes0%2FXj7aGivUgJ9XpusCtoNcNYVVnJVrrDo0OmJAutHCpuZul4W9lLcfy7BnuLPT02%2ByXsCTk%2B9zhzswIN04YueNSK%2BPtM0jS88QdLqSLJDTLsuGZJNolm2yO0PXh3UPnz9Ix5bfIAqxPjvETQsDCEiPG4QbqNyhBZISxybLnZYCrW5H3Axp690%2F0BJdXtDZ5ITuM4xj3f4oUHGzc5JeJmZKpp%2FjwKh4wMV%2FV1yx3emLoR0MwbG4K%2F%2BZgVep3PnzXGDHZ6a3i%2Fk%2BJrONDN13%2Bnq6tBTYk4o7cLGhBtqCC4KwacGHpEVuoH5JNro%2FE6JfE6d5RydbiR76k%2BW5wioDHBIjw1euhHjUGRB0y5A97KoaPx6MlL%2BwgboUVtUFRI%2FLemgTpdtF59ii7pab08kuPcfWzs0l%2FRI5takWnFpka0zOgWRtYcuf9aIxZMxlwr6IiGpsb6j2DQUXPl%2FimXI599Ev7fWjoPD78A',
        'only_matching': True,
    }]
    
    
class VVVVIDIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?vvvvid\.it/(?:#!)?(?:show|anime|film|series)/(?P<show_id>\d+)/[^/]+/(?P<season_id>\d+)/(?P<id>[0-9]+)'
    _TESTS = [{
        # video_type == 'video/vvvvid'
        'url': 'https://www.vvvvid.it/#!show/434/perche-dovrei-guardarlo-di-dario-moccia/437/489048/ping-pong',
        'md5': 'b8d3cecc2e981adc3835adf07f6df91b',
        'info_dict': {
            'id': '489048',
            'ext': 'mp4',
            'title': 'Ping Pong',
        },
        'params': {
            'skip_download': True,
        },
    }, {
        # video_type == 'video/rcs'
        'url': 'https://www.vvvvid.it/#!show/376/death-note-live-action/377/482493/episodio-01',
        'md5': '33e0edfba720ad73a8782157fdebc648',
        'info_dict': {
            'id': '482493',
            'ext': 'mp4',
            'title': 'Episodio 01',
        },
        'params': {
            'skip_download': True,
        },
    }]
    _conn_id = None
    
            return self.url_result(
            video_url, ie=RedBullTVIE.ie_key(),
            video_id=RedBullTVIE._match_id(video_url))

    
        def _real_extract(self, url):
        mobj = re.match(self._VALID_URL, url)
        display_id = '%s/%s' % mobj.group(2, 3)
    
    r = openssl_encode('aes-128-cbc', key, iv)
print('aes_cbc_decrypt')
print(repr(r))
    
        bug_text = re.search(
        r'(?s)#\s*BUGS\s*[^\n]*\s*(.*?)#\s*COPYRIGHT', readme).group(1)
    dev_text = re.search(
        r'(?s)(#\s*DEVELOPER INSTRUCTIONS.*?)#\s*EMBEDDING YOUTUBE-DL',
        readme).group(1)
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
        def deconstruct(self):
        path, args, kwargs = super().deconstruct()
        if self.fillfactor is not None:
            kwargs['fillfactor'] = self.fillfactor
        return path, args, kwargs
    
        def test_brin_index(self):
        index_name = 'char_field_model_field_brin'
        index = BrinIndex(fields=['field'], name=index_name, pages_per_range=4)
        with connection.schema_editor() as editor:
            editor.add_index(CharFieldModel, index)
        constraints = self.get_constraints(CharFieldModel._meta.db_table)
        self.assertEqual(constraints[index_name]['type'], BrinIndex.suffix)
        self.assertEqual(constraints[index_name]['options'], ['pages_per_range=4'])
        with connection.schema_editor() as editor:
            editor.remove_index(CharFieldModel, index)
        self.assertNotIn(index_name, self.get_constraints(CharFieldModel._meta.db_table))
    
        def setUp(self):
        self._cwd = os.getcwd()
        self.work_dir = tempfile.mkdtemp(prefix='i18n_')
        # Resolve symlinks, if any, in test directory paths.
        self.test_dir = os.path.realpath(os.path.join(self.work_dir, self.work_subdir))
        copytree(os.path.join(source_code_dir, self.work_subdir), self.test_dir)
        # Step out of the temporary working tree before removing it to avoid
        # deletion problems on Windows. Cleanup actions registered with
        # addCleanup() are called in reverse so preserve this ordering.
        self.addCleanup(self._rmrf, self.test_dir)
        self.addCleanup(os.chdir, self._cwd)
        os.chdir(self.test_dir)
    
    
def method_decorator(decorator, name=''):
    '''
    Convert a function decorator into a method decorator
    '''
    # 'obj' can be a class or a function. If 'obj' is a function at the time it
    # is passed to _dec,  it will eventually be a method of the class it is
    # defined on. If 'obj' is a class, the 'name' is required to be the name
    # of the method that will be decorated.
    def _dec(obj):
        if not isinstance(obj, type):
            return _multi_decorate(decorator, obj)
        if not (name and hasattr(obj, name)):
            raise ValueError(
                'The keyword argument `name` must be the name of a method '
                'of the decorated class: %s. Got '%s' instead.' % (obj, name)
            )
        method = getattr(obj, name)
        if not callable(method):
            raise TypeError(
                'Cannot decorate '%s' as it isn't a callable attribute of '
                '%s (%s).' % (name, obj, method)
            )
        _wrapper = _multi_decorate(decorator, method)
        setattr(obj, name, _wrapper)
        return obj
    
        @property
    def std(self):
        '''
        Return the standard deviation of all pixel values of this band.
        '''
        return self.statistics()[3]
    
        def test_preferred_extension(self):
        def check_extensions():
            self.assertEqual(mimetypes.guess_extension('application/octet-stream'), '.bin')
            self.assertEqual(mimetypes.guess_extension('application/postscript'), '.ps')
            self.assertEqual(mimetypes.guess_extension('application/vnd.apple.mpegurl'), '.m3u')
            self.assertEqual(mimetypes.guess_extension('application/vnd.ms-excel'), '.xls')
            self.assertEqual(mimetypes.guess_extension('application/vnd.ms-powerpoint'), '.ppt')
            self.assertEqual(mimetypes.guess_extension('application/x-texinfo'), '.texi')
            self.assertEqual(mimetypes.guess_extension('application/x-troff'), '.roff')
            self.assertEqual(mimetypes.guess_extension('application/xml'), '.xsl')
            self.assertEqual(mimetypes.guess_extension('audio/mpeg'), '.mp3')
            self.assertEqual(mimetypes.guess_extension('image/jpeg'), '.jpg')
            self.assertEqual(mimetypes.guess_extension('image/tiff'), '.tiff')
            self.assertEqual(mimetypes.guess_extension('message/rfc822'), '.eml')
            self.assertEqual(mimetypes.guess_extension('text/html'), '.html')
            self.assertEqual(mimetypes.guess_extension('text/plain'), '.txt')
            self.assertEqual(mimetypes.guess_extension('video/mpeg'), '.mpeg')
            self.assertEqual(mimetypes.guess_extension('video/quicktime'), '.mov')
    
    def _parse_overview(lines, fmt, data_process_func=None):
    '''Parse the response to an OVER or XOVER command according to the
    overview format `fmt`.'''
    n_defaults = len(_DEFAULT_OVERVIEW_FMT)
    overview = []
    for line in lines:
        fields = {}
        article_number, *tokens = line.split('\t')
        article_number = int(article_number)
        for i, token in enumerate(tokens):
            if i >= len(fmt):
                # XXX should we raise an error? Some servers might not
                # support LIST OVERVIEW.FMT and still return additional
                # headers.
                continue
            field_name = fmt[i]
            is_metadata = field_name.startswith(':')
            if i >= n_defaults and not is_metadata:
                # Non-default header names are included in full in the response
                # (unless the field is totally empty)
                h = field_name + ': '
                if token and token[:len(h)].lower() != h:
                    raise NNTPDataError('OVER/XOVER response doesn't include '
                                        'names of additional headers')
                token = token[len(h):] if token else None
            fields[fmt[i]] = token
        overview.append((article_number, fields))
    return overview
    
        def close(self):
        '''Close the connection without assuming anything about it.'''
        try:
            file = self.file
            self.file = None
            if file is not None:
                file.close()
        finally:
            sock = self.sock
            self.sock = None
            if sock is not None:
                try:
                    sock.shutdown(socket.SHUT_RDWR)
                except OSError as exc:
                    # The server might already have closed the connection.
                    # On Windows, this may result in WSAEINVAL (error 10022):
                    # An invalid operation was attempted.
                    if (exc.errno != errno.ENOTCONN
                       and getattr(exc, 'winerror', 0) != 10022):
                        raise
                finally:
                    sock.close()