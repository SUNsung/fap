
        
            def test_database_schema_hive(self):
        sqlalchemy_uri = 'hive://hive@hive.airbnb.io:10000/default?auth=NOSASL'
        model = Database(sqlalchemy_uri=sqlalchemy_uri)
        db = make_url(model.get_sqla_engine().url).database
        self.assertEquals('default', db)
    
        # DESCRIBE | DESC qualifiedName
    def test_describe(self):
        self.assertEquals({'t1'}, self.extract_tables('DESCRIBE t1'))
        self.assertEquals({'t1'}, self.extract_tables('DESC t1'))
    
    
cleanup_permissions()

    
        id = Column(Integer, primary_key=True)
    column_name = Column(String(255))
    verbose_name = Column(String(1024))
    is_active = Column(Boolean, default=True)
    type = Column(String(32))
    groupby = Column(Boolean, default=False)
    count_distinct = Column(Boolean, default=False)
    sum = Column(Boolean, default=False)
    avg = Column(Boolean, default=False)
    max = Column(Boolean, default=False)
    min = Column(Boolean, default=False)
    filterable = Column(Boolean, default=False)
    description = Column(Text)
    is_dttm = None
    
        list_columns = [
        'link', 'database',
        'changed_by_', 'modified']
    order_columns = ['modified']
    add_columns = ['database', 'schema', 'table_name']
    edit_columns = [
        'table_name', 'sql', 'filter_select_enabled', 'slices',
        'fetch_values_predicate', 'database', 'schema',
        'description', 'owner',
        'main_dttm_col', 'default_endpoint', 'offset', 'cache_timeout']
    show_columns = edit_columns + ['perm']
    related_views = [TableColumnInlineView, SqlMetricInlineView]
    base_order = ('changed_on', 'desc')
    search_columns = (
        'database', 'schema', 'table_name', 'owner',
    )
    description_columns = {
        'slices': _(
            'The list of slices associated with this table. By '
            'altering this datasource, you may change how these associated '
            'slices behave. '
            'Also note that slices need to point to a datasource, so '
            'this form will fail at saving if removing slices from a '
            'datasource. If you want to change the datasource for a slice, '
            'overwrite the slice from the 'explore view''),
        'offset': _('Timezone offset (in hours) for this datasource'),
        'table_name': _(
            'Name of the table that exists in the source database'),
        'schema': _(
            'Schema, as used only in some databases like Postgres, Redshift '
            'and DB2'),
        'description': Markup(
            'Supports <a href='https://daringfireball.net/projects/markdown/'>'
            'markdown</a>'),
        'sql': _(
            'This fields acts a Superset view, meaning that Superset will '
            'run a query against this string as a subquery.',
        ),
        'fetch_values_predicate': _(
            'Predicate applied when fetching distinct value to '
            'populate the filter control component. Supports '
            'jinja template syntax. Applies only when '
            '`Enable Filter Select` is on.',
        ),
        'default_endpoint': _(
            'Redirects to this endpoint when clicking on the table '
            'from the table list'),
        'filter_select_enabled': _(
            'Whether to populate the filter's dropdown in the explore '
            'view's filter section with a list of distinct values fetched '
            'from the backend on the fly'),
    }
    base_filters = [['id', DatasourceFilter, lambda: []]]
    label_columns = {
        'slices': _('Associated Charts'),
        'link': _('Table'),
        'changed_by_': _('Changed By'),
        'database': _('Database'),
        'changed_on_': _('Last Changed'),
        'filter_select_enabled': _('Enable Filter Select'),
        'schema': _('Schema'),
        'default_endpoint': _('Default Endpoint'),
        'offset': _('Offset'),
        'cache_timeout': _('Cache Timeout'),
        'table_name': _('Table Name'),
        'fetch_values_predicate': _('Fetch Values Predicate'),
        'owner': _('Owner'),
        'main_dttm_col': _('Main Datetime Column'),
        'description': _('Description'),
    }
    
        # find if the column was already imported
    existing_column = lookup_obj(i_obj)
    i_obj.table = None
    if existing_column:
        existing_column.override(i_obj)
        session.flush()
        return existing_column
    
    import logging
from logging.config import fileConfig
    
    
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
    
        def _explain_to(self, message):
        '''Copy Maildir-specific state to message insofar as possible.'''
        if isinstance(message, MaildirMessage):
            message.set_flags(self.get_flags())
            message.set_subdir(self.get_subdir())
            message.set_date(self.get_date())
        elif isinstance(message, _mboxMMDFMessage):
            flags = set(self.get_flags())
            if 'S' in flags:
                message.add_flag('R')
            if self.get_subdir() == 'cur':
                message.add_flag('O')
            if 'T' in flags:
                message.add_flag('D')
            if 'F' in flags:
                message.add_flag('F')
            if 'R' in flags:
                message.add_flag('A')
            message.set_from('MAILER-DAEMON', time.gmtime(self.get_date()))
        elif isinstance(message, MHMessage):
            flags = set(self.get_flags())
            if 'S' not in flags:
                message.add_sequence('unseen')
            if 'R' in flags:
                message.add_sequence('replied')
            if 'F' in flags:
                message.add_sequence('flagged')
        elif isinstance(message, BabylMessage):
            flags = set(self.get_flags())
            if 'S' not in flags:
                message.add_label('unseen')
            if 'T' in flags:
                message.add_label('deleted')
            if 'R' in flags:
                message.add_label('answered')
            if 'P' in flags:
                message.add_label('forwarded')
        elif isinstance(message, Message):
            pass
        else:
            raise TypeError('Cannot convert to specified type: %s' %
                            type(message))
    
        def abort(self):
        # What does it mean to 'clear' a document?  Does the
        # documentElement disappear?
        raise NotImplementedError(
            'haven't figured out what this means yet')
    
            self.assertEqual(s(1, 2), 3)
        self.assertEqual(c(1, 2), 3)
        # The following no longer raises a TypeError - it is now
        # possible, as in C, to call cdecl functions with more parameters.
        #self.assertRaises(TypeError, c, 1, 2, 3)
        self.assertEqual(c(1, 2, 3, 4, 5, 6), 3)
        if not WINFUNCTYPE is CFUNCTYPE:
            self.assertRaises(TypeError, s, 1, 2, 3)
    
    ctype_types = [c_byte, c_ubyte, c_short, c_ushort, c_int, c_uint,
                 c_long, c_ulong, c_longlong, c_ulonglong, c_double, c_float]
python_types = [int, int, int, int, int, int,
                int, int, int, int, float, float]
    
        @abc.abstractmethod
    def contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
        def test_human_shall_speak(self):
        noise = self.human.speak()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
        def test_cat_eng_localization(self):
        self.assertEqual(self.e.get('cat'), 'cat')
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)