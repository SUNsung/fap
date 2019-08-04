
        
            Username and password are required. Other fields are optional.
    '''
    username_validator = UnicodeUsernameValidator()
    
                try:
                vtup = self.postgis_version_tuple()
            except ProgrammingError:
                raise ImproperlyConfigured(
                    'Cannot determine PostGIS version for database '%s' '
                    'using command 'SELECT postgis_lib_version()'. '
                    'GeoDjango requires at least PostGIS version 2.2. '
                    'Was the database created from a spatial database '
                    'template?' % self.connection.settings_dict['NAME']
                )
            version = vtup[1:]
        return version
    
        def deconstruct(self):
        path, args, kwargs = super().deconstruct()
        if self.fastupdate is not None:
            kwargs['fastupdate'] = self.fastupdate
        if self.gin_pending_list_limit is not None:
            kwargs['gin_pending_list_limit'] = self.gin_pending_list_limit
        return path, args, kwargs
    
        def test_no_version_number(self):
        ops = FakePostGISOperations()
        with self.assertRaises(ImproperlyConfigured):
            ops.spatial_version

    
    
# OFTDate, OFTTime, OFTDateTime fields.
class OFTDate(Field):
    @property
    def value(self):
        'Return a Python `date` object for the OFTDate field.'
        try:
            yy, mm, dd, hh, mn, ss, tz = self.as_datetime()
            return date(yy.value, mm.value, dd.value)
        except (TypeError, ValueError, GDALException):
            return None
    
    This module provides the capabilities for the Requests hooks system.
    
    
  def _HandleFixitResponse( self ):
    if not len( self._response[ 'fixits' ] ):
      vimsupport.PostVimMessage( 'No fixits found for current line',
                                 warning = False )
    else:
      try:
        fixit_index = 0
    
    
  def UpdateWithNewDiagnostics( self, diags ):
    self._diagnostics = [ _NormalizeDiagnostic( x ) for x in
                            self._ApplyDiagnosticFilter( diags ) ]
    self._ConvertDiagListToDict()
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )