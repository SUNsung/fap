
        
            def notify_call_escalated(self, call):
        pass
    
        def send_friend_request(self, friend_id):
        pass
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def reduce_priority_link_to_crawl(self, url):
        '''Reduce the priority of a link in `links_to_crawl` to avoid cycles.'''
        pass
    
    
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
            if error is None:
            # the name is available, store it in the database and go to
            # the login page
            db.execute(
                'INSERT INTO user (username, password) VALUES (?, ?)',
                (username, generate_password_hash(password))
            )
            db.commit()
            return redirect(url_for('auth.login'))
    
    
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
        def make_setup_state(self, app, options, first_registration=False):
        '''Creates an instance of :meth:`~flask.blueprints.BlueprintSetupState`
        object that is later passed to the register callback functions.
        Subclasses can override this to return a subclass of the setup state.
        '''
        return BlueprintSetupState(self, app, options, first_registration)
    
    
def explain_ignored_app_run():
    if os.environ.get('WERKZEUG_RUN_MAIN') != 'true':
        warn(Warning('Silently ignoring app.run() because the '
                     'application is run from the flask command line '
                     'executable.  Consider putting app.run() behind an '
                     'if __name__ == '__main__' guard to silence this '
                     'warning.'), stacklevel=3)

    
    from __future__ import absolute_import
    
        def on_json_loading_failed(self, e):
        '''Called if :meth:`get_json` parsing fails and isn't silenced. If
        this method returns a value, it is used as the return value for
        :meth:`get_json`. The default implementation raises a
        :class:`BadRequest` exception.
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    In Python, the interface we use is simply a callable, which is 'builtin' interface
in Python, and in normal circumstances we can simply use the class itself as
that callable, because classes are first class objects in Python.
    
    class TimeDisplay(object):
    
    class TimeDisplay(object):
    
    production code which is untestable:
    
        def __init__(self, text):
        self._text = text
    
    define('num', default=10000, help='number of iterations')
    
    This module will not work correctly when `.HTTPServer`'s multi-process
mode is used.
    
            # Set the request method through curl's irritating interface which makes
        # up names for almost every single method
        curl_options = {
            'GET': pycurl.HTTPGET,
            'POST': pycurl.POST,
            'PUT': pycurl.UPLOAD,
            'HEAD': pycurl.NOBODY,
        }
        custom_methods = set(['DELETE', 'OPTIONS', 'PATCH'])
        for o in curl_options.values():
            curl.setopt(o, False)
        if request.method in curl_options:
            curl.unsetopt(pycurl.CUSTOMREQUEST)
            curl.setopt(curl_options[request.method], True)
        elif request.allow_nonstandard_methods or request.method in custom_methods:
            curl.setopt(pycurl.CUSTOMREQUEST, request.method)
        else:
            raise KeyError('unknown method ' + request.method)
    
    import os
    
        def test_ioloop_close_leak(self):
        orig_count = len(IOLoop._ioloop_for_asyncio)
        for i in range(10):
            # Create and close an AsyncIOLoop using Tornado interfaces.
            loop = AsyncIOLoop()
            loop.close()
        new_count = len(IOLoop._ioloop_for_asyncio) - orig_count
        self.assertEqual(new_count, 0)
    
    win1251BulgarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 77, 90, 99,100, 72,109,107,101, 79,185, 81,102, 76, 94, 82,  # 40
110,186,108, 91, 74,119, 84, 96,111,187,115,253,253,253,253,253,  # 50
253, 65, 69, 70, 66, 63, 68,112,103, 92,194,104, 95, 86, 87, 71,  # 60
116,195, 85, 93, 97,113,196,197,198,199,200,253,253,253,253,253,  # 70
206,207,208,209,210,211,212,213,120,214,215,216,217,218,219,220,  # 80
221, 78, 64, 83,121, 98,117,105,222,223,224,225,226,227,228,229,  # 90
 88,230,231,232,233,122, 89,106,234,235,236,237,238, 45,239,240,  # a0
 73, 80,118,114,241,242,243,244,245, 62, 58,246,247,248,249,250,  # b0
 31, 32, 35, 43, 37, 44, 55, 47, 40, 59, 33, 46, 38, 36, 41, 30,  # c0
 39, 28, 34, 51, 48, 49, 53, 50, 54, 57, 61,251, 67,252, 60, 56,  # d0
  1, 18,  9, 20, 11,  3, 23, 15,  2, 26, 12, 10, 14,  6,  4, 13,  # e0
  7,  8,  5, 19, 29, 25, 22, 21, 27, 24, 17, 75, 52,253, 42, 16,  # f0
)
    
    Latin2HungarianModel = {
  'char_to_order_map': Latin2_HungarianCharToOrderMap,
  'precedence_matrix': HungarianLangModel,
  'typical_positive_ratio': 0.947368,
  'keep_english_letter': True,
  'charset_name': 'ISO-8859-2',
  'language': 'Hungarian',
}
    
            self._last_char[0] = byte_str[-1]
    
                self._got_data = True
            if self.result['encoding'] is not None:
                self.done = True
                return