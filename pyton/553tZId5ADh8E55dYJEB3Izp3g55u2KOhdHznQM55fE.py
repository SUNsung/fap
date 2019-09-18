
        
            def _assert_allows(self, response, *expected_methods):
        'Assert allowed HTTP methods reported in the Allow response header'
        response_allows = set(response['Allow'].split(', '))
        self.assertEqual(set(expected_methods + ('OPTIONS',)), response_allows)
    
        def test_plain_annotate(self):
        agg = Sum('book__pages', filter=Q(book__rating__gt=3))
        qs = Author.objects.annotate(pages=agg).order_by('pk')
        self.assertSequenceEqual([a.pages for a in qs], [447, None, 1047])
    
        def test_no_version_number(self):
        ops = FakePostGISOperations()
        with self.assertRaises(ImproperlyConfigured):
            ops.spatial_version

    
        def __init__(self, feat, layer):
        '''
        Initialize Feature from a pointer and its Layer object.
        '''
        if not feat:
            raise GDALException('Cannot create OGR Feature, invalid pointer given.')
        self.ptr = feat
        self._layer = layer
    
        @property
    def value(self):
        'Return an integer contained in this field.'
        return self.as_int(self._bit64)
    
    
class GEOSGeometryBase(GEOSBase):
    
            set_available_apps() must be balanced with unset_available_apps().
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
    
def cntv_download_by_id(rid, **kwargs):
    CNTV().download_by_vid(rid, **kwargs)
    
    from ..common import *
from ..extractor import VideoExtractor
from .universal import *
    
    import mock
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    Certbot will emit a warning if it detects that the credentials file can be
accessed by other users on your system. The warning reads 'Unsafe permissions
on credentials configuration file', followed by the path to the credentials
file. This warning will be emitted each time Certbot uses the credentials file,
including for renewal, and cannot be silenced except by addressing the issue
(e.g., by using a command like ``chmod 600`` to restrict access to the file).
    
            path = os.path.join(self.tempdir, 'file.ini')
        dns_test_common.write(VALID_CONFIG, path)