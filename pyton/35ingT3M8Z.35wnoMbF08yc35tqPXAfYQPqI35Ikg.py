
        
            @classmethod
    def query_datasources_by_name(
            cls, session, database, datasource_name, schema=None):
        datasource_class = ConnectorRegistry.sources[database.type]
        return datasource_class.query_datasources_by_name(
            session, database, datasource_name, schema=None)

    
        def _delete(self, pk):
        DeleteMixin._delete(self, pk)
    
        @property
    def data(self):
        d = super(SqlaTable, self).data
        if self.type == 'table':
            grains = self.database.grains() or []
            if grains:
                grains = [(g.name, g.name) for g in grains]
            d['granularity_sqla'] = utils.choicify(self.dttm_cols)
            d['time_grain_sqla'] = grains
        return d
    
                if column['type'] in ('OBJECT', None):
                v = sample[col].iloc[0] if not sample[col].empty else None
                if isinstance(v, basestring):
                    column['type'] = 'STRING'
                elif isinstance(v, int):
                    column['type'] = 'INT'
                elif isinstance(v, float):
                    column['type'] = 'FLOAT'
                elif isinstance(v, (datetime, date)):
                    column['type'] = 'DATETIME'
                    column['is_date'] = True
                    column['is_dim'] = False
                # check if encoded datetime
                if (
                        column['type'] == 'STRING' and
                        self.datetime_conversion_rate(sample[col]) >
                        INFER_COL_TYPES_THRESHOLD):
                    column.update({
                        'is_date': True,
                        'is_dim': False,
                        'agg': None,
                    })
            # 'agg' is optional attribute
            if not column['agg']:
                column.pop('agg', None)
            columns.append(column)
        return columns

    
    
def export_schema_to_dict(back_references):
    '''Exports the supported import/export schema to a dictionary'''
    databases = [Database.export_schema(recursive=True,
                 include_parent_ref=back_references)]
    clusters = [DruidCluster.export_schema(recursive=True,
                include_parent_ref=back_references)]
    data = dict()
    if databases:
        data[DATABASES_KEY] = databases
    if clusters:
        data[DRUID_CLUSTERS_KEY] = clusters
    return data
    
         Metrics and columns and datasource will be overrided if exists.
     This function can be used to import/export dashboards between multiple
     superset instances. Audit metadata isn't copies over.
    '''
    make_transient(i_datasource)
    logging.info('Started import of the datasource: {}'.format(
        i_datasource.to_json()))
    
        :param param: the url parameter to lookup
    :type param: str
    :param default: the value to return in the absence of the parameter
    :type default: str
    '''
    print(request.args)
    return request.args.get(param, default)
    
        context.configure(connection=connection,
                      target_metadata=target_metadata,
                      # compare_type=True,
                      process_revision_directives=process_revision_directives,
                      **kwargs)
    
    import importlib
import os
from sys import executable, platform  # Platform is set for one test.
    
        def test_string_with_utf8_bom(self):
        # see #18958
        bom_json = '[1,2,3]'.encode('utf-8-sig').decode('utf-8')
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.loads(bom_json)
        self.assertIn('BOM', str(cm.exception))
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.json.load(StringIO(bom_json))
        self.assertIn('BOM', str(cm.exception))
        # make sure that the BOM is not detected in the middle of a string
        bom_in_str = ''{}''.format(''.encode('utf-8-sig').decode('utf-8'))
        self.assertEqual(self.loads(bom_in_str), '\ufeff')
        self.assertEqual(self.json.load(StringIO(bom_in_str)), '\ufeff')
    
        if C is not None:
        # C version of decimal
        start_calc = time.time()
        x = factorial(C.Decimal(n), 0)
        end_calc = time.time()
        start_conv = time.time()
        sx = str(x)
        end_conv = time.time()
        print('cdecimal:')
        print('calculation time: %fs' % (end_calc-start_calc))
        print('conversion time: %fs\n' % (end_conv-start_conv))
    
    class TZInfo:
    def __init__(self, transitions, type_indices, ttis, abbrs):
        self.transitions = transitions
        self.type_indices = type_indices
        self.ttis = ttis
        self.abbrs = abbrs
    
            resp = self._shortcmd('XPATH {0}'.format(id))
        if not resp.startswith('223'):
            raise NNTPReplyError(resp)
        try:
            [resp_num, path] = resp.split()
        except ValueError:
            raise NNTPReplyError(resp) from None
        else:
            return resp, path
    
        def test_varargs1_ext(self):
        {}.__contains__(*(0,))
    
            The optional name argument can be used to set a Unicode name
        for the function.
        '''
        # decorator factory
        if function is None:
            return partial(self.register_function, name=name)
    
    
def init():
    global distances, press_times
    distances = []
    press_times = []
    
    
class auto_adb():
    def __init__(self):
        try:
            adb_path = 'adb'
            subprocess.Popen([adb_path], stdout=subprocess.PIPE,
                             stderr=subprocess.PIPE)
            self.adb_path = adb_path
        except OSError:
            if platform.system() == 'Windows':
                adb_path = os.path.join('Tools', 'adb', 'adb.exe')
                try:
                    subprocess.Popen(
                        [adb_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
                    self.adb_path = adb_path
                except OSError:
                    pass
            else:
                try:
                    subprocess.Popen(
                        [adb_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
                except OSError:
                    pass
            print('请安装 ADB 及驱动并配置环境变量')
            print('具体链接: https://github.com/wangshub/wechat_jump_game/wiki')
            exit(1)
    
            # actions
        self.steps = 0
        self.params = params
        self.coords = []
        self.ix = [0, 0]
        self.iy = [0, 0]
        self.click_counter = 0
        self.status = True