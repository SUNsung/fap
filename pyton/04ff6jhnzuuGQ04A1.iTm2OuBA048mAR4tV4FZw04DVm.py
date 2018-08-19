
        
                cert = ssl_sock.get_peer_certificate()
        if not cert:
            raise socket.error('certificate is none')
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
            # variable weirdness
        parsed = loads('directive $var;')
        self.assertEqual(parsed, [['directive', '$var']])
        self.assertRaises(ParseException, loads, 'server {server_name test.com};')
        self.assertRaises(ParseException, loads, 'directive ${var};')
        self.assertEqual(loads('blag${dfgdfg};'), [['blag${dfgdfg}']])
        self.assertRaises(ParseException, loads, 'blag${dfgdf{g};')
    }
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    __all__ = ['cbs_download']
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
    
download = huaban_download
download_playlist = playlist_not_supported('huaban')

    
    __all__ = ['kuwo_download']
    
    from xml.dom.minidom import parseString
    
    import os
import json
import click
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
        def test_sales_manager_shall_not_respond_through_proxy_with_delay(cls):
        cls.ntp.busy = 'Yes'
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

    
    from __future__ import print_function
    
    
def main():
    message_center = Provider()
    
        class ClassRegistree(BaseRegisteredClass):
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    print('Counting to five...')
for number in count_to_five():
    print(number, end=' ')
    
        def __init__(self, radio):
        self.radio = radio
        self.stations = ['1250', '1380', '1510']
        self.pos = 0
        self.name = 'AM'
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
        # Only process every other frame of video to save time
    if process_this_frame:
        # Find all the faces and face encodings in the current frame of video
        face_locations = face_recognition.face_locations(rgb_small_frame)
        face_encodings = face_recognition.face_encodings(rgb_small_frame, face_locations)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
        def test_fd_command_line_interface_folder(self):
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images')