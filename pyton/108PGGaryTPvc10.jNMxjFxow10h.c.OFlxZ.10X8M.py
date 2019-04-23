
        
            def describe(self):
        '''Returns the existing details of the rule in AWS'''
        try:
            rule_info = self.client.describe_rule(Name=self.name)
        except botocore.exceptions.ClientError as e:
            error_code = e.response.get('Error', {}).get('Code')
            if error_code == 'ResourceNotFoundException':
                return {}
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        except botocore.exceptions.BotoCoreError as e:
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        return self._snakify(rule_info)
    
        try:
        client.login(username=module.params['ipa_user'],
                     password=module.params['ipa_pass'])
        changed, hbacrule = ensure(module, client)
        module.exit_json(changed=changed, hbacrule=hbacrule)
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
        if not isinstance(body['hosts'], list):
        body['hosts'] = [body['hosts']]
    
        if event == 'annotation':
        if not msg:
            module.fail_json(msg='msg required for annotation events')
        try:
            send_annotation_event(module, key, msg, annotated_by, level, instance_id, event_epoch)
        except Exception as e:
            module.fail_json(msg='unable to sent annotation event: %s' % to_native(e),
                             exception=traceback.format_exc())
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
                result.printErrors()
            result.printSummary(start, stop)
            self.exitcode = int(not result.wasSuccessful())
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
            def __init__(self, method=SSL.SSLv23_METHOD, *args, **kwargs):
            super(ScrapyClientContextFactory, self).__init__(*args, **kwargs)
            self._ssl_method = method
    
    
def _get_boto_connection():
    from boto.s3.connection import S3Connection
    
    openssl_methods = {
    METHOD_TLS:    SSL.SSLv23_METHOD,                   # protocol negotiation (recommended)
    METHOD_SSLv3:  SSL.SSLv3_METHOD,                    # SSL 3 (NOT recommended)
    METHOD_TLSv10: SSL.TLSv1_METHOD,                    # TLS 1.0 only
    METHOD_TLSv11: getattr(SSL, 'TLSv1_1_METHOD', 5),   # TLS 1.1 only
    METHOD_TLSv12: getattr(SSL, 'TLSv1_2_METHOD', 6),   # TLS 1.2 only
}
    
        text = html.remove_tags_with_content(text, ('script', 'noscript'))
    text = html.replace_entities(text)
    text = html.remove_comments(text)
    return _ajax_crawlable_re.search(text) is not None

    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
            self.assertEqual(len(detected_faces), 1)
        self.assertEqual(detected_faces[0], (142, 617, 409, 349))
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
        :param img: An image (as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param model: Which face detection model to use. 'hog' is less accurate but faster on CPUs. 'cnn' is a more accurate
                  deep-learning model which is GPU/CUDA accelerated (if available). The default is 'hog'.
    :return: A list of dlib 'rect' objects of found face locations
    '''
    if model == 'cnn':
        return cnn_face_detector(img, number_of_times_to_upsample)
    else:
        return face_detector(img, number_of_times_to_upsample)
    
        # Create arrays of known face encodings and their names
    Global.known_face_encodings = [
        obama_face_encoding,
        biden_face_encoding
    ]
    Global.known_face_names = [
        'Barack Obama',
        'Joe Biden'
    ]
    
    from ..utils import get_w, get_shape
from ..initializers import constant
    
    
def conv2d(x, kernel_size, out_channels,
           act_fn=relu,
           strides=1,
           padding='SAME',
           name=None,
           reuse=None):
    '''2-D 卷积层
    Input shape:  [batch_size, in_h, in_w, in_channels]
    Output shape: [batch_size, out_h, out_w, out_channels]
    
            return self._call(x)

    
        '''
    max_sentence_len, max_word_len, char_vocab_size = get_shape(x)[1:]
    
        References:
        K.repeat()
        tf.tile()
    '''
    assert x.get_shape().ndims == 2
    x = tf.expand_dims(x, axis=1)  # -> [batch_size, 1, n_input]
    return tf.tile(x, [1, n, 1])  # -> [batch_size, n, n_input]
    
    
def testFixRaw():
    check(b'\x94\xa0\xa1a\xa2bc\xa3def', (b'', b'a', b'bc', b'def', ), )
    
        dest = pathlib.Path('dist')
    dest.mkdir(exist_ok=True)
    
    plt.figtext(
    0.05, 0.2, r'$y_{it} = \beta^{\prime} x_{it} + \mu_{i} + \epsilon_{it}$',
    size=16, color='#5a89a4')
    
        # Compute expected result
    if isinstance(levels, list):
        groupers = [pd.Grouper(level=lv) for lv in levels]
    else:
        groupers = pd.Grouper(level=levels)
    
    
Your class ``TestDtype`` will inherit all the tests defined on
``BaseDtypeTests``. pytest's fixture discover will supply your ``dtype``
wherever the test requires it. You're free to implement additional tests.
    
        def test_multiple_strong_etag_match(self):
        computed_etag = ''xyzzy1''
        etags = ''xyzzy1', 'xyzzy2''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
    
@gen.engine
def e1():
    for i in range(10):
        yield gen.Task(e2)
    
    define('num', default=100, help='number of iterations')
define('dump', default=False, help='print template generated code and exit')
    
    
class FixFutureImports(fixer_base.BaseFix):
    BM_compatible = True
    
    
if __name__ == '__main__':
    main()

    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    
    from concurrent.futures import ThreadPoolExecutor
from tornado import gen
from tornado.ioloop import IOLoop
from tornado.platform.asyncio import (
    AsyncIOLoop,
    to_asyncio_future,
    AnyThreadEventLoopPolicy,
)
from tornado.testing import AsyncTestCase, gen_test
    
    
class OpenIdServerAuthenticateHandler(RequestHandler):
    def post(self):
        if self.get_argument('openid.mode') != 'check_authentication':
            raise Exception('incorrect openid.mode %r')
        self.write('is_valid:true')