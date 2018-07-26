    This worker is run in a separate process.
    
                self._work_queue.put(w)
            self._adjust_thread_count()
            return f
    submit.__doc__ = _base.Executor.submit.__doc__
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'futuresdoc'
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running at: http://127.0.0.1:1234\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    # Can't import these from setup.py because it makes nosetests go crazy.
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
WIN_PYTHON_PATH = os.path.join( sys.exec_prefix, 'python.exe' )
PYTHON_BINARY_REGEX = re.compile(
  r'python((2(\.[67])?)|(3(\.[3-9])?))?(.exe)?$', re.IGNORECASE )
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
    
  def Extra_Info_No_Doc_String_test( self ):
    self._Check( 0, {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'extra_data': {
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # This is a demo of blurring faces in video.
    
    Algorithm Description:
The knn classifier is first trained on a set of labeled (known) faces and can then predict the person
in an unknown image by finding the k most similar faces (images with closet face-features under eucledian distance)
in its training set, and performing a majority vote (possibly weighted) on their label.
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
            self.assertEqual(
            set(face_landmarks[0].keys()),
            set(['chin', 'left_eyebrow', 'right_eyebrow', 'nose_bridge',
                 'nose_tip', 'left_eye', 'right_eye', 'top_lip',
                 'bottom_lip']))
        self.assertEqual(
            face_landmarks[0]['chin'],
            [(369, 220), (372, 254), (378, 289), (384, 322), (395, 353),
             (414, 382), (437, 407), (464, 424), (495, 428), (527, 420),
             (552, 399), (576, 372), (594, 344), (604, 314), (610, 282),
             (613, 250), (615, 219)])