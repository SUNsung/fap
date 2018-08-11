
        
        versions_info = json.load(open('update/versions.json'))
versions = list(versions_info['versions'].keys())
versions.sort()
    
        def download(self, x):
        self.result.append(x)
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
            uploader = self._search_regex(
            r'Added by\s*:\s*<a[^>]+>([^<]+)</a>', webpage, 'uploader', default=None)
        upload_date = unified_strdate(self._search_regex(
            r'Added on\s*:\s*([\d-]+)', webpage, 'upload date', default=None))
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
        model.compile(loss='hinge', optimizer='adagrad')
    history = model.fit(x_train, y_train, epochs=20, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert (history.history['val_loss'][-1] < 0.9)
    
                for t in range(n_frames):
                x_shift = xstart + directionx * t
                y_shift = ystart + directiony * t
                noisy_movies[i, t, x_shift - w: x_shift + w,
                             y_shift - w: y_shift + w, 0] += 1
    
    - RNNs are tricky. Choice of batch size is important,
choice of loss and optimizer is critical, etc.
Some configurations won't converge.
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        if args.plot is not None:
        print('Displaying plot', file=sys.stderr)
        title = ('Multilabel metrics with %s' %
                 ', '.join('{0}={1}'.format(field, getattr(args, field))
                           for field in ['samples', 'classes', 'density']
                           if args.plot != field))
        _plot(results, args.metrics, args.formats, title, steps, args.plot)

    
    In this examples we will use a movie review dataset.
    
    '''
# Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: Simplified BSD
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
    Only adjusted measures can hence safely be used as a consensus index
to evaluate the average stability of clustering algorithms for a given
value of k on various overlapping sub-samples of the dataset.
    
        def testSeekBackwardsAcrossStreams(self):
        self.createTempFile(streams=2)
        with BZ2File(self.filename) as bz2f:
            readto = len(self.TEXT) + 100
            while readto > 0:
                readto -= len(bz2f.read(readto))
            bz2f.seek(-150, 1)
            self.assertEqual(bz2f.read(), self.TEXT[100-150:] + self.TEXT)
    
    
# Return whether a path is absolute.
# Trivial in Posix, harder on Windows.
# For Windows it is absolute if it starts with a slash or backslash (current
# volume), or if a pathname after the volume-letter-and-colon or UNC-resource
# starts with a slash or backslash.
    
        @unittest.skipUnless(nt, 'OS helpers require 'nt' module')
    def test_nt_helpers(self):
        # Trivial validation that the helpers do not break, and support both
        # unicode and bytes (UTF-8) paths
    
    <hr>
Data descriptors defined here:<br>
<dl><dt><strong>__dict__</strong></dt>
<dd><tt>%s</tt></dd>
</dl>
<dl><dt><strong>__weakref__</strong></dt>
<dd><tt>%s</tt></dd>
</dl>
</td></tr></table> <p>
<table width='100%%' cellspacing=0 cellpadding=2 border=0 summary='section'>
<tr bgcolor='#ffc8d8'>
<td colspan=3 valign=bottom>&nbsp;<br>
<font color='#000000' face='helvetica, arial'><a name='B'>class <strong>B</strong></a>(<a href='builtins.html#object'>builtins.object</a>)</font></td></tr>
\x20\x20\x20\x20
<tr><td bgcolor='#ffc8d8'><tt>&nbsp;&nbsp;&nbsp;</tt></td><td>&nbsp;</td>
<td width='100%%'>Data descriptors defined here:<br>
<dl><dt><strong>__dict__</strong></dt>
<dd><tt>%s</tt></dd>
</dl>
<dl><dt><strong>__weakref__</strong></dt>
<dd><tt>%s</tt></dd>
</dl>
<hr>
Data and other attributes defined here:<br>
<dl><dt><strong>NO_MEANING</strong> = 'eggs'</dl>
    
        def test_dont_pause_writing(self):
        tr = self.pause_writing_transport(high=4)
    
            callLst[:] = []
        testme // 1
        self.assertCallStack([('__floordiv__', (testme, 1))])
    
            class E(object):
            @property
            def foo(self):
                return self._foo
            @foo.setter
            def foo(self, value):
                raise RuntimeError
            @foo.setter
            def foo(self, value):
                self._foo = abs(value)
            @foo.deleter
            def foo(self, value=None):
                del self._foo
    
        def finish_tree(self, tree, filename):
        self.transformed_xranges = None
    
    
    @unittest.skipUnless(hasattr(c_hashlib, 'scrypt'),
                     '   test requires OpenSSL > 1.1')
    def test_scrypt(self):
        for password, salt, n, r, p, expected in self.scrypt_test_vectors:
            result = hashlib.scrypt(password, salt=salt, n=n, r=r, p=p)
            self.assertEqual(result, expected)
    
    
def parse_args():
    p = argparse.ArgumentParser()
    p.add_argument('-v', '--verbose', action='store_true')
    p.add_argument('-b', '--binary', action='store_true',
                   help='Is the dependency in the binary repo?')
    p.add_argument('-O', '--organization',
                   help='Organization owning the deps repos', default='python')
    p.add_argument('-e', '--externals-dir', type=pathlib.Path,
                   help='Directory in which to store dependencies',
                   default=pathlib.Path(__file__).parent.parent / 'externals')
    p.add_argument('tag',
                   help='tag of the dependency')
    return p.parse_args()
    
    
# Find a suitable Perl installation for OpenSSL.
# cygwin perl does *not* work.  ActivePerl does.
# Being a Perl dummy, the simplest way I can check is if the 'Win32' package
# is available.
def find_working_perl(perls):
    for perl in perls:
        try:
            subprocess.check_output([perl, '-e', 'use Win32;'])
        except subprocess.CalledProcessError:
            continue
        else:
            return perl
    
        # Loop over each face found in the frame to see if it's someone we know.
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
    print('Benchmarks (Note: All benchmarks are only using a single CPU core)')
print()
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    class Mock(MagicMock):
    @classmethod
    def __getattr__(cls, name):
            return MagicMock()