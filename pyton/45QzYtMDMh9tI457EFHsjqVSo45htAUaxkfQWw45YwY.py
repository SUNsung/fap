
        
            for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '2.1.3'
# The full version, including alpha/beta/rc tags.
release = '2.1.3'
    
    
  def MarkResponseHandled( self ):
    self._handled_tick = self._parse_tick
    
        if completed_item[ 'user_data' ]:
      completions = self.RawResponse()[ 'completions' ]
      return [ completions[ int( completed_item[ 'user_data' ] ) ] ]
    
      # We don't want the event to actually be sent to the server, just have it
  # return success
  with patch( 'ycm.client.event_notification.EventNotification.'
              'PostDataToHandlerAsync',
              return_value = MagicMock( return_value=True ) ):
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from ycm.tests import YouCompleteMeInstance
    
    
  def _CloseLogfile( self, logfile ):
    vimsupport.CloseBuffersForFilename( logfile )
    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )