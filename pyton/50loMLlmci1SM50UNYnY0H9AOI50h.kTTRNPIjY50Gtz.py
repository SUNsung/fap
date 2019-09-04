
        
            def test_POST_form_Content_Type_override(self, httpbin):
        r = http('--form', 'POST', httpbin.url + '/post',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Content-Type': 'application/xml'' in r
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict({
            key: value
            for key, value in actual.items()
            if not key.startswith('_')
        })
    
    
def repr_dict(d: dict) -> str:
    return pformat(d)
    
        def test_binary_stdin(self, httpbin):
        with open(BIN_FILE_PATH, 'rb') as stdin:
            env = MockEnvironment(
                stdin=stdin,
                stdin_isatty=False,
                stdout_isatty=False
            )
            r = http('--print=B', 'POST', httpbin.url + '/post', env=env)
            assert r == BIN_FILE_CONTENT
    
        def items(self):
        for key, values in super(MultiValueOrderedDict, self).items():
            if not isinstance(values, list):
                values = [values]
            for value in values:
                yield key, value
    
        @property
    def content_type(self) -> str:
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME + SEPARATOR_CREDENTIALS + PASSWORD
            assert username == USERNAME
            assert password == PASSWORD
            return basic_auth()
    
    
class ExitStatus(Enum):
    '''Program exit code constants.'''
    SUCCESS = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
        face_found = False
    is_obama = False
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Draw a box around the face using the Pillow module
    draw.rectangle(((left, top), (right, bottom)), outline=(0, 0, 255))
    
    
def _GetRequiredNamespaceImport( completion ):
  if ( 'extra_data' not in completion
       or 'required_namespace_import' not in completion[ 'extra_data' ] ):
    return None
  return completion[ 'extra_data' ][ 'required_namespace_import' ]
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def SendDebugInfoRequest( extra_data = None ):
  request = DebugInfoRequest( extra_data )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    TIMEOUT_SECONDS = 0.1
    
        for parent_name in parent_names:
      try:
        parent_group = group_name_to_group[ parent_name ]
      except KeyError:
        continue
      parent_group.children.append( group )
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
    from ycm.tests import PathToTestFile, YouCompleteMeInstance
from ycmd.responses import ServerError
    
            Returns:
            The result of the call that the future represents.