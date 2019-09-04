
        
        
class TitleInline(admin.TabularInline):
    model = Title
    form = TitleForm
    extra = 1
    
            # The inline has been added, it has the right id, and it contains the
        # correct fields.
        self.assertEqual(len(self.selenium.find_elements_by_css_selector('.dynamic-profile_set')), 2)
        self.assertEqual(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set')[1].get_attribute('id'), 'profile_set-1')
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set#profile_set-1 input[name=profile_set-1-first_name]')), 1)
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set#profile_set-1 input[name=profile_set-1-last_name]')), 1)
    
        def to_python(self, value):
        return value
    
            This is the most complex implementation of the spatial backends due to
        what is supported on geodetic geometry columns vs. what's available on
        projected geometry columns.  In addition, it has to take into account
        the geography column type.
        '''
        # Getting the distance parameter
        value = dist_val[0]
    
            For raster formats using Persistent Auxiliary Metadata (PAM) services,
        the statistics might be cached in an auxiliary file.
        '''
        # Prepare array with arguments for capi function
        smin, smax, smean, sstd = c_double(), c_double(), c_double(), c_double()
        stats_args = [
            self._ptr, c_int(approximate), byref(smin), byref(smax),
            byref(smean), byref(sstd), c_void_p(), c_void_p(),
        ]
    
                if 'skew' in ds_input:
                self.skew.x, self.skew.y = ds_input['skew']
        elif isinstance(ds_input, c_void_p):
            # Instantiate the object using an existing pointer to a gdal raster.
            self._ptr = ds_input
        else:
            raise GDALException('Invalid data source input type: '{}'.'.format(type(ds_input)))
    
        @property
    def hexewkb(self):
        '''
        Return the EWKB of this Geometry in hexadecimal form. This is an
        extension of the WKB specification that includes SRID value that are
        a part of this geometry.
        '''
        return ewkb_w(dim=3 if self.hasz else 2).write_hex(self)
    
        def test_binary_file_form(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', '--form', 'POST', httpbin.url + '/post',
                 'test@' + BIN_FILE_PATH_ARG, env=env)
        assert bytes(BIN_FILE_CONTENT) in bytes(r)
    
        def get_formatters_grouped(self) -> Dict[str, List[Type[FormatterPlugin]]]:
        return {
            group_name: list(group)
            for group_name, group
            in groupby(self.get_formatters(), key=attrgetter('group_name'))
        }
    
        def load(self):
        try:
            with self.path().open('rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path())
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
        # Predict classes and remove classifications that aren't within the threshold
    return [(pred, loc) if rec else ('unknown', loc) for pred, loc, rec in zip(knn_clf.predict(faces_encodings), X_face_locations, are_matches)]
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
        def test_face_landmarks(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        face_landmarks = api.face_landmarks(img)
    
            face_names = []
        for face_encoding in face_encodings:
            # See if the face is a match for the known face(s)
            matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
            name = 'Unknown'
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
                # If a match was found in known_face_encodings, just use the first one.
            if True in matches:
                first_match_index = matches.index(True)
                name = known_face_names[first_match_index]
    
            #If training image contains none or more than faces, print an error message and exit
        if len(face_bounding_boxes) != 1:
            print(person + '/' + person_img + ' contains none or more than one faces and can't be used for training.')
            exit()
        else:
            face_enc = face_recognition.face_encodings(face)[0]
            # Add face encoding for current image with corresponding label (name) to the training data
            encodings.append(face_enc)
            names.append(person)
    
    def verifyThirdPartyFile(url, checksum, fname):
    '''
    Download file from url to filename fname if it does not already exist.
    Abort if file contents does not match supplied md5 checksum.
    '''
    name = os.path.basename(fname)
    if os.path.exists(fname):
        print('Using local copy of %s'%(name,))
    else:
        print('Did not find local copy of %s'%(name,))
        print('Downloading %s'%(name,))
        downloadURL(url, fname)
        print('Archive for %s stored as %s'%(name, fname))
    if os.system(
            'MD5=$(openssl md5 %s) ; test '${MD5##*= }' = '%s''
                % (shellQuote(fname), checksum) ):
        fatal('MD5 checksum mismatch for file %s' % fname)
    
        @unittest.skipUnless(hasattr(posix, 'O_SHLOCK'),
                         'test needs posix.O_SHLOCK')
    def test_osshlock(self):
        fd1 = os.open(support.TESTFN,
                     os.O_WRONLY|os.O_SHLOCK|os.O_CREAT)
        fd2 = os.open(support.TESTFN,
                      os.O_WRONLY|os.O_SHLOCK|os.O_CREAT)
        os.close(fd2)
        os.close(fd1)
    
        def values(self):
        '''Return a list of all the message's header values.
    
                    --+++
                Content-Type: text/plain
    
    import atexit
from concurrent.futures import _base
import itertools
import queue
import threading
import weakref
import os
    
            with test_utils.run_test_unix_server() as httpd:
            self.loop.run_until_complete(test(httpd))
    
        def _pprint_ordered_dict(self, object, stream, indent, allowance, context, level):
        if not len(object):
            stream.write(repr(object))
            return
        cls = object.__class__
        stream.write(cls.__name__ + '(')
        self._format(list(object.items()), stream,
                     indent + len(cls.__name__) + 1, allowance + 1,
                     context, level)
        stream.write(')')
    
        # Avoid false positives due to various caches
    # filling slowly with random data:
    warm_caches()
    
        def run_loop(self):
        while self.blackboard.common_state['progress'] < 100:
            for expert in self.blackboard.experts:
                if expert.is_eager_to_contribute:
                    expert.contribute()
        return self.blackboard.common_state['contributions']
    
    
def main():
    '''
    >>> molly = User('Molly')
    >>> mark = User('Mark')
    >>> ethan = User('Ethan')
    
        >>> a_transaction = Transaction(True, num_obj)
    
        >>> data1.data = 10
    DecimalViewer: Subject Data 1 has data 10
    
        root_specification = UserSpecification().and_specification(SuperUserSpecification())
    
    
def main():
    '''
    >>> Order(100)
    <Price: 100, price after discount: 100>
    
    from __future__ import print_function
import functools
    
    
# ConcreteImplementor 1/2
class DrawingAPI1(object):
    def draw_circle(self, x, y, radius):
        print('API1.circle at {}:{} radius {}'.format(x, y, radius))
    
    if args.dict:
    jieba.initialize(args.dict)
else:
    jieba.initialize()
if args.user_dict:
    jieba.load_userdict(args.user_dict)
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    if len(sys.argv)>2:
    n_topic = int(sys.argv[2])