
        
        setup_face_landmarks = '''
import face_recognition
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    
def image_files_in_folder(folder):
    return [os.path.join(folder, f) for f in os.listdir(folder) if re.match(r'.*\.(jpg|jpeg|png)', f, flags=re.I)]
    
        def test_command_line_interface_big_image(self):
        target_string = 'obama3.jpg,obama'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama3.jpg')
    
        # Hit 'q' on the keyboard to quit!
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    
    # You can also save a copy of the new image to disk if you want by uncommenting this line
# pil_image.save('image_with_boxes.jpg')

    
    
def _css_to_rect(css):
    '''
    Convert a tuple in (top, right, bottom, left) order to a dlib `rect` object
    
    # 初始化变量
face_locations = []
face_encodings = []
    
    
@app.route('/', methods=['GET', 'POST'])
def upload_image():
    # 检测图片是否上传成功
    if request.method == 'POST':
        if 'file' not in request.files:
            return redirect(request.url)
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]
    
    
class DiagnosticInterface( object ):
  def __init__( self, bufnr, user_options ):
    self._bufnr = bufnr
    self._user_options = user_options
    self._diagnostics = []
    self._diag_filter = DiagnosticFilter.CreateFromOptions( user_options )
    # Line and column numbers are 1-based
    self._line_to_diags = defaultdict( list )
    self._previous_diag_line_number = -1
    self._diag_message_needs_clearing = False
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        if self._response_future is None:
      # First poll
      self._SendRequest()
      return True
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def _assert_accepts( filter, text ):
  _assert_accept_equals( filter, text, True )
    
    
  def result( self ):
    return self._result
    
            if (return_when == FIRST_COMPLETED) and done:
            return DoneAndNotDoneFutures(done, not_done)
        elif (return_when == FIRST_EXCEPTION) and done:
            if any(f for f in done
                   if not f.cancelled() and f.exception() is not None):
                return DoneAndNotDoneFutures(done, not_done)