
        
        from django.db.models.fields import DecimalField, FloatField, IntegerField
from django.db.models.functions import Cast
    
        def get_distance(self, f, dist_val, lookup_type):
        '''
        Retrieve the distance parameters for the given geometry field,
        distance lookup value, and the distance lookup type.
    
        def get_constraints(self, table):
        '''
        Get the indexes on the table using a new cursor.
        '''
        with connection.cursor() as cursor:
            return connection.introspection.get_constraints(cursor, table)
    
        def __init__(self, ds_input, ds_driver=False, write=False, encoding='utf-8'):
        # The write flag.
        if write:
            self._write = 1
        else:
            self._write = 0
        # See also https://trac.osgeo.org/gdal/wiki/rfc23_ogr_unicode
        self.encoding = encoding
    
    from django.contrib.gis.gdal.base import GDALBase
from django.contrib.gis.gdal.error import GDALException
from django.contrib.gis.gdal.prototypes import ds as vcapi, raster as rcapi
from django.utils.encoding import force_bytes, force_str
    
        # #### Feature Methods ####
    def get(self, field):
        '''
        Return the value of the field, instead of an instance of the Field
        object.  May take a string of the field name or a Field object as
        parameters.
        '''
        field_name = getattr(field, 'name', field)
        return self[field_name].value
    
                except ArgumentTypeError as e:
                if self.args.traceback:
                    raise
                self.error(e.args[0])
    
    
def get_requests_session(ssl_version):
    requests_session = requests.Session()
    requests_session.mount(
        'https://',
        HTTPieHTTPAdapter(ssl_version=ssl_version)
    )
    for cls in plugin_manager.get_transport_plugins():
        transport_plugin = cls()
        requests_session.mount(prefix=transport_plugin.prefix,
                               adapter=transport_plugin.get_adapter())
    return requests_session
    
        @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
        return chain(*output)
    
    
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
                if not kwargs['caption']:
                print('Skipping captions.')
                return
            for lang in self.caption_tracks:
                filename = '%s.%s.srt' % (get_filename(self.title), lang)
                print('Saving %s ... ' % filename, end='', flush=True)
                srt = self.caption_tracks[lang]
                with open(os.path.join(kwargs['output_dir'], filename),
                          'w', encoding='utf-8') as x:
                    x.write(srt)
                print('Done.')    
    
        # download the playlist        
    # playlist sample:http://www.kugou.com/yy/special/single/487279.html
    else:
        html = get_html(url)
        pattern = re.compile('data='(\w+)\|(\d+)'')
        for v in pattern.findall(html):
            urls.append('http://www.kugou.com/song/#hash=%s&album_id=%s' % (v[0], v[1]))
            print('http://www.kugou.com/song/#hash=%s&album_id=%s' % (v[0], v[1]))
    
            assert vid
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
                if not info_only:
                try:
                    download_urls([real_url], title, ext, size, output_dir, merge = merge)
                except:
                    pass
    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
                    mapping = KBaseMapping(base=int(base))
                sym_to_name = {}
                for no in range(int(size), 0, -1):
                    no_in_base = mapping.mapping(no)
                    val = names[no] if no < len(names) and names[no] else no_in_base
                    sym_to_name[no_in_base] = val
    
        file_path = './data.txt'
    data = load_data(file_path)
    
        # tokens_list = get_all_subset(tokens)
    # for tokens in tokens_list:
    #     ret[tokens] = search_tokens(tokens, inverse_index, word_freq)
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
    
def multi_dense(x, n_unit_ls, act_fn=relu, name=None):
    '''多层全连接
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_unit_list[-1]]
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    
def get_params_dict():
    '''以字典形式获取所有 trainable 参数'''
    param_dict = dict()
    for var in tf.trainable_variables():
        param_dict[var.name] = {'shape': list(map(int, var.shape)),
                                'number': int(reduce(mul, var.shape, 1))}
    return param_dict
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
        def __str__(self):
        return self.name
    
        >>> try:
    ...    num_obj.do_stuff()
    ... except Exception:
    ...    print('-> doing stuff failed!')
    ...    import sys
    ...    import traceback
    ...    traceback.print_exc(file=sys.stdout)
    -> doing stuff failed!
    Traceback (most recent call last):
    ...
    TypeError: ...str...int...
    
        >>> data2.data = 5
    HexViewer: Subject Data 2 has data 0x5
    DecimalViewer: Subject Data 2 has data 5
    
        def not_specification(self):
        raise NotImplementedError()
    
        def __repr__(self):
        fmt = '<Price: {}, price after discount: {}>'
        return fmt.format(self.price, self.price_after_discount())
    
        def __str__(self):
        return self.state
    
        filenames = []
    for (dirpath, dnames, fnames) in os.walk(path):
        for fname in fnames:
            if fname.endswith('.md'):
                filenames.append(os.sep.join([dirpath, fname]))