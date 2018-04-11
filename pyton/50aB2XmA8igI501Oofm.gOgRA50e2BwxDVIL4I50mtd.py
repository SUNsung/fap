
        
            strings = []
    with open(filepath, 'r') as f:
    
        def copy_certs_and_keys(self, cert_path, key_path, chain_path=None):
        '''Copies certs and keys into the temporary directory'''
        cert_and_key_dir = os.path.join(self._temp_dir, 'certs_and_keys')
        if not os.path.isdir(cert_and_key_dir):
            os.mkdir(cert_and_key_dir)
    
    # If true, keep warnings as 'system message' paragraphs in the built documents.
#keep_warnings = False
    
    
class RedirectTest(unittest.TestCase):
    '''Test the redirect_by_default method.'''
    @classmethod
    def _call(cls):
        from certbot.display.enhancements import redirect_by_default
        return redirect_by_default()
    
    Subclass SectionName gets a name for a new config file section.
Configdialog uses it for new highlight theme and keybinding set names.
Subclass ModuleName gets a name for File => Open Module.
Subclass HelpSource gets menu item and path for additions to Help menu.
'''
# Query and Section name result from splitting GetCfgSectionNameDialog
# of configSectionNameDialog.py (temporarily config_sec.py) into
# generic and specific parts.  3.6 only, July 2016.
# ModuleName.entry_ok came from editor.EditorWindow.load_module.
# HelpSource was extracted from configHelpSourceEdit.py (temporarily
# config_help.py), with darwin code moved from ok to path_ok.
    
        def description(self, group):
        '''Get a description for a single group.  If more than one
        group matches ('group' is a pattern), return the first.  If no
        group matches, return an empty string.
    
        def test_varargs7_kw(self):
        msg = r'^next\(\) takes no keyword arguments$'
        self.assertRaisesRegex(TypeError, msg, next, x=2)
    
            return documenter.page(self.server_title, documentation)
    
            s = b'a\nb\nc'
        b = c_string(s)
    
        def test_charpp(self):
        '''Test that a character pointer-to-pointer is correctly passed'''
        dll = CDLL(_ctypes_test.__file__)
        func = dll._testfunc_c_p_p
        func.restype = c_char_p
        argv = (c_char_p * 2)()
        argc = c_int( 2 )
        argv[0] = b'hello'
        argv[1] = b'world'
        result = func( byref(argc), argv )
        self.assertEqual(result, b'world')
    
        def simple_event(self, name):
        stats = self.stacked_proxy_safe_get(g, 'stats', None)
        if stats:
            return stats.simple_event(name)

    
            res = AdminPage(content = AdminAwardGive(award, recipient, desc,
                                                 url, hours),
                        title='give an award').render()
        return res
    
            To request a new CAPTCHA,
        use [/api/new_captcha](#POST_api_new_captcha).
        '''
        image = captcha.get_image(iden)
        f = StringIO.StringIO()
        image.save(f, 'PNG')
        response.content_type = 'image/png;'
        return f.getvalue()
    

    
                if (error_name == 'IN_TIMEOUT' and
                    not 'usable_error_content' in request.environ):
                timeout_days_remaining = c.user.days_remaining_in_timeout
    
    import pylibmc
from pylons import request, response
from pylons import app_globals as g
from pylons.controllers.util import abort