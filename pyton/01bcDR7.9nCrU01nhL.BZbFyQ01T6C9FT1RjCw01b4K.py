
        
        
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        def test_server_finishes_on_error(self):
        '''the server thread exits even if an exception exits the context manager'''
        server = Server.basic_response_server()
        with pytest.raises(Exception):
            with server:
                raise Exception()
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        # Check cryptography version
    from cryptography import __version__ as cryptography_version
    _check_cryptography(cryptography_version)
except ImportError:
    pass
    
    
class RequestException(IOError):
    '''There was an ambiguous exception that occurred while handling your
    request.
    '''
    
                headers = prepared_request.headers
            try:
                del headers['Cookie']
            except KeyError:
                pass
    
    
@pytest.fixture()
def chdir(tmpdir):
    '''Change to pytest-provided temporary directory'''
    tmpdir.chdir()

    
            if opts.pdb:
            failure.startDebugMode()
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
    from pylons import request
from pylons import tmpl_context as c
from pylons import app_globals as g
    
            # Display error documents for 401, 403, 404 status codes (and 500 when
        # debug is disabled)
        app = ErrorDocuments(app, global_conf, error_mapper, **app_conf)
    
    api('wikibasepage', WikiJsonTemplate)
api('wikipagerevisions', WikiJsonTemplate)
api('wikiview', WikiViewJsonTemplate)
api('wikirevision', WikiRevisionJsonTemplate)
    
                send_gift(
                buyer=buyer,
                recipient=recipient,
                months=months,
                days=months * 31,
                signed=False,
                giftmessage=None,
                thing_fullname=thing_fullname,
                note=note,
            )
    
        def GET_widget_demo_page(self):
        return BoringPage(_('reddit widget'),
                          show_sidebar = False, 
                          content=WidgetDemoPanel()).render()
