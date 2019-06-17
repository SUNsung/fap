
        
        PROJECT_NAME = 'Home Assistant'
PROJECT_PACKAGE_NAME = 'homeassistant'
PROJECT_AUTHOR = 'The Home Assistant Authors'
PROJECT_COPYRIGHT = ' 2013-2018, {}'.format(PROJECT_AUTHOR)
PROJECT_LONG_DESCRIPTION = ('Home Assistant is an open-source '
                            'home automation platform running on Python 3. '
                            'Track and control all devices at home and '
                            'automate control. '
                            'Installation in less than a minute.')
PROJECT_GITHUB_USERNAME = 'home-assistant'
PROJECT_GITHUB_REPOSITORY = 'home-assistant'
    
    
def search_tokens(tokens, inverse_index, word_freq=None):
    ''''''
    ret = dict()
    for term in tokens:
        if term in inverse_index:
            ret[frozenset([term])] = inverse_index[term]
        else:
            ret[frozenset([term])] = set()
    return ret
    
        References:
        K.repeat()
        tf.tile()
    '''
    assert x.get_shape().ndims == 2
    x = tf.expand_dims(x, axis=1)  # -> [batch_size, 1, n_input]
    return tf.tile(x, [1, n, 1])  # -> [batch_size, n, n_input]
    
    define('port', default=8888)
define('num_chunks', default=1000)
define('chunk_size', default=2048)
    
        def finish_tree(self, tree, filename):
        if self.found_future_import:
            return
        if not isinstance(tree, pytree.Node):
            # Empty files (usually __init__.py) show up as a single Leaf
            # instead of a Node, so leave them alone
            return
        first_stmt = tree.children[0]
        if is_docstring(first_stmt):
            # Skip a line and add the import after the docstring
            tree.insert_child(1, Newline())
            pos = 2
        elif first_stmt.prefix:
            # No docstring, but an initial comment (perhaps a #! line).
            # Transfer the initial comment to a new blank line.
            newline = Newline()
            newline.prefix = first_stmt.prefix
            first_stmt.prefix = ''
            tree.insert_child(0, newline)
            pos = 1
        else:
            # No comments or docstring, just insert at the start
            pos = 0
        tree.insert_child(pos, self.new_future_import(None))
        tree.insert_child(pos + 1, Newline())  # terminates the import stmt

    
        for i in range(1, num_tests + 1):
        logging.info('running test case %d', i)
        url = options.url + '/runCase?case=%d&agent=%s' % (i, options.name)
        test_ws = yield websocket_connect(url, None, compression_options={})
        while True:
            message = yield test_ws.read_message()
            if message is None:
                break
            test_ws.write_message(message, binary=isinstance(message, bytes))
    
        Running a script with this wrapper is similar to calling
    `tornado.autoreload.wait` at the end of the script, but this wrapper
    can catch import-time problems like syntax errors that would otherwise
    prevent the script from reaching its call to `wait`.
    '''
    # Remember that we were launched with autoreload as main.
    # The main module can be tricky; set the variables both in our globals
    # (which may be __main__) and the real importable version.
    import tornado.autoreload
    
    import os
    
        def test_google_login(self):
        response = self.fetch('/client/login')
        self.assertDictEqual(
            {
                u'name': u'Foo',
                u'email': u'foo@example.com',
                u'access_token': u'fake-access-token',
            },
            json_decode(response.body),
        )
