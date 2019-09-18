
        
                # vvvvid embed_info decryption algorithm is reverse engineered from function $ds(h) at vvvvid.js
        def ds(h):
            g = 'MNOPIJKL89+/4567UVWXQRSTEFGHABCDcdefYZabstuvopqr0123wxyzklmnghij'
    
            title = self._html_search_regex(
            (r'<[^>]+\bid=['\']video-title[^>]+>([^<]+)', r'<title>([^<]+)'),
            webpage, 'title', default=None) or self._html_search_meta(
            'description', webpage, 'title',
            default=None) or self._og_search_description(webpage)
    
        def _extract_video_info(self, content_id, site='cbs', mpx_acc=2198311517):
        items_data = self._download_xml(
            'http://can.cbs.com/thunder/player/videoPlayerService.php',
            content_id, query={'partner': site, 'contentId': content_id})
        video_data = xpath_element(items_data, './/item')
        title = xpath_text(video_data, 'videoTitle', 'title', True)
        tp_path = 'dJ5BDC/media/guid/%d/%s' % (mpx_acc, content_id)
        tp_release_url = 'http://link.theplatform.com/s/' + tp_path
    
    
class Go90IE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?go90\.com/(?:videos|embed)/(?P<id>[0-9a-zA-Z]+)'
    _TESTS = [{
        'url': 'https://www.go90.com/videos/84BUqjLpf9D',
        'md5': 'efa7670dbbbf21a7b07b360652b24a32',
        'info_dict': {
            'id': '84BUqjLpf9D',
            'ext': 'mp4',
            'title': 'Daily VICE - Inside The Utah Coalition Against Pornography Convention',
            'description': 'VICE\'s Karley Sciortino meets with activists who discuss the state\'s strong anti-porn stance. Then, VICE Sports explains NFL contracts.',
            'timestamp': 1491868800,
            'upload_date': '20170411',
            'age_limit': 14,
        }
    }, {
        'url': 'https://www.go90.com/embed/261MflWkD3N',
        'only_matching': True,
    }]
    _GEO_BYPASS = False
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    
def _mkdir(d):
    if not os.path.exists(d):
        os.mkdir(d)
    
    # Add any paths that contain custom static files (such as style sheets)
# here, relative to this directory. They are copied after the builtin
# static files, so a file named 'default.css' will overwrite the builtin
# 'default.css'.
html_static_path = ['_static']
    
        :param X_img_path: path to image to be recognized
    :param knn_clf: (optional) a knn classifier object. if not specified, model_save_path must be specified.
    :param model_path: (optional) path to a pickled knn classifier. if not specified, model_save_path must be knn_clf.
    :param distance_threshold: (optional) distance threshold for face classification. the larger it is, the more chance
           of mis-classifying an unknown person as a known one.
    :return: a list of names and face locations for the recognized faces in the image: [(name, bounding box), ...].
        For faces of unrecognized persons, the name 'unknown' will be returned.
    '''
    if not os.path.isfile(X_img_path) or os.path.splitext(X_img_path)[1][1:] not in ALLOWED_EXTENSIONS:
        raise Exception('Invalid image path: {}'.format(X_img_path))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # You can change this to any folder on your system
ALLOWED_EXTENSIONS = {'png', 'jpg', 'jpeg', 'gif'}
    
        pool.starmap(test_image, function_parameters)
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
    
def detect_faces_in_image(file_stream):
    # 用face_recognition.face_encodings(img)接口提前把奥巴马人脸的编码录入
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
    import getopt
import os
import platform
import sys
from .version import script_name, __version__
from .util import git, log
    
        if '_text' in dictified['video'][0]['file'][0]:  #link exist
        video_dict['links'] = [i['file'][0]['_text'].strip() for i in dictified['video']]
    
        def extract(self, **kwargs):
        if 'stream_id' in kwargs and kwargs['stream_id']:
            i = kwargs['stream_id']
            if 'size' not in self.streams[i]:
                self.streams[i]['size'] = urls_size(self.streams[i]['src'])
    
        Args:
      clean_lines: A CleansedLines instance containing the file.
      linenum: The number of the line to check.
      pos: position just after the suspected template argument.
    Returns:
      True if (linenum, pos) is inside template arguments.
    '''
    while linenum < clean_lines.NumLines():
      # Find the earliest character that might indicate a template argument
      line = clean_lines.elided[linenum]
      match = Match(r'^[^{};=\[\]\.<>]*(.)', line[pos:])
      if not match:
        linenum += 1
        pos = 0
        continue
      token = match.group(1)
      pos += len(match.group(0))