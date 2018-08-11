
        
        import itertools
import json
import os
import re
import sys
    
            return {
            'id': video_id,
            'url': video_url,
            'ext': 'mp4',
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'categories': categories,
            'duration': duration,
            'view_count': view_count,
            'age_limit': 18,
        }

    
            json_url = (
            'http://static.videos.gouv.fr/brightcovehub/export/json/%s' %
            video_id)
        info = self._download_json(json_url, title, 'Downloading JSON config')
        video_url = info['renditions'][0]['url']
    
        cmd = cmd.split()
    
                    if not os.path.exists(path):
                    with open(path, 'w') as output_fd:
                        output_fd.write(contents)
    
        def on_open_shell(self):
        try:
            self._exec_cli_command('screen-length 0 temporary')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
    
class ExponentialBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _exponential_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')
    
            if self._current_package_is_installed() and not self._current_package_is_outdated():
            self.message = 'Package is already upgraded: {0}'.format(
                self.current_package,
            )
            self.unchanged_count += 1
            return True
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils._text import to_text
from ansible.module_utils.urls import fetch_url
    
    # Use a routing policy to distribute traffic:
- route53:
      state: present
      zone: foo.com
      record: www.foo.com
      type: CNAME
      value: host1.foo.com
      ttl: 30
      # Routing policy
      identifier: 'host1@www'
      weight: 100
      health_check: 'd994b780-3150-49fd-9205-356abdd42e75'
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False}
    
        return concurrency, delay
    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None
    
        def gotHeaders(self, headers):
        self.headers_time = time()
        self.response_headers = headers
    
        component_name = 'spider middleware'
    
        def log(self, request, spider):  # log that a request has been filtered
        pass
    
        def __init__(self, stats):
        self.stats = stats
    
        major = int(m.group(1))
    minor = int(m.group(2))
    patch = int(m.group(4) or 0)
    beta = int(m.group(6) or sys.maxint)
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
    
    def getErrorMessage(self, e, tokenNames):
        '''
        What error message should be generated for the various
        exception types?
        
        Not very object-oriented code, but I like having all error message
        generation within one method rather than spread among all of the
        exception classes. This also makes it much easier for the exception
        handling because the exception classes do not have to have pointers back
        to this object to access utility routines and so on. Also, changing
        the message for an exception type would be difficult because you
        would have to subclassing exception, but then somehow get ANTLR
        to make those kinds of exception objects instead of the default.
        This looks weird, but trust me--it makes the most sense in terms
        of flexibility.
    
                # Drop any prior replaces contained within
            for j, prevRop in self.getKindOfOps(rewrites, ReplaceOp, i):
                if (prevRop.index >= rop.index
                    and prevRop.lastIndex <= rop.lastIndex):
                    rewrites[j] = None  # delete replace as it's a no-op.
                    continue
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text
    
    A Parser needs a TokenStream as input (which in turn is usually fed by a
Lexer):
    
            r.ClearData()
    v.Close()
    
        def test_fileobj(self):
        with self.open(BytesIO(self.DATA), 'r') as f:
            self.assertEqual(f.read(), self.TEXT)
        with self.open(BytesIO(self.DATA), 'rb') as f:
            self.assertEqual(f.read(), self.TEXT)
        text = self.TEXT.decode('ascii')
        with self.open(BytesIO(self.DATA), 'rt') as f:
            self.assertEqual(f.read(), text)
    
        def test_get_local_part_simple_quoted(self):
        local_part = self._test_get_x(parser.get_local_part,
            ''dinsdale'@python.org', ''dinsdale'', ''dinsdale'', [], '@python.org')
        self.assertEqual(local_part.token_type, 'local-part')
        self.assertEqual(local_part.local_part, 'dinsdale')
    
            # Don't call close(): _close_self_pipe() cannot be called twice
        self.loop._closed = True
    
        @unittest.skipUnless(hasattr(os, 'setegid'), 'test needs os.setegid()')
    def test_setegid(self):
        if os.getuid() != 0 and not HAVE_WHEEL_GROUP:
            self.assertRaises(OSError, os.setegid, 0)
        self.assertRaises(OverflowError, os.setegid, 1<<32)
    
    def is_tuple(node):
    '''Does the node represent a tuple literal?'''
    if isinstance(node, Node) and node.children == [LParen(), RParen()]:
        return True
    return (isinstance(node, Node)
            and len(node.children) == 3
            and isinstance(node.children[0], Leaf)
            and isinstance(node.children[1], Node)
            and isinstance(node.children[2], Leaf)
            and node.children[0].value == '('
            and node.children[2].value == ')')
    
        def transform_xrange(self, node, results):
        name = results['name']
        name.replace(Name('range', prefix=name.prefix))
        # This prevents the new range call from being wrapped in a list later.
        self.transformed_xranges.add(id(node))
    
        def test_load_packaged_grammar(self):
        modname = __name__ + '.load_test'
        class MyLoader:
            def get_data(self, where):
                return pickle.dumps({'elephant': 19})
        class MyModule:
            __file__ = 'parsertestmodule'
            __spec__ = importlib.util.spec_from_loader(modname, MyLoader())
        sys.modules[modname] = MyModule()
        self.addCleanup(operator.delitem, sys.modules, modname)
        g = pgen2_driver.load_packaged_grammar(modname, 'Grammar.txt')
        self.assertEqual(g.elephant, 19)
    
        @support.reap_threads
    def test_threaded_hashing(self):
        # Updating the same hash object from several threads at once
        # using data chunk sizes containing the same byte sequences.
        #
        # If the internal locks are working to prevent multiple
        # updates on the same object from running at once, the resulting
        # hash will be the same as doing it single threaded upfront.
        hasher = hashlib.sha1()
        num_threads = 5
        smallest_data = b'swineflu'
        data = smallest_data * 200000
        expected_hash = hashlib.sha1(data*num_threads).hexdigest()
    
            #Required string to create directory title pages
        dir_title = '<h2 class=titledir>' + operating_sys.capitalize() + '</h2></body></html>'
    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
        for file in image_files_in_folder(known_people_folder):
        basename = os.path.splitext(os.path.basename(file))[0]
        img = face_recognition.load_image_file(file)
        encodings = face_recognition.face_encodings(img)
    
        # Let's trace out each facial feature in the image with a line!
    pil_image = Image.fromarray(image)
    d = ImageDraw.Draw(pil_image)
    
            self.assertEqual(len(detected_faces), 1)
        self.assertEqual(detected_faces[0].top(), 290)
        self.assertEqual(detected_faces[0].bottom(), 558)