
        
            if member.__doc__ is None and not member_too_small(member):
        raise ValueError('{} class doesn't have any documentation'.format(name),
                         member.__module__, inspect.getmodule(member).__file__)
    for n, met in inspect.getmembers(member):
        if inspect.ismethod(met):
            handle_method(n, met)
    
        history = model.fit(x, ys, validation_split=0.05, batch_size=10,
                        verbose=0, epochs=3)
    ground_truth = -np.log(0.5)
    assert(np.abs(history.history['loss'][-1] - ground_truth) < 0.06)
    
        assert np.all(model.predict(inputs) == output)
    
        @classmethod
    def get_datasource(cls, datasource_type, datasource_id, session):
        return (
            session.query(cls.sources[datasource_type])
            .filter_by(id=datasource_id)
            .first()
        )
    
            logging.info('Importing %d %s',
                     len(data.get(DRUID_CLUSTERS_KEY, [])),
                     DRUID_CLUSTERS_KEY)
        for datasource in data.get(DRUID_CLUSTERS_KEY, []):
            DruidCluster.import_from_dict(session, datasource, sync=sync)
        session.commit()
    else:
        logging.info('Supplied object is not a dictionary.')

    
        def __init__(self, database=None, query=None, table=None, **kwargs):
        self.database = database
        self.query = query
        self.schema = None
        if query and query.schema:
            self.schema = query.schema
        elif table:
            self.schema = table.schema
        self.context = {
            'url_param': url_param,
            'current_user_id': current_user_id,
            'current_username': current_username,
            'form_data': {},
        }
        self.context.update(kwargs)
        self.context.update(BASE_CONTEXT)
        if self.engine:
            self.context[self.engine] = self
        self.env = SandboxedEnvironment()
    
    
def cast_filter_data(form_data):
    '''Used by cast_form_data to parse the filters'''
    flts = []
    having_flts = []
    fd = form_data
    filter_pattern = re.compile(r'''((?:[^,'']|'[^']*'|'[^']*')+)''')
    for i in range(0, 10):
        for prefix in ['flt', 'having']:
            col_str = '{}_col_{}'.format(prefix, i)
            op_str = '{}_op_{}'.format(prefix, i)
            val_str = '{}_eq_{}'.format(prefix, i)
            if col_str in fd and op_str in fd and val_str in fd \
               and len(fd[val_str]) > 0:
                f = {}
                f['col'] = fd[col_str]
                f['op'] = fd[op_str]
                if prefix == 'flt':
                    # transfer old strings in filter value to list
                    splitted = filter_pattern.split(fd[val_str])[1::2]
                    values = [types.replace(''', '').strip() for types in splitted]
                    f['val'] = values
                    flts.append(f)
                if prefix == 'having':
                    f['val'] = fd[val_str]
                    having_flts.append(f)
            if col_str in fd:
                del fd[col_str]
            if op_str in fd:
                del fd[op_str]
            if val_str in fd:
                del fd[val_str]
    fd['filters'] = flts
    fd['having_filters'] = having_flts
    return fd
    
    
def find_constraint_name(upgrade=True):
    cols = {'column_name'} if upgrade else {'datasource_name'}
    return generic_find_constraint_name(
        table='columns', columns=cols, referenced='datasources', db=db)
    
        def __init__(self, parent, title, message, used_names,
                 *, _htest=False, _utest=False):
        super().__init__(parent, title, message, used_names=used_names,
                         _htest=_htest, _utest=_utest)
    
        >>> mode(['red', 'blue', 'blue', 'red', 'green', 'red', 'red'])
    'red'
    
            for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            s = pickle.dumps(d, proto)
            e = pickle.loads(s)
            self.assertNotEqual(id(d), id(e))
            self.assertEqual(type(d), type(e))
            self.assertEqual(list(d), list(e))
    
    def test():
    for i in range(256):
        c = chr(i)
        s = repr(c)
        e = evalString(s)
        if e != c:
            print(i, c, s, e)
    
        print('LIBS=', end=' ')
    for lib in libs: print(''%s'' % (lib), end=' ')
    print() ; print()
    
        def find_byname(self, name):
        '''Return (red, green, blue) for name'''
        name = name.lower()
        try:
            return self.__byname[name]
        except KeyError:
            raise BadColor(name) from None
    
            # Misc. other alternate tests
        self.assertEqual(format((-1.5+0.5j), '#f'), '-1.500000+0.500000j')
        self.assertEqual(format((-1.5+0.5j), '#.0f'), '-2.+0.j')
        self.assertEqual(format((-1.5+0.5j), '#e'), '-1.500000e+00+5.000000e-01j')
        self.assertEqual(format((-1.5+0.5j), '#.0e'), '-2.e+00+5.e-01j')
        self.assertEqual(format((-1.5+0.5j), '#g'), '-1.50000+0.500000j')
        self.assertEqual(format((-1.5+0.5j), '.0g'), '-2+0.5j')
        self.assertEqual(format((-1.5+0.5j), '#.0g'), '-2.+0.5j')