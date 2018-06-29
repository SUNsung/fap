
        
        
def _py_files(folder):
    return glob.glob(folder + '/*.py') + glob.glob(folder + '/*/*.py')
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
        def run(self, args, opts):
        if opts.list:
            self._list_templates()
            return
        if opts.dump:
            template_file = self._find_template(opts.dump)
            if template_file:
                with open(template_file, 'r') as f:
                    print(f.read())
            return
        if len(args) != 2:
            raise UsageError()
    
        def tested_methods_from_spidercls(self, spidercls):
        methods = []
        for key, value in vars(spidercls).items():
            if (callable(value) and value.__doc__ and
                    re.search(r'^\s*@', value.__doc__, re.MULTILINE)):
                methods.append(key)
    
        `mask` is a `bytes` object of length 4; `data` is a `bytes` object of any length.
    Returns a `bytes` object of the same length as `data` with the mask applied
    as specified in section 5.3 of RFC 6455.
    
        def get_websocket_protocol(self):
        return WebSocketProtocol13(self, mask_outgoing=True,
                                   compression_options=self.compression_options)
    
    Thread-safety notes
-------------------
    
            class WithoutUserModuleHandler(CurrentUserModuleHandler):
            def get(self):
                self.render_string('without_user_module.html')
                self.finish(str(self.has_loaded_current_user))
    
    # Verify that the SSL module has all the modern upgrades. Check for several
# names individually since they were introduced at different versions,
# although they should all be present by Python 3.4 or 2.7.9.
if (not hasattr(ssl, 'SSLContext') or
        not hasattr(ssl, 'create_default_context') or
        not hasattr(ssl, 'match_hostname')):
    raise ImportError('Tornado requires an up-to-date SSL module. This means '
                      'Python 2.7.9+ or 3.4+ (although some distributions have '
                      'backported the necessary changes to older versions).')
    
        @gen_test
    def test_maxsize(self):
        self.assertRaises(TypeError, queues.Queue, maxsize=None)
        self.assertRaises(ValueError, queues.Queue, maxsize=-1)