
        
        
def get_requests_kwargs(args, base_headers=None):
    '''
    Translate our `args` into `requests.request` keyword arguments.
    
    
class ConverterPlugin(object):
    
        for factor, suffix in abbrevs:
        if n >= factor:
            break
    
        def run_tests(self):
        import pytest
        sys.exit(pytest.main(self.test_args))
    
    
class TestMultipartFormDataFileUpload:
    
        Directories are *not* resources.
    '''
    package = _get_package(package)
    _normalize_path(name)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.is_resource(name)
    try:
        package_contents = set(contents(package))
    except (NotADirectoryError, FileNotFoundError):
        return False
    if name not in package_contents:
        return False
    # Just because the given file_name lives as an entry in the package's
    # contents doesn't necessarily mean it's a resource.  Directories are not
    # resources, so let's try to find out if it's a directory or not.
    path = Path(package.__spec__.origin).parent / name
    return path.is_file()
    
    # There's no reliable cross-platform way of checking locale alias
# lists, so the only way of knowing which of these locales will work
# is to try them with locale.setlocale(). We do that in a subprocess
# in setUpModule() below to avoid altering the locale of the test runner.
#
# If the relevant locale module attributes exist, and we're not on a platform
# where we expect it to always succeed, we also check that
# `locale.nl_langinfo(locale.CODESET)` works, as if it fails, the interpreter
# will skip locale coercion for that particular target locale
_check_nl_langinfo_CODESET = bool(
    sys.platform not in ('darwin', 'linux') and
    hasattr(locale, 'nl_langinfo') and
    hasattr(locale, 'CODESET')
)
    
        def test_unbuffered_output(self):
        # Test expected operation of the '-u' switch
        for stream in ('stdout', 'stderr'):
            # Binary is unbuffered
            code = ('import os, sys; sys.%s.buffer.write(b'x'); os._exit(0)'
                % stream)
            rc, out, err = assert_python_ok('-u', '-c', code)
            data = err if stream == 'stderr' else out
            self.assertEqual(data, b'x', 'binary %s not unbuffered' % stream)
            # Text is unbuffered
            code = ('import os, sys; sys.%s.write('x'); os._exit(0)'
                % stream)
            rc, out, err = assert_python_ok('-u', '-c', code)
            data = err if stream == 'stderr' else out
            self.assertEqual(data, b'x', 'text %s not unbuffered' % stream)
    
            'isolated': 0,
        'site_import': 1,
        'bytes_warning': 0,
        'inspect': 0,
        'interactive': 0,
        'optimization_level': 0,
        'parser_debug': 0,
        'write_bytecode': 1,
        'verbose': 0,
        'quiet': 0,
        'user_site_directory': 1,
        'buffered_stdio': 1,
    
    --Pepé
''')
    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
        # If no faces are found in the image, return an empty result.
    if len(X_face_locations) == 0:
        return []
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
            # If you had more than 2 faces, you could make this logic a lot prettier
        # but I kept it simple for the demo
        name = None
        if match[0]:
            name = 'Lin-Manuel Miranda'
        elif match[1]:
            name = 'Alex Lacamoire'
    
            # If a match was found in known_face_encodings, just use the first one.
        if True in matches:
            first_match_index = matches.index(True)
            name = known_face_names[first_match_index]
    
    # Open video file
video_capture = cv2.VideoCapture('short_hamilton_clip.mp4')
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    with open('README.rst') as readme_file:
    readme = readme_file.read()
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
    
class MessagesPoll( BaseRequest ):
  def __init__( self ):
    super( MessagesPoll, self ).__init__()
    self._request_data = BuildRequestData()
    self._response_future = None
    
    import time
from threading import Thread
from ycm.client.base_request import BaseRequest
    
    SYNTAX_REGION_ARGUMENT_REGEX = re.compile(
  r'^(?:matchgroup|start)=.*$' )
    
    
def _CreateFilterForTypes( opts, types ):
  return DiagnosticFilter.CreateFromOptions( opts ).SubsetForTypes( types )
    
    
class FakeResponse( object ):
  '''A fake version of a requests response object, just about suitable for
  mocking a server response. Not usually used directly. See
  MockServerResponse* methods'''
  def __init__( self, response, exception ):
    self._json = response
    self._exception = exception
    self.status_code = requests.codes.ok
    self.text = not exception
    
    
def EndsWithPython_Python2Paths_test():
  python_paths = [
    'python',
    'python2',
    '/usr/bin/python2.7',
    '/home/user/.pyenv/shims/python2.7',
    r'C:\Python27\python.exe',
    '/Contents/MacOS/Python'
  ]
    
      # Ordered to ensure that the calls to update are deterministic
  diagnostics_per_file = [
    ( '/current', [ {
        'kind': 'ERROR',
        'text': 'error text in current buffer',
        'location': {
          'filepath': '/current',
          'line_num': 1,
          'column_num': 1
        },
        'location_extent': {
          'start': {
            'filepath': '/current',
            'line_num': 1,
            'column_num': 1,
          },
          'end': {
            'filepath': '/current',
            'line_num': 1,
            'column_num': 1,
          }
        },
        'ranges': [],
      } ] ),
    ( '/separate_window', [ {
        'kind': 'ERROR',
        'text': 'error text in a buffer open in a separate window',
        'location': {
          'filepath': '/separate_window',
          'line_num': 3,
          'column_num': 3
        },
        'location_extent': {
          'start': {
            'filepath': '/separate_window',
            'line_num': 3,
            'column_num': 3,
          },
          'end': {
            'filepath': '/separate_window',
            'line_num': 3,
            'column_num': 3,
          }
        },
        'ranges': []
      } ] ),
    ( '/hidden', [ {
        'kind': 'ERROR',
        'text': 'error text in hidden buffer',
        'location': {
          'filepath': '/hidden',
          'line_num': 4,
          'column_num': 2
        },
        'location_extent': {
          'start': {
            'filepath': '/hidden',
            'line_num': 4,
            'column_num': 2,
          },
          'end': {
            'filepath': '/hidden',
            'line_num': 4,
            'column_num': 2,
          }
        },
        'ranges': []
      } ] ),
    ( '/not_open', [ {
        'kind': 'ERROR',
        'text': 'error text in buffer not open in Vim',
        'location': {
          'filepath': '/not_open',
          'line_num': 8,
          'column_num': 4
        },
        'location_extent': {
          'start': {
            'filepath': '/not_open',
            'line_num': 8,
            'column_num': 4,
          },
          'end': {
            'filepath': '/not_open',
            'line_num': 8,
            'column_num': 4,
          }
        },
        'ranges': []
      } ] )
  ]