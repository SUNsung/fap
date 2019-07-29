
        
            def handle_budget_notifications(self, key, total):
        '''Call notification API if nearing or exceeded budget.'''
        ...
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def insert_crawled_link(self, url, signature):
        '''Add the given link to `crawled_links`.'''
        pass
    
        def test_immutable_content_type(self):
        '''Regression for #9362
        The problem depends only on InlineAdminForm and its 'original'
        argument, so we can safely set the other arguments to None/{}. We just
        need to check that the content_type argument of Child isn't altered by
        the internals of the inline form.'''
    
        def set_password(self, raw_password):
        raise NotImplementedError('Django doesn't provide a DB representation for AnonymousUser.')
    
        def test_version_dev_tuple(self):
        expect = ('1.2.3dev', 1, 2, 3)
        ops = FakePostGISOperations(expect[0])
        actual = ops.postgis_version_tuple()
        self.assertEqual(expect, actual)
    
    
class OFTInteger64List(Field):
    pass
    
        def __init__(self, layer_ptr, ds):
        '''
        Initialize on an OGR C pointer to the Layer and the `DataSource` object
        that owns this layer.  The `DataSource` object is required so that a
        reference to it is kept with this Layer.  This prevents garbage
        collection of the `DataSource` while this Layer is still active.
        '''
        if not layer_ptr:
            raise GDALException('Cannot create Layer, invalid pointer given')
        self.ptr = layer_ptr
        self._ds = ds
        self._ldefn = capi.get_layer_defn(self._ptr)
        # Does the Layer support random reading?
        self._random_read = self.test_capability(b'RandomRead')
    
            self.obj = Foo()
    
        # Generators get exhausted on use, so run setup before every call
    number = 1
    repeat = (3, 250, 10)
    
    
from .pandas_vb_common import setup  # noqa: F401
