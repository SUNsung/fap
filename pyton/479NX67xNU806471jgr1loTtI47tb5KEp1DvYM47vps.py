
        
        
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
        def save(self, must_create=False):
        super().save(must_create)
        self._cache.set(self.cache_key, self._session, self.get_expiry_age())
    
        def create_model_instance(self, data):
        '''
        Return a new instance of the session model object, which represents the
        current session state. Intended to be used for saving the session data
        to the database.
        '''
        return self.model(
            session_key=self._get_or_create_session_key(),
            session_data=self.encode(data),
            expire_date=self.get_expiry_date(),
        )
    
        def save(self, must_create=False):
        '''
        To save, get the session key as a securely signed string and then set
        the modified flag so that the cookie is set on the client for the
        current request.
        '''
        self._session_key = self._get_session_key()
        self.modified = True
    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
        # Get options and arguments.
    try:
        opts, args = getopt.getopt(sys.argv[1:], _short_options, _options)
    except getopt.GetoptError as e:
        log.wtf('''
    [Fatal] {}.
    Try '{} --help' for more options.'''.format(e, script_name))
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
        if title is None:
      title = url[0]
    
    from ..common import *
from ..extractor import VideoExtractor
from .universal import *
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
    
def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS
    
    
@click.command()
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel. -1 means 'use all in system'')
@click.option('--model', default='hog', help='Which face detection model to use. Options are 'hog' or 'cnn'.')
def main(image_to_check, cpus, model):
    # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
    # This is a demo of running face recognition on a video file and saving the results to a new video file.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
            # Find all the faces and face encodings in the frame of video, cost most time
        face_locations = face_recognition.face_locations(rgb_frame)
        face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
    # This is a demo of running face recognition on live video from your webcam. It's a little more complicated than the
# other example, but it includes some basic performance tweaks to make things run a lot faster:
#   1. Process each video frame at 1/4 resolution (though still display it at full resolution)
#   2. Only detect faces in every other frame of video.
    
    
def selu(x):
    '''缩放型指数线性单元'''
    alpha = 1.6732632423543772848170429916717
    scale = 1.0507009873554804934193349852946
    o = tf.nn.elu(x)
    return scale * tf.where(x > 0, o, alpha * o)

    
        assert len(kernel_size) == 2
    assert len(strides) == 4
    
    l1_l2_regularizer = L1L2Regularizer(l1=0.01, l2=0.01)

    
    import tensorflow as tf
import keras.backend as K
    
    if word_vec.any():  #
    word_vec = word_vec / max(1, ngrams_found)
else:  # 如果一个 ngram 都没找到，gensim 会报错；个人认为把 0 向量传出来也可以
    raise KeyError('all ngrams for word %s absent from model' % word_unk)