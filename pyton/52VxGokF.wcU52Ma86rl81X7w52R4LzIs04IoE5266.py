    def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['tcsh', '--version'], stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').split()[1]

    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['zsh', '-c', 'echo $ZSH_VERSION'],
                     stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').strip()

    
        # One from history:
    already_used = get_closest(
        old_command, _get_used_executables(command),
        fallback_to_first=False)
    if already_used:
        new_cmds = [already_used]
    else:
        new_cmds = []
    
    
@sudo_support
@for_app('dnf')
def match(command):
    return 'no such command' in command.output.lower()
    
        def label_tag(self):
        attrs = {}
        if not self.is_first:
            attrs['class'] = 'inline'
        label = self.field['label']
        return format_html('<label{}>{}{}</label>', flatatt(attrs), capfirst(label), self.form.label_suffix)
    
        def test_case_aggregate(self):
        agg = Sum(
            Case(When(friends__age=40, then=F('friends__age'))),
            filter=Q(friends__name__startswith='test'),
        )
        self.assertEqual(Author.objects.aggregate(age=agg)['age'], 80)
    
    
def register_converter(converter, type_name):
    REGISTERED_CONVERTERS[type_name] = converter()
    get_converters.cache_clear()
    
    
@unittest.skipUnless(HAS_POSTGRES, 'The psycopg2 driver is needed for these tests')
class TestPostGISVersionCheck(unittest.TestCase):
    '''
    The PostGIS version check parses correctly the version numbers
    '''
    
                # Attempting to get the GDAL/OGR driver by the string name.
            for iface in (vcapi, rcapi):
                driver = c_void_p(iface.get_driver_by_name(force_bytes(name)))
                if driver:
                    break
        elif isinstance(dr_input, int):
            self.ensure_registered()
            for iface in (vcapi, rcapi):
                driver = iface.get_driver(dr_input)
                if driver:
                    break
        elif isinstance(dr_input, c_void_p):
            driver = dr_input
        else:
            raise GDALException('Unrecognized input type for GDAL/OGR Driver: %s' % type(dr_input))
    
        def __len__(self):
        'Return the count of fields in this feature.'
        return self.num_fields
    
        def clone(self):
        'Return a clone of this SpatialReference object.'
        return SpatialReference(capi.clone_srs(self.ptr))
    
    
def test_unicode_url(httpbin):
    r = http(httpbin.url + u'/get?test=' + UNICODE)
    assert HTTP_OK in r
    assert r.json['args'] == {'test': UNICODE}
    
        def test_binary_included_and_correct_when_suitable(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        url = httpbin + '/bytes/1024?seed=1'
        r = http('GET', url, env=env)
        expected = requests.get(url).content
        assert r == expected

    
        def get_auth_plugin(self, auth_type: str) -> Type[AuthPlugin]:
        return self.get_auth_plugin_mapping()[auth_type]
    
        def items(self):
        for key, values in super(MultiValueOrderedDict, self).items():
            if not isinstance(values, list):
                values = [values]
            for value in values:
                yield key, value
    
    import pytest
    
    
# ALPHA *( ALPHA / DIGIT / '+' / '-' / '.' )
# <https://tools.ietf.org/html/rfc3986#section-3.1>
URL_SCHEME_RE = re.compile(r'^[a-z][a-z0-9.+-]*://', re.IGNORECASE)
    
    
class ConnectionError(RequestException):
    '''A Connection error occurred.'''
    
        def __repr__(self):
        return str(dict(self.items()))
    
        def test_cookie_sent_on_redirect(self, httpbin):
        s = requests.session()
        s.get(httpbin('cookies/set?foo=bar'))
        r = s.get(httpbin('redirect/1'))  # redirects to httpbin('get')
        assert 'Cookie' in r.json()['headers']
    
    # Open the input movie file
input_movie = cv2.VideoCapture('hamilton_clip.mp4')
length = int(input_movie.get(cv2.CAP_PROP_FRAME_COUNT))
    
    # Display the resulting image
pil_image.show()
    
    
def detect_faces_in_image(file_stream):
    # 用face_recognition.face_encodings(img)接口提前把奥巴马人脸的编码录入
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
    
@pytest.mark.parametrize('chunksize', [None, 1])
def test_readjson_chunks_closes(chunksize):
    with ensure_clean('test.json') as path:
        df = pd.DataFrame({'A': [1, 2, 3], 'B': [4, 5, 6]})
        df.to_json(path, lines=True, orient='records')
        reader = JsonReader(
            path,
            orient=None,
            typ='frame',
            dtype=True,
            convert_axes=True,
            convert_dates=True,
            keep_default_dates=True,
            numpy=False,
            precise_float=False,
            date_unit=None,
            encoding=None,
            lines=True,
            chunksize=chunksize,
            compression=None,
        )
        reader.read()
        assert (
            reader.open_stream.closed
        ), 'didn't close stream with \
            chunksize = {chunksize}'.format(
            chunksize=chunksize
        )
    
                s.to_csv(filename, compression=compression, encoding=encoding, header=True)
            # test the round trip - to_csv -> read_csv
            result = pd.read_csv(
                filename,
                compression=compression,
                encoding=encoding,
                index_col=0,
                squeeze=True,
            )
            assert_series_equal(s, result)
    
    
class DataFrameAttributes:
    def setup(self):
        self.df = DataFrame(np.random.randn(10, 6))
        self.cur_index = self.df.index