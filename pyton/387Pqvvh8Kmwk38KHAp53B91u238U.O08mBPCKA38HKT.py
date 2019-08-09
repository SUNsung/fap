
        
            def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
    
class SalesRanker(MRJob):
    
    
class RemoveDuplicateUrls(MRJob):
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
      Returns:
    See waveform_to_examples.
  '''
  wav_data, sr = sf.read(wav_file, dtype='int16')
  assert wav_data.dtype == np.int16, 'Bad sample type: %r' % wav_data.dtype
  samples = wav_data / 32768.0  # Convert to [-1.0, +1.0]
  return waveform_to_examples(samples, sr)

    
    # Parameters used for embedding postprocessing.
PCA_EIGEN_VECTORS_NAME = 'pca_eigen_vectors'
PCA_MEANS_NAME = 'pca_means'
QUANTIZE_MIN_VAL = -2.0
QUANTIZE_MAX_VAL = +2.0
    
    '''Post-process embeddings from VGGish.'''
    
    For comparison, here is TF-Slim's VGG definition:
https://github.com/tensorflow/models/blob/master/research/slim/nets/vgg.py
'''
    
    Usage:
- Download the VGGish checkpoint and PCA parameters into the same directory as
  the VGGish source code. If you keep them elsewhere, update the checkpoint_path
  and pca_params_path variables below.
- Run:
  $ python vggish_smoke_test.py
'''
    
    # Aliases for aggregation types.
_VLAD = aggregation_config_pb2.AggregationConfig.VLAD
_ASMK = aggregation_config_pb2.AggregationConfig.ASMK
_ASMK_STAR = aggregation_config_pb2.AggregationConfig.ASMK_STAR
    
    
if __name__ == '__main__':
  parser = argparse.ArgumentParser()
  parser.register('type', 'bool', lambda v: v.lower() == 'true')
  parser.add_argument(
      '--delf_config_path',
      type=str,
      default='/tmp/delf_config_example.pbtxt',
      help='''
      Path to DelfConfig proto text file with configuration to be used for DELF
      extraction.
      ''')
  parser.add_argument(
      '--dataset_file_path',
      type=str,
      default='/tmp/gnd_roxford5k.mat',
      help='''
      Dataset file for Revisited Oxford or Paris dataset, in .mat format.
      ''')
  parser.add_argument(
      '--images_dir',
      type=str,
      default='/tmp/images',
      help='''
      Directory where dataset images are located, all in .jpg format.
      ''')
  parser.add_argument(
      '--output_features_dir',
      type=str,
      default='/tmp/features',
      help='''
      Directory where DELF features will be written to. Each image's features
      will be written to a file with same name, and extension replaced by .delf.
      ''')
  cmd_args, unparsed = parser.parse_known_args()
  app.run(main=main, argv=[sys.argv[0]] + unparsed)

    
    from absl.testing import parameterized
import numpy as np
import tensorflow as tf
    
      # Mean precision@k.
  print('**********************************************')
  public_precisions = 100.0 * metrics.MeanPrecisions(public_predictions,
                                                     public_solution)
  private_precisions = 100.0 * metrics.MeanPrecisions(private_predictions,
                                                      private_solution)
  print('(Public)  Mean precisions: P@1: %.2f, P@5: %.2f, P@10: %.2f, '
        'P@50: %.2f, P@100: %.2f' %
        (public_precisions[0], public_precisions[4], public_precisions[9],
         public_precisions[49], public_precisions[99]))
  print('(Private) Mean precisions: P@1: %.2f, P@5: %.2f, P@10: %.2f, '
        'P@50: %.2f, P@100: %.2f' %
        (private_precisions[0], private_precisions[4], private_precisions[9],
         private_precisions[49], private_precisions[99]))
    
        # Define expected results.
    expected_public_solution = {
        '0123456789abcdef': [0, 12],
        '0223456789abcdef': []
    }
    expected_private_solution = {
        '0423456789abcdef': [1],
    }
    expected_ignored_ids = ['0323456789abcdef', '0523456789abcdef']
    
    
def GlobalAveragePrecision(predictions,
                           recognition_solution,
                           ignore_non_gt_test_images=False):
  '''Computes global average precision for recognition prediction.
    
    
class TestLocalhostShorthand:
    def test_expand_localhost_shorthand(self):
        args = parser.parse_args(args=[':'], env=MockEnvironment())
        assert args.url == 'http://localhost'
    
    
def get_requests_session(ssl_version):
    requests_session = requests.Session()
    requests_session.mount(
        'https://',
        HTTPieHTTPAdapter(ssl_version=ssl_version)
    )
    for cls in plugin_manager.get_transport_plugins():
        transport_plugin = cls()
        requests_session.mount(prefix=transport_plugin.prefix,
                               adapter=transport_plugin.get_adapter())
    return requests_session
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
        def setUp(self):
        self.request = Request('http://example.com/index.html')
        self.response = Response(self.request.url, request=self.request)
        self.crawler = get_crawler(Spider)
        self.spider = self.crawler._create_spider('foo')
        self.mwman = SpiderMiddlewareManager.from_crawler(self.crawler)
    
        @defer.inlineCallbacks
    def test_process_spider_input_without_errback(self):
        '''
        (1.1) An exception from the process_spider_input chain should be caught by the
        process_spider_exception chain from the start if the Request has no errback
        '''
        log1 = yield self.crawl_log(ProcessSpiderInputSpiderWithoutErrback)
        self.assertIn('Middleware: will raise IndexError', str(log1))
        self.assertIn('Middleware: IndexError exception caught', str(log1))
    
        def _extract_links(self, selector, response_url, response_encoding, base_url):
        links = []
        # hacky way to get the underlying lxml parsed document
        for el, attr, attr_val in self._iter_links(selector.root):
            # pseudo lxml.html.HtmlElement.make_links_absolute(base_url)
            try:
                if self.strip:
                    attr_val = strip_html5_whitespace(attr_val)
                attr_val = urljoin(base_url, attr_val)
            except ValueError:
                continue  # skipping bogus links
            else:
                url = self.process_attr(attr_val)
                if url is None:
                    continue
            url = to_native_str(url, encoding=response_encoding)
            # to fix relative links after process_value
            url = urljoin(response_url, url)
            link = Link(url, _collect_string_content(el) or u'',
                        nofollow=rel_has_nofollow(el.get('rel')))
            links.append(link)
        return self._deduplicate_if_needed(links)
    
        def test_proxy_already_seted(self):
        os.environ['http_proxy'] = 'https://proxy.for.http:3128'
        mw = HttpProxyMiddleware()
        req = Request('http://noproxy.com', meta={'proxy': None})
        assert mw.process_request(req, spider) is None
        assert 'proxy' in req.meta and req.meta['proxy'] is None
    
            if opts.loglevel:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_LEVEL', opts.loglevel, priority='cmdline')
    
    import math
from sklearn import neighbors
import os
import os.path
import pickle
from PIL import Image, ImageDraw
import face_recognition
from face_recognition.face_recognition_cli import image_files_in_folder
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
            print('I see someone named {}!'.format(name))

    
        :param face_image: image to search
    :param face_locations: Optionally provide a list of face locations to check.
    :param model: Optional - which model to use. 'large' (default) or 'small' which only returns 5 points but is faster.
    :return: A list of dicts of face feature locations (eyes, nose, etc)
    '''
    landmarks = _raw_face_landmarks(face_image, face_locations, model)
    landmarks_as_tuples = [[(p.x, p.y) for p in landmark.parts()] for landmark in landmarks]
    
    # Install scikit-learn if you haven't already with pip
# $ pip3 install scikit-learn
    
        pprint(contributions)
    
    
def main():
    '''
    >>> Order(100)
    <Price: 100, price after discount: 100>
    
    '''
An example of the Template pattern in Python
    
    
class ComplexBuilding(object):
    def __repr__(self):
        return 'Floor: {0.floor} | Size: {0.size}'.format(self)
    
        >>> sorted(Jhon.__dict__.items())
    [('_lazy__parents', 'Father and mother'), ('call_count2', 1), ..., ('relatives', 'Many relatives.')]
    
            if not callable(attr):
            return attr
    
    *TL;DR
Decouples an abstraction from its implementation.
'''
    
    
_HELPTEXT = 'Options for blending the edges of the swapped box with the background image'
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
    
class Writer(Output):
    ''' Images output writer using cv2 '''
    def __init__(self, output_folder, **kwargs):
        super().__init__(output_folder, **kwargs)
        self.check_transparency_format()
        # Correct format namings for writing to byte stream
        self.format_dict = dict(jpg='JPEG', jp2='JPEG 2000', tif='TIFF')
        self.kwargs = self.get_save_kwargs()