
        
        
class ProfileInline(admin.TabularInline):
    model = Profile
    extra = 1
    
        def test_redirect_OPTIONS(self):
        'Default is a temporary redirect'
        response = RedirectView.as_view(url='/bar/')(self.rf.options('/foo/'))
        self.assertEqual(response.status_code, 302)
        self.assertEqual(response.url, '/bar/')
    
        def test_custom_email(self):
        user = CustomEmailField()
        self.assertEqual(user.get_email_field_name(), 'email_address')
    
        def as_postgresql(self, compiler, connection, **extra_context):
        # Cast FloatField to DecimalField as PostgreSQL doesn't support the
        # following function signatures:
        # - LOG(double, double)
        # - MOD(double, double)
        output_field = DecimalField(decimal_places=sys.float_info.dig, max_digits=1000)
        clone = self.copy()
        clone.set_source_expressions([
            Cast(expression, output_field) if isinstance(expression.output_field, FloatField)
            else expression for expression in self.get_source_expressions()
        ])
        return clone.as_sql(compiler, connection, **extra_context)
    
    
def register_converter(converter, type_name):
    REGISTERED_CONVERTERS[type_name] = converter()
    get_converters.cache_clear()
    
    from django.conf import settings
from django.contrib.gis.db.backends.base.operations import (
    BaseSpatialOperations,
)
from django.contrib.gis.db.backends.utils import SpatialOperator
from django.contrib.gis.db.models import GeometryField, RasterField
from django.contrib.gis.gdal import GDALRaster
from django.contrib.gis.geos.geometry import GEOSGeometryBase
from django.contrib.gis.geos.prototypes.io import wkb_r
from django.contrib.gis.measure import Distance
from django.core.exceptions import ImproperlyConfigured
from django.db.backends.postgresql.operations import DatabaseOperations
from django.db.models import Func, Value
from django.db.utils import NotSupportedError, ProgrammingError
from django.utils.functional import cached_property
from django.utils.version import get_version_tuple
    
        def test_invalid_pages_per_range(self):
        with self.assertRaisesMessage(ValueError, 'pages_per_range must be None or a positive integer'):
            BrinIndex(fields=['title'], name='test_title_brin', pages_per_range=0)
    
                  # Get the type (integer) of the field, e.g. 0 => OFTInteger
              t = field.type