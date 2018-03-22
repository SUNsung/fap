
        
                return methods
    
    from mrjob.job import MRJob
    
        def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
        def entry_ok(self):
        'Return apparently valid (name, path) or None'
        self.entry_error['text'] = ''
        self.path_error['text'] = ''
        name = self.item_ok()
        path = self.path_ok()
        return None if name is None or path is None else (name, path)
    
    
def _convert(value, T):
    '''Convert value to given numeric type T.'''
    if type(value) is T:
        # This covers the cases where T is Fraction, or where value is
        # a NAN or INF (Decimal or float).
        return value
    if issubclass(T, int) and value.denominator != 1:
        T = float
    try:
        # FIXME: what do we do if this overflows?
        return T(value)
    except TypeError:
        if issubclass(T, Decimal):
            return T(value.numerator)/T(value.denominator)
        else:
            raise
    
        def test_setitem(self):
        morsel = cookies.Morsel()
        morsel['expires'] = 0
        self.assertEqual(morsel['expires'], 0)
        morsel['Version'] = 2
        self.assertEqual(morsel['version'], 2)
        morsel['DOMAIN'] = 'example.com'
        self.assertEqual(morsel['domain'], 'example.com')
    
            self = cls(transitions, type_indices, ttis, abbrs)
        self.tzh = tzh
    
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
    
        X_RGB_TXT -- X Consortium rgb.txt format files.  Three columns of numbers
                 from 0 .. 255 separated by whitespace.  Arbitrary trailing
                 columns used as the color name.
    
        def test_oldargs1_1_kw(self):
        msg = r'count\(\) takes no keyword arguments'
        self.assertRaisesRegex(TypeError, msg, [].count, {}, x=2)
    
        def _marshaled_dispatch(self, data, dispatch_method = None, path = None):
        '''Dispatches an XML-RPC method from marshalled (XML) data.
    
        def test_help_flag(self):
        rc, out, err = assert_python_ok('-m', 'json.tool', '-h')
        self.assertEqual(rc, 0)
        self.assertTrue(out.startswith(b'usage: '))
        self.assertEqual(err, b'')
    
        def test_pickling(self):
        testcases = [(13,), (0, 11), (-22, 10), (20, 3, -1),
                     (13, 21, 3), (-2, 2, 2), (2**65, 2**65+2)]
        for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            for t in testcases:
                with self.subTest(proto=proto, test=t):
                    r = range(*t)
                    self.assertEqual(list(pickle.loads(pickle.dumps(r, proto))),
                                     list(r))
    
    from ctypes import *
import _ctypes_test