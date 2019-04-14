
        
            def approve_friend_request(self, from_user_id, to_user_id):
        pass
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def parse_query(self, query):
        '''Remove markup, break text into terms, deal with typos,
        normalize capitalization, convert to use boolean operations.
        '''
        ...
    
        def create_signature(self):
        # Create signature based on url and contents
        pass
    
    # You can now launch tensorboard with `tensorboard --logdir=./logs` on your
# command line and then go to http://localhost:6006/#projector to view the
# embeddings

    
        num_train_samples = 50000
    
        # Arguments
        y: class vector to be converted into a matrix
            (integers from 0 to num_classes).
        num_classes: total number of classes.
        dtype: The data type expected by the input, as a string
            (`float32`, `float64`, `int32`...)
    
    
def train_model(model, train, test, num_classes):
    x_train = train[0].reshape((train[0].shape[0],) + input_shape)
    x_test = test[0].reshape((test[0].shape[0],) + input_shape)
    x_train = x_train.astype('float32')
    x_test = x_test.astype('float32')
    x_train /= 255
    x_test /= 255
    print('x_train shape:', x_train.shape)
    print(x_train.shape[0], 'train samples')
    print(x_test.shape[0], 'test samples')
    
    try:
    import simplejson as json
except ImportError:
    import json
    
        def list_domains(self):
        '''Utility method to list all the domains in the jar.'''
        domains = []
        for cookie in iter(self):
            if cookie.domain not in domains:
                domains.append(cookie.domain)
        return domains
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    
def test_chunked_upload():
    '''can safely send generators'''
    close_server = threading.Event()
    server = Server.basic_response_server(wait_to_close_event=close_server)
    data = iter([b'a', b'b', b'c'])
    
        def iter_content(self, chunk_size=1, decode_unicode=False):
        '''Iterates over the response data.  When stream=True is set on the
        request, this avoids reading the content at once into memory for
        large responses.  The chunk size is the number of bytes it should
        read into memory.  This is not necessarily the length of each item
        returned as decoding can take place.
    
    
# From mitsuhiko/werkzeug (used with permission).
def unquote_header_value(value, is_filename=False):
    r'''Unquotes a header value.  (Reversal of :func:`quote_header_value`).
    This does not use the real unquoting but what browsers are actually
    using for quoting.
    
        for node in doctree.traverse(settingslist_node):
        settings_list = nodes.bullet_list()
        settings_list.extend([make_setting_element(d, app, fromdocname)
                              for d in sorted(env.scrapy_all_settings,
                                              key=itemgetter('setting_name'))
                              if fromdocname != d['docname']])
        node.replace_self(settings_list)
    
    
class QPSSpider(Spider):
    
            if opts.pidfile:
            with open(opts.pidfile, 'w') as f:
                f.write(str(os.getpid()) + os.linesep)
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
    from w3lib.url import is_url
    
    openssl_methods = {
    METHOD_TLS:    SSL.SSLv23_METHOD,                   # protocol negotiation (recommended)
    METHOD_SSLv3:  SSL.SSLv3_METHOD,                    # SSL 3 (NOT recommended)
    METHOD_TLSv10: SSL.TLSv1_METHOD,                    # TLS 1.0 only
    METHOD_TLSv11: getattr(SSL, 'TLSv1_1_METHOD', 5),   # TLS 1.1 only
    METHOD_TLSv12: getattr(SSL, 'TLSv1_2_METHOD', 6),   # TLS 1.2 only
}
    
        We need to handle preprocessors due to classes like this:
      #ifdef SWIG
      struct ResultDetailsPageElementExtensionPoint {
      #else
      struct ResultDetailsPageElementExtensionPoint : public Extension {
      #endif
    }
    }