
        
            if result is None:
        return '{}'
    
        return results

    
            if 'latency' in request.args:
            latency = float(request.args['latency'][0])
            reactor.callLater(latency, self._finish, request)
            return NOT_DONE_YET
    
        def extract_contracts(self, method):
        contracts = []
        for line in method.__doc__.split('\n'):
            line = line.strip()
    
        def spider_opened(self, spider):
        self._timeout = getattr(spider, 'download_timeout', self._timeout)
    
        def spider_opened(self, spider):
        self.user_agent = getattr(spider, 'user_agent', self.user_agent)
    
        def request_seen(self, request):
        return False
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
    Local worker thread:
- reads work ids from the 'Work Ids' queue and looks up the corresponding
  WorkItem from the 'Work Items' dict: if the work item has been cancelled then
  it is simply removed from the dict, otherwise it is repackaged as a
  _CallItem and put in the 'Call Q'. New _CallItems are put in the 'Call Q'
  until 'Call Q' is full. NOTE: the size of the 'Call Q' is kept small because
  calls placed in the 'Call Q' can no longer be cancelled with Future.cancel().
- reads _ResultItems from 'Result Q', updates the future stored in the
  'Work Items' dict and deletes the dict entry
    
            try:
            result = self.fn(*self.args, **self.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            self.future.set_exception(e)
        else:
            self.future.set_result(result)
    
        def setUp(self):
        self.t1 = time.time()
        try:
            self.executor = self.executor_type(max_workers=self.worker_count)
        except NotImplementedError:
            e = sys.exc_info()[1]
            self.skipTest(str(e))
        self._prime_executor()
    
    
  def GoTo_MultiItem_List_test( self ):
    self._CheckGoToList( [ {
      'filepath':     'dummy_file',
      'line_num':     10,
      'column_num':   1,
      'description': 'this is some other text',
    }, {
      'filepath':     'dummy_file2',
      'line_num':     1,
      'column_num':   21,
      'description': 'this is some text',
    } ], [ {
      'filename':    'dummy_file',
      'text':        'this is some other text',
      'lnum':        10,
      'col':         1
    }, {
      'filename':    'dummy_file2',
      'text':        'this is some text',
      'lnum':        1,
      'col':         21
    } ] )
    
    
@YouCompleteMeInstance( { 'g:ycm_extra_conf_vim_data': [ 'undefined_value' ] } )
def SendCommandRequest_ExtraConfData_UndefinedValue_test( ycm ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'GoTo' ], 'python', 'belowright', False, 1, 1 )
      assert_that(
        # Positional arguments passed to SendCommandRequest.
        send_request.call_args[ 0 ],
        contains(
          contains( 'GoTo' ),
          'python',
          'belowright',
          has_entries( {
            'options': has_entries( {
              'tab_size': 2,
              'insert_spaces': True,
            } )
          } )
        )
      )
    
        def test_dog_adapter_shall_make_noise(self):
        dog = Dog()
        dog_adapter = Adapter(dog, make_noise=dog.bark)
        noise = dog_adapter.make_noise()
        expected_noise = 'woof!'
        self.assertEqual(noise, expected_noise)
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        fftv.publish('cartoon')
    fftv.publish('music')
    fftv.publish('ads')
    fftv.publish('movie')
    fftv.publish('cartoon')
    fftv.publish('cartoon')
    fftv.publish('movie')
    fftv.publish('blank')
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        '''catalog of multiple methods that are executed depending on an init
    
    # Get the face encodings for the known images
obama_face_encoding = face_recognition.face_encodings(known_obama_image)[0]
biden_face_encoding = face_recognition.face_encodings(known_biden_image)[0]
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
    setup_face_landmarks = '''
import face_recognition
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
    while video_capture.isOpened():
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
    # Load a second sample picture and learn how to recognize it.
biden_image = face_recognition.load_image_file('biden.jpg')
biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
    # If extensions (or modules to document with autodoc) are in another
# directory, add these directories to sys.path here. If the directory is
# relative to the documentation root, use os.path.abspath to make it
# absolute, like shown here.
#sys.path.insert(0, os.path.abspath('.'))
    
    
def print_result(filename, name, distance, show_distance=False):
    if show_distance:
        print('{},{},{}'.format(filename, name, distance))
    else:
        print('{},{}'.format(filename, name))
    
        :param model_save_path: (optional) path to save model on disk
    :param n_neighbors: (optional) number of neighbors to weigh in classification. Chosen automatically if not specified
    :param knn_algo: (optional) underlying data structure to support knn.default is ball_tree
    :param verbose: verbosity of training
    :return: returns knn classifier that was trained on the given data.
    '''
    X = []
    y = []
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
    
import unittest
import os
import numpy as np
from click.testing import CliRunner