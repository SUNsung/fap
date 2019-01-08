
        
            # Check cryptography version
    from cryptography import __version__ as cryptography_version
    _check_cryptography(cryptography_version)
except ImportError:
    pass
    
    This module provides the capabilities for the Requests hooks system.
    
    # If true, show URL addresses after external links.
#man_show_urls = False
    
        def test_header_keys_are_native(self, httpbin):
        headers = {u('unicode'): 'blah', 'byte'.encode('ascii'): 'blah'}
        r = requests.Request('GET', httpbin('get'), headers=headers)
        p = r.prepare()
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
    
class _BenchServer(object):
    
    
    
        def process_request_meta(self, opts):
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
        scan_wizard.on_completed = scan_completed_callback
    client.add_scan_wizard(scan_wizard)
    
            if state is None or state.state == STATE_UNKNOWN:
            return
    
    import requests
import voluptuous as vol
    
        def __init__(self, schema, allow_empty=False):
        '''Initialize the decorator.'''
        self._schema = schema
        self._allow_empty = allow_empty
    
    # If true, show URL addresses after external links.
#latex_show_urls = False
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        :param css:  plain tuple representation of the rect in (top, right, bottom, left) order
    :return: a dlib `rect` object
    '''
    return dlib.rectangle(css[3], css[0], css[1], css[2])
    
    # Load a second sample picture and learn how to recognize it.
biden_image = face_recognition.load_image_file('biden.jpg')
biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    # Show the picture
pil_image.show()

    
    # 载入样本图片（奥巴马和拜登）
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        face_found = False
    is_obama = False
    
        IOLoop.instance().start()
    
        '''
    
    __all__ = ['set_close_exec']

    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.
    
            You can also omit explicit `Rule` constructor and use tuples of arguments::