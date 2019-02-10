
        
            out = bug_text + dev_text
    
        infile, outfile = args
    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
        fileopts = []
    for opt in opts_file:
        if opt._short_opts:
            fileopts.extend(opt._short_opts)
        if opt._long_opts:
            fileopts.extend(opt._long_opts)
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
    from .bilibili import bilibili_download
from .dailymotion import dailymotion_download
from .iqiyi import iqiyi_download_by_vid
from .le import letvcloud_download_by_vu
from .netease import netease_download
from .qq import qq_download_by_vid
from .sina import sina_download_by_vid
from .tudou import tudou_download_by_id
from .vimeo import vimeo_download_by_id
from .yinyuetai import yinyuetai_download_by_id
from .youku import youku_download_by_vid
from . import iqiyi
from . import bokecc
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(urls, title, ext, size, output_dir, merge=False)
    
    def fetch_photo_url_list_impl(url, size, method, id_field, id_parse_func, collection_name):
    page = get_html(url)
    api_key = get_api_key(page)
    ext_field = ''
    if id_parse_func:
        ext_field = '&%s=%s' % (id_field, id_parse_func(url, page))
    page_number = 1
    urls = []
    while True:
        call_url = tmpl_api_call % (api_key, method, ext_field, page_number)
        photoset = json.loads(get_content_headered(call_url))[collection_name]
        pagen = photoset['page']
        pages = photoset['pages']
        for info in photoset['photo']:
            url = get_url_of_largest(info, api_key, size)
            urls.append(url)
        page_number = page_number + 1
        # the typeof 'page' and 'pages' may change in different methods
        if str(pagen) == str(pages):
            break
    return urls, match1(page, pattern_inline_title)
    
        def scan_devices(self):
        '''Scan for new devices and return a list with found device IDs.'''
        self._update_info()
        return [client.mac for client in self.last_results]
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )
    
        def _get_room(self, room):
        '''Get Room object, creating it if necessary.'''
        from hipnotify import Room
        if room not in self._rooms:
            self._rooms[room] = Room(
                token=self._token, room_id=room, endpoint_url=self._host)
        return self._rooms[room]
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
    # Load a test image and get encondings for it
image_to_test = face_recognition.load_image_file('obama2.jpg')
image_to_test_encoding = face_recognition.face_encodings(image_to_test)[0]
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 25), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 0.5, (255, 255, 255), 1)
    
            face_names = []
        for face_encoding in face_encodings:
            # See if the face is a match for the known face(s)
            matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
            name = 'Unknown'
    
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
    
        def test_raw_face_locations_32bit_image(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', '32bit.png'))
        detected_faces = api._raw_face_locations(img)
    
        #Required strings to create intermediate HTML files
    header = '<html><head><link rel=stylesheet type=text/css href=' + colorscheme + '.css></head><body>\n'
    footer = '</body></html>'
    title_content = '<h1 class=titlemain>tldr pages</h1><h4 class=titlesub>Simplified and community driven man pages</h4></body></html>'
    
    
def test_9():
    for o in [1 << 32, (1 << 64) - 1, -((1 << 31) + 1), -(1 << 63), 1.0, 0.1,
              -0.1, -1.0]:
        check(9, o)
    
    On Windows, no additional modules are needed.
On Mac, the module uses pbcopy and pbpaste, which should come with the os.
On Linux, install xclip or xsel via package manager. For example, in Debian:
sudo apt-get install xclip
    
            exp = pd.Index([pd.Timestamp('2011-01-01 09:00', tz=tz),
                        pd.Timestamp('2011-01-01 10:00'),
                        pd.Timestamp('2011-01-01 11:00', tz=tz)],
                       dtype=object)
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00')), exp)
    
    def strdecode(sentence):
    if not isinstance(sentence, text_type):
        try:
            sentence = sentence.decode('utf-8')
        except UnicodeDecodeError:
            sentence = sentence.decode('gbk', 'ignore')
    return sentence
    
            if withWeight:
            tags = sorted(freq.items(), key=itemgetter(1), reverse=True)
        else:
            tags = sorted(freq, key=freq.__getitem__, reverse=True)
        if topK:
            return tags[:topK]
        else:
            return tags

    
    jieba.analyse.set_stop_words('../extra_dict/stop_words.txt')
jieba.analyse.set_idf_path('../extra_dict/idf.txt.big');
    
    content = open(file_name, 'rb').read()
    
    
if len(args) <1:
    print(USAGE)
    sys.exit(1)
    
    jieba.enable_parallel(4)