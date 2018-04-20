
        
                    if info_dict_str:
                info_dict_str += '\n'
        info_dict_str += ''.join(
            '    %s: %s,\n' % (_repr(k), _repr(test_info_dict[k]))
            for k in missing_keys)
        write_string(
            '\n\'info_dict\': {\n' + info_dict_str + '},\n', out=sys.stderr)
        self.assertFalse(
            missing_keys,
            'Missing keys in test definition: %s' % (
                ', '.join(sorted(missing_keys))))
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
            def _find_spec(key):
            m = re.search(
                r'(?m)^//\s*%s:\s*(.*?)\n' % re.escape(key), as_content)
            if not m:
                raise ValueError('Cannot find %s in %s' % (key, testfile))
            return json.loads(m.group(1))
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
            # TODO: handle s and e stage_mode (live streams and ended live streams)
        if stage_mode not in ('s', 'e'):
            request = sanitized_Request(
                'https://audimedia.tv/api/video/v1/videos/%s?embed[]=video_versions&embed[]=thumbnail_image&where[content_language_iso]=%s' % (video_id, lang),
                headers={'X-Auth-Token': self._AUTH_TOKEN})
            json_data = self._download_json(request, video_id)['results']
            formats = []
    
    
class C56IE(InfoExtractor):
    _VALID_URL = r'https?://(?:(?:www|player)\.)?56\.com/(?:.+?/)?(?:v_|(?:play_album.+-))(?P<textid>.+?)\.(?:html|swf)'
    IE_NAME = '56.com'
    _TESTS = [{
        'url': 'http://www.56.com/u39/v_OTM0NDA3MTY.html',
        'md5': 'e59995ac63d0457783ea05f93f12a866',
        'info_dict': {
            'id': '93440716',
            'ext': 'flv',
            'title': '网事知多少 第32期：车怒',
            'duration': 283.813,
        },
    }, {
        'url': 'http://www.56.com/u47/v_MTM5NjQ5ODc2.html',
        'md5': '',
        'info_dict': {
            'id': '82247482',
            'title': '爱的诅咒之杜鹃花开',
        },
        'playlist_count': 7,
        'add_ie': ['Sohu'],
    }]
    
            uploader = self._search_regex(
            r'Added by\s*:\s*<a[^>]+>([^<]+)</a>', webpage, 'uploader', default=None)
        upload_date = unified_strdate(self._search_regex(
            r'Added on\s*:\s*([\d-]+)', webpage, 'upload date', default=None))
    
        def should_set_cookie(self, app, session):
        '''Used by session backends to determine if a ``Set-Cookie`` header
        should be set for this session cookie for this response. If the session
        has been modified, the cookie is set. If the session is permanent and
        the ``SESSION_REFRESH_EACH_REQUEST`` config is true, the cookie is
        always set.
    
        def test_all_methods(self, invoke):
        output = invoke(['routes']).output
        assert 'GET, HEAD, OPTIONS, POST' not in output
        output = invoke(['routes', '--all-methods']).output
        assert 'GET, HEAD, OPTIONS, POST' in output
    
        from site_app import app
    assert app.instance_path == \
        modules_tmpdir.join('var').join('site_app-instance')
    
        yield
    
    
def test_memory_consumption():
    app = flask.Flask(__name__)
    
    
def test_context_test(app):
    assert not flask.request
    assert not flask.has_request_context()
    ctx = app.test_request_context()
    ctx.push()
    try:
        assert flask.request
        assert flask.has_request_context()
    finally:
        ctx.pop()
    
        flask.message_flashed.connect(record, app)
    try:
        client = app.test_client()
        with client.session_transaction():
            client.get('/')
            assert len(recorded) == 1
            message, category = recorded[0]
            assert message == 'This is a flash message'
            assert category == 'notice'
    finally:
        flask.message_flashed.disconnect(record, app)
    
        '''
    var = pvariance(data, mu)
    try:
        return var.sqrt()
    except AttributeError:
        return math.sqrt(var)

    
    def test_main(verbose=None):
    import sys
    test_classes = (
        TestBasic,
        TestVariousIteratorArgs,
        TestSubclass,
        TestSubclassWithKwargs,
        TestSequence,
    )
    
            Uses email.message.Message to create a 7bit clean string
        representation of the message.'''
        return email.message_from_bytes(self.get_bytes(key)).as_string()
    
        # This dictionary maps from (feature,value) to a list of
    # (option,value) pairs that should be set on the Options object.
    # If a (feature,value) setting is not in this dictionary, it is
    # not supported by the DOMBuilder.
    #
    _settings = {
        ('namespace_declarations', 0): [
            ('namespace_declarations', 0)],
        ('namespace_declarations', 1): [
            ('namespace_declarations', 1)],
        ('validation', 0): [
            ('validation', 0)],
        ('external_general_entities', 0): [
            ('external_general_entities', 0)],
        ('external_general_entities', 1): [
            ('external_general_entities', 1)],
        ('external_parameter_entities', 0): [
            ('external_parameter_entities', 0)],
        ('external_parameter_entities', 1): [
            ('external_parameter_entities', 1)],
        ('validate_if_schema', 0): [
            ('validate_if_schema', 0)],
        ('create_entity_ref_nodes', 0): [
            ('create_entity_ref_nodes', 0)],
        ('create_entity_ref_nodes', 1): [
            ('create_entity_ref_nodes', 1)],
        ('entities', 0): [
            ('create_entity_ref_nodes', 0),
            ('entities', 0)],
        ('entities', 1): [
            ('entities', 1)],
        ('whitespace_in_element_content', 0): [
            ('whitespace_in_element_content', 0)],
        ('whitespace_in_element_content', 1): [
            ('whitespace_in_element_content', 1)],
        ('cdata_sections', 0): [
            ('cdata_sections', 0)],
        ('cdata_sections', 1): [
            ('cdata_sections', 1)],
        ('comments', 0): [
            ('comments', 0)],
        ('comments', 1): [
            ('comments', 1)],
        ('charset_overrides_xml_encoding', 0): [
            ('charset_overrides_xml_encoding', 0)],
        ('charset_overrides_xml_encoding', 1): [
            ('charset_overrides_xml_encoding', 1)],
        ('infoset', 0): [],
        ('infoset', 1): [
            ('namespace_declarations', 0),
            ('validate_if_schema', 0),
            ('create_entity_ref_nodes', 0),
            ('entities', 0),
            ('cdata_sections', 0),
            ('datatype_normalization', 1),
            ('whitespace_in_element_content', 1),
            ('comments', 1),
            ('charset_overrides_xml_encoding', 1)],
        ('supported_mediatypes_only', 0): [
            ('supported_mediatypes_only', 0)],
        ('namespaces', 0): [
            ('namespaces', 0)],
        ('namespaces', 1): [
            ('namespaces', 1)],
    }
    
    int WINAPI WinMain(
    HINSTANCE hInstance,      // handle to current instance
    HINSTANCE hPrevInstance,  // handle to previous instance
    LPSTR lpCmdLine,          // pointer to command line
    int nCmdShow              // show state of window
    )
{
    extern int Py_FrozenMain(int, char **);
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return Py_FrozenMain(__argc, __argv);
}
'''
    
        @support.requires_IEEE_754
    def test_overflow(self):
        self.assertEqual(complex('1e500'), complex(INF, 0.0))
        self.assertEqual(complex('-1e500j'), complex(0.0, -INF))
        self.assertEqual(complex('-1e500+1.8e308j'), complex(-INF, INF))
    
    
class Scientist(AbstractExpert):
    
        def test_shall_toggle_from_am_to_fm(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'FM'
        self.assertEqual(state, expected_state_name)
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        # commands are just pushed into the command stack
    command_stack.append(MoveFileCommand('foo.txt', 'bar.txt'))
    command_stack.append(MoveFileCommand('bar.txt', 'baz.txt'))
    
        def __get__(self, obj, T):
        def transaction(*args, **kwargs):
            state = memento(obj)
            try:
                return self.method(obj, *args, **kwargs)
            except Exception as e:
                state()
                raise e
    
        print(root_specification.is_satisfied_by(andrey))
    print(root_specification.is_satisfied_by(ivan))
    print(root_specification.is_satisfied_by(vasiliy))