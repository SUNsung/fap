
        
                # FIXME: Authorization *sometimes* is not present on Python3
        assert (r2.json['headers']['Authorization']
                == HTTPBasicAuth.make_header(u'test', UNICODE))
        # httpbin doesn't interpret utf8 headers
        assert UNICODE in r2
    
            actual = get_unique_filename(orig_name, attempts(unique_on_attempt))
        assert expected == actual
    
    
class HTTPieHTTPAdapter(HTTPAdapter):
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        '''
    color = b'\x1b['
    encoding = outfile.encoding
    for chunk in stream:
        if color in chunk:
            outfile.write(chunk.decode(encoding))
        else:
            outfile.buffer.write(chunk)
        if flush:
            outfile.flush()
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
        def test_implicit_GET_with_headers(self, httpbin):
        r = http(httpbin.url + '/headers', 'Foo:bar')
        assert HTTP_OK in r
        assert r.json['headers']['Foo'] == 'bar'
    
    
@pytest.mark.parametrize(
    'func',
    [np.isfinite, np.isinf, np.isnan, np.signbit],
    ids=lambda func: func.__name__,
)
def test_numpy_type_funcs(idx, func):
    msg = (
        'ufunc '{}' not supported for the input types, and the inputs'
        ' could not be safely coerced to any supported types according to'
        ' the casting rule ''safe'''
    ).format(func.__name__)
    with pytest.raises(TypeError, match=msg):
        func(idx)

    
            target = [-0.1, 0.5, 1.1]
        tm.assert_numpy_array_equal(
            idx.get_indexer(target, 'pad'), np.array([-1, 0, 1], dtype=np.intp)
        )
        tm.assert_numpy_array_equal(
            idx.get_indexer(target, 'backfill'), np.array([0, 1, 2], dtype=np.intp)
        )
        tm.assert_numpy_array_equal(
            idx.get_indexer(target, 'nearest'), np.array([0, 1, 1], dtype=np.intp)
        )