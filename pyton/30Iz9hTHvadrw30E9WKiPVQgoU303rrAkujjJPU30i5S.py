
        
            # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    
if __name__ == '__main__':
    main()

    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
            f = match_filter_func('playlist_id = 42')
        res = get_videos(f)
        self.assertEqual(res, ['1'])
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def test_tumblr(self):
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430/orphan-black-dvd-extra-behind-the-scenes', ['Tumblr'])
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430', ['Tumblr'])
    
        def test_compat_urllib_parse_urlencode(self):
        self.assertEqual(compat_urllib_parse_urlencode({'abc': 'def'}), 'abc=def')
        self.assertEqual(compat_urllib_parse_urlencode({'abc': b'def'}), 'abc=def')
        self.assertEqual(compat_urllib_parse_urlencode({b'abc': 'def'}), 'abc=def')
        self.assertEqual(compat_urllib_parse_urlencode({b'abc': b'def'}), 'abc=def')
        self.assertEqual(compat_urllib_parse_urlencode([('abc', 'def')]), 'abc=def')
        self.assertEqual(compat_urllib_parse_urlencode([('abc', b'def')]), 'abc=def')
        self.assertEqual(compat_urllib_parse_urlencode([(b'abc', 'def')]), 'abc=def')
        self.assertEqual(compat_urllib_parse_urlencode([(b'abc', b'def')]), 'abc=def')
    
    
def load_data():
    '''Loads CIFAR10 dataset.
    
    
class Regularizer(object):
    '''Regularizer base class.
    '''
    
    
def create_model(kernel_regularizer=None, activity_regularizer=None):
    model = Sequential()
    model.add(Dense(num_classes,
                    kernel_regularizer=kernel_regularizer,
                    activity_regularizer=activity_regularizer,
                    input_shape=(data_dim,)))
    return model
    
            # helper function
        def get_tuple_shape(nb_channels):
            result = list(state_shape)
            if self.cell.data_format == 'channels_first':
                result[1] = nb_channels
            elif self.cell.data_format == 'channels_last':
                result[3] = nb_channels
            else:
                raise KeyError
            return tuple(result)
    
        def _canonical_to_params(self, weights, biases):
        import tensorflow as tf
        weights = [tf.reshape(x, (-1,)) for x in weights]
        biases = [tf.reshape(x, (-1,)) for x in biases]
        return tf.concat(weights + biases, 0)
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=4,
          validation_data=[x_test, y_test])

    
            return [item for item in self.events if item[2] not in disallowed]
    
            create_file(test_fn1)
        func(test_fn1, test_fn2)
        self.assertTrue(self.pathmodule.samestat(os.stat(test_fn1),
                                                 os.stat(test_fn2)))
        os.remove(test_fn2)
    
        def persistent_id(self, obj):
        # Instead of pickling MemoRecord as a regular class instance, we emit a
        # persistent ID.
        if isinstance(obj, MemoRecord):
            # Here, our persistent ID is simply a tuple, containing a tag and a
            # key, which refers to a specific record in the database.
            return ('MemoRecord', obj.key)
        else:
            # If obj does not have a persistent ID, return None. This means obj
            # needs to be pickled as usual.
            return None
    
    # Of course, there are lots of email messages that could break this simple
# minded program, but it will handle the most common ones.

    
    # We categorize each error message we print.  Here are the categories.
# We want an explicit list so we can list them all in cpplint --filter=.
# If you add a new error message with a new category, add it to the list
# here!  cpplint_unittest.py should tell you if you forget to do this.
_ERROR_CATEGORIES = [
    'build/class',
    'build/c++11',
    'build/c++14',
    'build/c++tr1',
    'build/deprecated',
    'build/endif_comment',
    'build/explicit_make_pair',
    'build/forward_decl',
    'build/header_guard',
    'build/include',
    'build/include_subdir',
    'build/include_alpha',
    'build/include_order',
    'build/include_what_you_use',
    'build/namespaces_literals',
    'build/namespaces',
    'build/printf_format',
    'build/storage_class',
    'legal/copyright',
    'readability/alt_tokens',
    'readability/braces',
    'readability/casting',
    'readability/check',
    'readability/constructors',
    'readability/fn_size',
    'readability/inheritance',
    'readability/multiline_comment',
    'readability/multiline_string',
    'readability/namespace',
    'readability/nolint',
    'readability/nul',
    'readability/strings',
    'readability/todo',
    'readability/utf8',
    'runtime/arrays',
    'runtime/casting',
    'runtime/explicit',
    'runtime/int',
    'runtime/init',
    'runtime/invalid_increment',
    'runtime/member_string_references',
    'runtime/memset',
    'runtime/indentation_namespace',
    'runtime/operator',
    'runtime/printf',
    'runtime/printf_format',
    'runtime/references',
    'runtime/string',
    'runtime/threadsafe_fn',
    'runtime/vlog',
    'whitespace/blank_line',
    'whitespace/braces',
    'whitespace/comma',
    'whitespace/comments',
    'whitespace/empty_conditional_body',
    'whitespace/empty_if_body',
    'whitespace/empty_loop_body',
    'whitespace/end_of_line',
    'whitespace/ending_newline',
    'whitespace/forcolon',
    'whitespace/indent',
    'whitespace/line_length',
    'whitespace/newline',
    'whitespace/operators',
    'whitespace/parens',
    'whitespace/semicolon',
    'whitespace/tab',
    'whitespace/todo',
    ]
    
    # This is a demo of blurring faces in video.
    
    Algorithm Description:
The knn classifier is first trained on a set of labeled (known) faces and can then predict the person
in an unknown image by finding the k most similar faces (images with closet face-features under eucledian distance)
in its training set, and performing a majority vote (possibly weighted) on their label.
    
    app = Flask(__name__)
    
        face_names = []
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces(known_faces, face_encoding, tolerance=0.50)
    
        # Find all the faces and face enqcodings in the frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
        # Only process every other frame of video to save time
    if process_this_frame:
        # Find all the faces and face encodings in the current frame of video
        face_locations = face_recognition.face_locations(rgb_small_frame)
        face_encodings = face_recognition.face_encodings(rgb_small_frame, face_locations)
    
                frame_number = frame_count - 128 + frame_number_in_batch
            print('I found {} face(s) in frame #{}.'.format(number_of_faces_in_frame, frame_number))
    
            # empty python list
        faces_to_compare = []