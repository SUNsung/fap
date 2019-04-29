
        
            def save(self, must_create=False):
        if self.session_key is None:
            return self.create()
        if must_create:
            func = self._cache.add
        elif self._cache.get(self.cache_key) is not None:
            func = self._cache.set
        else:
            raise UpdateError
        result = func(self.cache_key,
                      self._get_session(no_load=must_create),
                      self.get_expiry_age())
        if must_create and not result:
            raise CreateError
    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
    
class Session(AbstractBaseSession):
    '''
    Django provides full support for anonymous sessions. The session
    framework lets you store and retrieve arbitrary data on a
    per-site-visitor basis. It stores data on the server side and
    abstracts the sending and receiving of cookies. Cookies contain a
    session ID -- not the data itself.
    
    from django.contrib.sites.shortcuts import get_current_site
from django.core.paginator import EmptyPage, PageNotAnInteger
from django.http import Http404
from django.template.response import TemplateResponse
from django.urls import reverse
from django.utils.http import http_date
    
        def test_copying___code__(self):
        def test(): pass
        self.assertEqual(test(), None)
        test.__code__ = self.b.__code__
        self.assertEqual(test(), 3) # self.b always returns 3, arbitrarily
    
    import os
import re
import sys
import traceback
import types
import functools
import warnings
    
        @classmethod
    def setUpClass(cls):
        requires('gui')
        cls.root = Tk()
        cls.root.withdraw()
        cls.dialog = About(cls.root, _utest=True)
    
    
# Does a path exist?
# This is false for dangling symbolic links on systems that support them.
def exists(path):
    '''Test whether a path exists.  Returns False for broken symbolic links'''
    try:
        os.stat(path)
    except (OSError, ValueError):
        return False
    return True
    
    
def _get_resource_reader(
        package: ModuleType) -> Optional[resources_abc.ResourceReader]:
    # Return the package's loader if it's a ResourceReader.  We can't use
    # a issubclass() check here because apparently abc.'s __subclasscheck__()
    # hook wants to create a weak reference to the object, but
    # zipimport.zipimporter does not support weak references, resulting in a
    # TypeError.  That seems terrible.
    spec = package.__spec__
    if hasattr(spec.loader, 'get_resource_reader'):
        return cast(resources_abc.ResourceReader,
                    spec.loader.get_resource_reader(spec.name))
    return None
    
        # Fetch the records to be pickled.
    cursor.execute('SELECT * FROM memos')
    memos = [MemoRecord(key, task) for key, task in cursor]
    # Save the records using our custom DBPickler.
    file = io.BytesIO()
    DBPickler(file).dump(memos)
    
    
if __name__ == '__main__':
    main()

    
    def handlePoints(points):
    print('<ul>')
    for point in points:
        handlePoint(point)
    print('</ul>')
    
    
class BufferFull(UnpackException):
    pass
    
    # `import qtpy` sys.exit()s if DISPLAY is not in the environment.
# Thus, we need to detect the presence of $DISPLAY manually
# and not load qtpy if it is absent.
HAS_DISPLAY = os.getenv('DISPLAY', False)
CHECK_CMD = 'where' if platform.system() == 'Windows' else 'which'
    
    import os  # noqa
    
    
@pytest.fixture
def mframe():
    index = MultiIndex(levels=[['foo', 'bar', 'baz', 'qux'], ['one', 'two',
                                                              'three']],
                       codes=[[0, 0, 0, 1, 1, 2, 2, 3, 3, 3],
                              [0, 1, 2, 0, 1, 1, 2, 0, 1, 2]],
                       names=['first', 'second'])
    return DataFrame(np.random.randn(10, 3), index=index,
                     columns=['A', 'B', 'C'])
    
    
@pytest.mark.parametrize('key_strs,groupers', [
    ('inner',  # Index name
     pd.Grouper(level='inner')
     ),
    (['inner'],  # List of index name
     [pd.Grouper(level='inner')]
     ),
    (['B', 'inner'],  # Column and index
     ['B', pd.Grouper(level='inner')]
     ),
    (['inner', 'B'],  # Index and column
     [pd.Grouper(level='inner'), 'B'])])
def test_grouper_index_level_as_string(frame, key_strs, groupers):
    result = frame.groupby(key_strs).mean()
    expected = frame.groupby(groupers).mean()
    assert_frame_equal(result, expected)
    
    
@pytest.mark.parametrize('ties_method', [
    'average', 'min', 'max', 'first', 'dense'])
@pytest.mark.parametrize('ascending', [True, False])
@pytest.mark.parametrize('na_option', ['keep', 'top', 'bottom'])
@pytest.mark.parametrize('pct', [True, False])
@pytest.mark.parametrize('vals', [
    ['bar', 'bar', 'foo', 'bar', 'baz'],
    ['bar', np.nan, 'foo', np.nan, 'baz']
])
def test_rank_object_raises(ties_method, ascending, na_option,
                            pct, vals):
    df = DataFrame({'key': ['foo'] * 5, 'val': vals})
    
    
# our starting frame
def seed_df(seed_nans, n, m):
    np.random.seed(1234)
    days = date_range('2015-08-24', periods=10)
    
            self._data = values
        # Some aliases for common attribute names to ensure pandas supports
        # these
        self._items = self.data = self._data
        # those aliases are currently not working due to assumptions
        # in internal code (GH-20735)
        # self._values = self.values = self.data
        self._dtype = DecimalDtype(context)