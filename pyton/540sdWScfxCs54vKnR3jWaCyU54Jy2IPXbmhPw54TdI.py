
        
            def test_resolve_login_required_view(self):
        match = resolve('/template/login_required/')
        self.assertIs(match.func.view_class, TemplateView)
    
        def test_filtered_aggregate_ref_subquery_annotation(self):
        aggs = Author.objects.annotate(
            earliest_book_year=Subquery(
                Book.objects.filter(
                    contact__pk=OuterRef('pk'),
                ).order_by('pubdate').values('pubdate__year')[:1]
            ),
        ).aggregate(
            cnt=Count('pk', filter=Q(earliest_book_year=2008)),
        )
        self.assertEqual(aggs['cnt'], 2)

    
        def postgis_lib_version(self):
        'Return the version number of the PostGIS library used with PostgreSQL.'
        return self._get_postgis_func('postgis_lib_version')
    
        def test_brin_autosummarize_not_supported(self):
        index_name = 'brin_options_exception'
        index = BrinIndex(fields=['field'], name=index_name, autosummarize=True)
        with self.assertRaisesMessage(NotSupportedError, 'BRIN option autosummarize requires PostgreSQL 10+.'):
            with mock.patch('django.db.backends.postgresql.features.DatabaseFeatures.has_brin_autosummarize', False):
                with connection.schema_editor() as editor:
                    editor.add_index(CharFieldModel, index)
        self.assertNotIn(index_name, self.get_constraints(CharFieldModel._meta.db_table))
    
              # We can also increment through all of the fields
          #  attached to this feature.
          for field in feature:
              # Get the name of the field (e.g. 'description')
              nm = field.name
    
        fp = open(os.path.join(WORKDIR, 'installer', 'Build.txt'), 'w')
    fp.write('# BUILD INFO\n')
    fp.write('# Date: %s\n' % time.ctime())
    fp.write('# By: %s\n' % pwd.getpwuid(os.getuid()).pw_gecos)
    fp.close()
    
        def test_get_code_ImportError(self):
        # If get_code() raises ImportError, it should propagate.
        with self.mock_get_code() as mocked_get_code:
            mocked_get_code.side_effect = ImportError
            with self.assertRaises(ImportError):
                loader = self.InspectLoaderSubclass()
                self.load(loader)
    
            It has no semantics. Multiple threads may be given the same name. The
        initial name is set by the constructor.
    
        def test_named_expression_assignment_03(self):
        (total := 1 + 2)
    
        def __init__(self, filenames=(), strict=True):
        if not inited:
            init()
        self.encodings_map = _encodings_map_default.copy()
        self.suffix_map = _suffix_map_default.copy()
        self.types_map = ({}, {}) # dict for (non-strict, strict)
        self.types_map_inv = ({}, {})
        for (ext, type) in _types_map_default.items():
            self.add_type(type, ext, True)
        for (ext, type) in _common_types_default.items():
            self.add_type(type, ext, False)
        for name in filenames:
            self.read(name, strict)
    
            # This test exploits the fact that __del__ in a reference cycle
        # can be called any time the GC may run.
    
        def test_insert(self):
        b = bytearray(b'msssspp')
        b.insert(1, ord('i'))
        b.insert(4, ord('i'))
        b.insert(-2, ord('i'))
        b.insert(1000, ord('i'))
        self.assertEqual(b, b'mississippi')
        self.assertRaises(TypeError, lambda: b.insert(0, b'1'))
        b = bytearray()
        b.insert(0, Indexable(ord('A')))
        self.assertEqual(b, b'A')
    
    
def _worker(executor_reference, work_queue, initializer, initargs):
    if initializer is not None:
        try:
            initializer(*initargs)
        except BaseException:
            _base.LOGGER.critical('Exception in initializer:', exc_info=True)
            executor = executor_reference()
            if executor is not None:
                executor._initializer_failed()
            return
    try:
        while True:
            work_item = work_queue.get(block=True)
            if work_item is not None:
                work_item.run()
                # Delete references to object. See issue16284
                del work_item
    
    
  def OnCompleteDone( self ):
    if not self.Done():
      return
    
        response = BaseRequest().PostDataToHandler( request_data,
                                                'filter_and_sort_candidates' )
    return response if response is not None else []

    
        poll_again = _HandlePollResponse( response, diagnostics_handler )
    if poll_again:
      self._SendRequest()
      return True
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( ShutdownRequest, self ).__init__()
    
      def ServerResponse( *args ):
    return {
      'completions': [ {
        'insertion_text': 'insertion_text',
        'menu_text': 'menu_text',
        'extra_menu_info': 'extra_menu_info',
        'detailed_info': 'detailed_info',
        'kind': 'kind',
        'extra_data': {
           'doc_string': 'doc_string'
        }
      } ],
      'completion_start_column': 3,
      'errors': [ {
        'exception': {
           'TYPE': 'Exception'
        },
        'message': 'message',
        'traceback': 'traceback'
      } ]
    }
    
      _assert_rejects( f, 'This is a Taco' )
  _assert_accepts( f, 'This is a Burrito' )
    
      def shutdown( self, wait=True ):
    with self._shutdown_lock:
      self._shutdown = True
      self._work_queue.put( None )
    if wait:
      for t in self._threads:
        t.join()
  shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
        # Parse and validate the field names.  Validation serves two purposes,
    # generating informative error messages and preventing template injection attacks.
    if isinstance(field_names, basestring):
        field_names = field_names.replace(',', ' ').split() # names separated by whitespace and/or commas
    field_names = tuple(map(str, field_names))
    for name in (typename,) + field_names:
        if not all(c.isalnum() or c=='_' for c in name):
            raise ValueError('Type names and field names can only contain alphanumeric characters and underscores: %r' % name)
        if _iskeyword(name):
            raise ValueError('Type names and field names cannot be a keyword: %r' % name)
        if name[0].isdigit():
            raise ValueError('Type names and field names cannot start with a number: %r' % name)
    seen_names = set()
    for name in field_names:
        if name.startswith('_'):
            raise ValueError('Field names cannot start with an underscore: %r' % name)
        if name in seen_names:
            raise ValueError('Encountered duplicate field name: %r' % name)
        seen_names.add(name)
    
        def __str__(self):
        '''
        Desc:
            将节点的信息打印出来
        Args:
            None
        Returns:
            None
        '''
        # 打印格式：第几层 - 第几个节点，output 是多少，delta 是多少
        node_str = '%u-%u: output: %f delta: %f' % (self.layer_index, self.node_index, self.output, self.delta)
        # 下游节点
        downstream_str = reduce(lambda ret, conn: ret + '\n\t' + str(conn), self.downstream, '')
        # 上游节点
        upstream_str = reduce(lambda ret, conn: ret + '\n\t' + str(conn), self.upstream, '')
        # 将本节点 + 下游节点 + 上游节点 的信息打印出来
        return node_str + '\n\tdownstream:' + downstream_str + '\n\tupstream:' + upstream_str
    
        def calc_gradient(self, parent):
        '''
        计算每个节点权重的梯度，并将它们求和，得到最终的梯度
        '''
        W_grad = np.zeros((self.node_width, 
                            self.node_width * self.child_count))
        b_grad = np.zeros((self.node_width, 1))
        if not parent.children:
            return W_grad, b_grad
        parent.W_grad = np.dot(parent.delta, parent.children_data.T)
        parent.b_grad = parent.delta
        W_grad += parent.W_grad
        b_grad += parent.b_grad
        for child in parent.children:
            W, b = self.calc_gradient(child)
            W_grad += W
            b_grad += b
        return W_grad, b_grad
    
        # 计算forward值
    x, d = data_set()
    rl.forward(x[0])
    rl.forward(x[1])
    
    # 求取sensitivity map
    sensitivity_array = np.ones(rl.state_list[-1].shape,
                                dtype=np.float64)
    # 计算梯度
    rl.backward(sensitivity_array, IdentityActivator())
    
    # 检查梯度
    epsilon = 10e-4
    for i in range(rl.W.shape[0]):
        for j in range(rl.W.shape[1]):
            rl.W[i,j] += epsilon
            rl.reset_state()
            rl.forward(x[0])
            rl.forward(x[1])
            err1 = error_function(rl.state_list[-1])
            rl.W[i,j] -= 2*epsilon
            rl.reset_state()
            rl.forward(x[0])
            rl.forward(x[1])
            err2 = error_function(rl.state_list[-1])
            expect_grad = (err1 - err2) / (2 * epsilon)
            rl.W[i,j] += epsilon
            print('weights(%d,%d): expected - actural %f - %f' % (
                i, j, expect_grad, rl.gradient[i,j]))
    
    '''
    mapper 接受原始的输入并产生中间值传递给 reducer。
    很多的mapper是并行执行的，所以需要将这些mapper的输出合并成一个值。
    即：将中间的 key/value 对进行组合。
'''
    
    if __name__ == '__main__':
    setup(name='wtfpython',
          version='0.2',
          description='What the f*ck Python!',
          author='Satwik Kansal',
          maintainer='Satwik Kansal',
          maintainer_email='satwikkansal@gmail.com',
          url='https://github.com/satwikkansal/wtfpython',
          platforms='any',
          license='WTFPL 2.0',
          long_description='An interesting collection of subtle & tricky Python Snippets'
                           ' and features.',
          keywords='wtfpython gotchas snippets tricky',
          packages=find_packages(),
          entry_points = {
              'console_scripts': ['wtfpython = wtf_python.main:load_and_read']
          },
          classifiers=[
              'Development Status :: 4 - Beta',