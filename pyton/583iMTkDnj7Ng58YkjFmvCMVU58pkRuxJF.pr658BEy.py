
        
        
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        '''
)
network.add_argument(
    '--check-status',
    default=False,
    action='store_true',
    help='''
    By default, HTTPie exits with 0 when no network or other fatal errors
    occur. This flag instructs HTTPie to also check the HTTP status code and
    exit with an error if the status indicates one.
    
        def test_verify_custom_ca_bundle_invalid_path(self, httpbin_secure):
        # since 2.14.0 requests raises IOError
        with pytest.raises((SSLError, IOError)):
            http(httpbin_secure.url + '/get', '--verify', '/__not_found__')
    
        def prompt_password(self, host):
        try:
            self.value = self._getpass(
                'http: password for %s@%s: ' % (self.key, host))
        except (EOFError, KeyboardInterrupt):
            sys.stderr.write('\n')
            sys.exit(0)
    
        def _hash_function(self, key):
        return key % self.size
    
    seller_category_map = {}
seller_category_map['Exxon'] = DefaultCategories.GAS
seller_category_map['Target'] = DefaultCategories.SHOPPING
    
    from mrjob.job import MRJob
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
    from superset import db
from superset.models.core import Database
    
        # DESCRIBE | DESC qualifiedName
    def test_describe(self):
        self.assertEquals({'t1'}, self.extract_tables('DESCRIBE t1'))
        self.assertEquals({'t1'}, self.extract_tables('DESC t1'))
    
        # 4. Delete empty roles from permission view menues
    pvms = sm.get_session.query(sm.permissionview_model).all()
    for pvm in pvms:
        pvm.role = [r for r in pvm.role if r]
    sm.get_session.commit()
    
        def get_query_str(self, query_obj):
        '''Returns a query as a string
    
    from sqlalchemy.orm.session import make_transient
    
    
def cast_form_data(form_data):
    '''Translates old to new form_data'''
    d = {}
    fields = frontend_config.get('controls', {})
    for k, v in form_data.items():
        field_config = fields.get(k, {})
        ft = field_config.get('type')
        if ft == 'CheckboxControl':
            # bug in some urls with dups on bools
            if isinstance(v, list):
                v = 'y' in v
            else:
                v = True if v in ('true', 'y') or v is True else False
        elif v and ft == 'TextControl' and field_config.get('isInt'):
            v = int(v) if v != '' else None
        elif v and ft == 'TextControl' and field_config.get('isFloat'):
            v = float(v) if v != '' else None
        elif v and ft == 'SelectControl':
            if field_config.get('multi'):
                if type(form_data).__name__ == 'ImmutableMultiDict':
                    v = form_data.getlist(k)
                elif not isinstance(v, list):
                    v = [v]
        if d.get('slice_id'):
            d['slice_id'] = int(d['slice_id'])
    
        It also understands ``NaN``, ``Infinity``, and ``-Infinity`` as
    their corresponding ``float`` values, which is outside the JSON spec.
    
            m = match_number(string, idx)
        if m is not None:
            integer, frac, exp = m.groups()
            if frac or exp:
                res = parse_float(integer + (frac or '') + (exp or ''))
            else:
                res = parse_int(integer)
            return res, m.end()
        elif nextchar == 'N' and string[idx:idx + 3] == 'NaN':
            return parse_constant('NaN'), idx + 3
        elif nextchar == 'I' and string[idx:idx + 8] == 'Infinity':
            return parse_constant('Infinity'), idx + 8
        elif nextchar == '-' and string[idx:idx + 9] == '-Infinity':
            return parse_constant('-Infinity'), idx + 9
        else:
            raise StopIteration(idx)
    
        print('$(target)$(debug_suffix)%s: $(temp_dir) $(OBJS)' % (target_ext))
    print('\tlink -out:$(target)$(debug_suffix)%s %s' %
          (target_ext, target_link_flags), '@<<')
    print('\t$(OBJS)')
    print('\t$(LIBS)')
    print('\t$(ADDN_LINK_FILES)')
    print('\t$(pythonlib) $(lcustom) $(l_debug)')
    print('\t$(resources)')
    print('<<')
    print()
    print('clean:')
    print('\t-del /f *.obj')
    print('\t-del /f $(target).exe')

    
                    if not args:
                    # args=NULL, nargs=0, kwargs=NULL
                    result = _testcapi.pyobject_fastcalldict(func, None, None)
                    self.check_result(result, expected)
    
        # We divide frames into:
    #   - 'python frames':
    #       - 'bytecode frames' i.e. PyEval_EvalFrameEx
    #       - 'other python frames': things that are of interest from a python
    #         POV, but aren't bytecode (e.g. GC, GIL)
    #   - everything else
    
        def _create_infile(self):
        infile = support.TESTFN
        with open(infile, 'w') as fp:
            self.addCleanup(os.remove, infile)
            fp.write(self.data)
        return infile
    
    class X(Structure):
    _fields_ = [('c_int', c_int)]
    init_called = False
    def __init__(self):
        self._init_called = True