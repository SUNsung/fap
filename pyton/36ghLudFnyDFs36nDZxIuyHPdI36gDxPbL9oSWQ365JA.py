
        
                complex_vh = VirtualHost(
            'fp', 'vhp',
            set([Addr.fromstring('*:443'), Addr.fromstring('1.2.3.4:443')]),
            False, False)
        self.assertTrue(complex_vh.conflicts([self.addr1]))
        self.assertTrue(complex_vh.conflicts([self.addr2]))
        self.assertFalse(complex_vh.conflicts([self.addr_default]))
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
    
    from certbot import interfaces
from certbot.plugins import common
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
    # Timeout duration for SQL Lab synchronous queries
SQLLAB_TIMEOUT = 30
    
            verbose_map = {'__timestamp': 'Time'}
        verbose_map.update({
            o.metric_name: o.verbose_name or o.metric_name
            for o in self.metrics
        })
        verbose_map.update({
            o.column_name: o.verbose_name or o.column_name
            for o in self.columns
        })
        return {
            'all_cols': utils.choicify(self.column_names),
            'column_formats': self.column_formats,
            'database': self.database.data,  # pylint: disable=no-member
            'edit_url': self.url,
            'filter_select': self.filter_select_enabled,
            'filterable_cols': utils.choicify(self.filterable_column_names),
            'gb_cols': utils.choicify(self.groupby_column_names),
            'id': self.id,
            'metrics_combo': self.metrics_combo,
            'name': self.name,
            'order_by_choices': order_by_choices,
            'type': self.type,
            'metrics': [o.data for o in self.metrics],
            'columns': [o.data for o in self.columns],
            'verbose_map': verbose_map,
        }
    
        def values_for_column(self, column_name, limit=10000):
        '''Runs query against sqla to retrieve some
        sample values for the given column.
        '''
        cols = {col.column_name: col for col in self.columns}
        target_col = cols[column_name]
        tp = self.get_template_processor()
        db_engine_spec = self.database.db_engine_spec
    
        @classmethod
    def extra_table_metadata(cls, database, table_name, schema_name):
        indexes = database.get_indexes(table_name, schema_name)
        if not indexes:
            return {}
        cols = indexes[0].get('column_names', [])
        full_table_name = table_name
        if schema_name and '.' not in table_name:
            full_table_name = '{}.{}'.format(schema_name, table_name)
        pql = cls._partition_query(full_table_name)
        col_name, latest_part = cls.latest_partition(
            table_name, schema_name, database, show_first=True)
        return {
            'partitions': {
                'cols': cols,
                'latest': {col_name: latest_part},
                'partitionQuery': pql,
            },
        }
    
            event = Event()
        test = self
        body = []
    
        def test_device_detail(self):
        process = os.popen(self.adb_path + ' shell getprop ro.product.device')
        output = process.read()
        return output
    
                for j in range(w):
                pixel = im_pixel[j, i]
                # 修掉脑袋比下一个小格子还高的情况的 bug
                if abs(j - piece_x) < piece_body_width:
                    continue
    
        # 从 scan_start_y 开始往下扫描，棋子应位于屏幕上半部分，这里暂定不超过 2/3
    for i in range(scan_start_y, int(h * 2 / 3)):
        # 横坐标方面也减少了一部分扫描开销
        for j in range(scan_x_border, w - scan_x_border):
            pixel = im_pixel[j, i]
            # 根据棋子的最低行的颜色判断，找最后一行那些点的平均值，这个颜
            # 色这样应该 OK，暂时不提出来
            if (50 < pixel[0] < 60) \
                    and (53 < pixel[1] < 63) \
                    and (95 < pixel[2] < 110):
                piece_x_sum += j
                piece_x_c += 1
                piece_y_max = max(i, piece_y_max)
    
    
with open('config.json', 'r') as f:
    config = json.load(f)