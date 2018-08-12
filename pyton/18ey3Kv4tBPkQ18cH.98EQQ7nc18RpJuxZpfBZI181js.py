
        
                (foo, p1), 2
        (bar, p1), 3
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        yield key, sum(values)
    
    from mrjob.job import MRJob
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        def __init__(self, memory_cache, reverse_index_cluster):
        self.memory_cache = memory_cache
        self.reverse_index_cluster = reverse_index_cluster
    
    
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
        if not releases:
        break
    
        def test_youtube_channel_matching(self):
        assertChannel = lambda url: self.assertMatch(url, ['youtube:channel'])
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM?feature=gb_ch_rec')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM/videos')
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
            entry_id = self._search_regex(
            r'<a[^>]+id=(['\'])embed-kaltura\1[^>]+data-kaltura=(['\'])(?P<id>[0-9a-z_]+)\2',
            webpage, 'kaltura entry_id', group='id')
    
        s.register(Tag1, index=-1)
    assert isinstance(s.order[-2], Tag1)
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
            super(SecureCookieSession, self).__init__(initial, on_update)
    
        @classmethod
    def as_view(cls, name, *class_args, **class_kwargs):
        '''Converts the class into an actual view function that can be used
        with the routing system.  Internally this generates a function on the
        fly which will instantiate the :class:`View` on each request and call
        the :meth:`dispatch_request` method on it.
    
    
def test_get_namespace():
    app = flask.Flask(__name__)
    app.config['FOO_OPTION_1'] = 'foo option 1'
    app.config['FOO_OPTION_2'] = 'foo option 2'
    app.config['BAR_STUFF_1'] = 'bar stuff 1'
    app.config['BAR_STUFF_2'] = 'bar stuff 2'
    foo_options = app.config.get_namespace('FOO_')
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['option_1']
    assert 'foo option 2' == foo_options['option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['STUFF_1']
    assert 'bar stuff 2' == bar_options['STUFF_2']
    foo_options = app.config.get_namespace('FOO_', trim_namespace=False)
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['foo_option_1']
    assert 'foo option 2' == foo_options['foo_option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False, trim_namespace=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['BAR_STUFF_1']
    assert 'bar stuff 2' == bar_options['BAR_STUFF_2']
    
        logging_plugin = pytestconfig.pluginmanager.unregister(
        name='logging-plugin')
    
        def __exit__(self, exc_type, exc_value, tb):
        gc.collect()
        new_objects = len(gc.get_objects())
        if new_objects > self.old_objects:
            pytest.fail('Example code leaked')
        _gc_lock.release()
        gc.enable()
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    def prep(arch):
    makefile_template = 'ms\\ntdll{}.mak'
    generated_makefile = makefile_template.format('')
    if arch == 'x86':
        configure = 'VC-WIN32'
        do_script = 'ms\\do_nasm'
        suffix = '32'
    elif arch == 'amd64':
        configure = 'VC-WIN64A'
        do_script = 'ms\\do_win64a'
        suffix = '64'
    else:
        raise ValueError('Unrecognized platform: %s' % arch)
    
    https://en.wikipedia.org/wiki/Blackboard_system
'''
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
    
class TestPool(unittest.TestCase):
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        # verify that none of the target files exist
    assert(not lexists('foo.txt'))
    assert(not lexists('bar.txt'))
    assert(not lexists('baz.txt'))
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
    
if __name__ == '__main__':
    reporter = Reporter()
    db = DB()
    tm = TestManager()
    tm.setReporter(reporter)
    tm.setDB(db)
    reporter.setTM(tm)
    db.setTM(tm)
    # For simplification we are looping on the same test.
    # Practically, it could be about various unique test classes and their
    # objects
    for i in range(3):
        tc = TC()
        tc.setTM(tm)
        tm.setTC(tc)
        tc.setup()
        tc.execute()
        tc.tearDown()
    
    # Load a test image and get encondings for it
image_to_test = face_recognition.load_image_file('obama2.jpg')
image_to_test_encoding = face_recognition.face_encodings(image_to_test)[0]
    
        # Quit when the input video file ends
    if not ret:
        break
    
    # This code finds all faces in a list of images using the CNN model.
#
# This demo is for the _special case_ when you need to find faces in LOTS of images very quickly and all the images
# are the exact same size. This is common in video processing applications where you have lots of video frames
# to process.
#
# If you are processing a lot of images and using a GPU with CUDA, batch processing can be ~3x faster then processing
# single images at a time. But if you aren't using a GPU, then batch processing isn't going to be very helpful.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read the video file.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Display the resulting image
    cv2.imshow('Video', frame)
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
            # empty python list
        faces_to_compare = []