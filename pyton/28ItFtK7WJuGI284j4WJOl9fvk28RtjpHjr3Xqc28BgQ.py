
        
          Returns:
    mean_average_precision: Mean average precision (float).
    mean_precisions: Mean precision @ `desired_pr_ranks` (NumPy array of
      floats, with shape [len(desired_pr_ranks)]).
    mean_recalls: Mean recall @ `desired_pr_ranks` (NumPy array of floats, with
      shape [len(desired_pr_ranks)]).
    average_precisions: Average precision for each query (NumPy array of floats,
      with shape [#queries]).
    precisions: Precision @ `desired_pr_ranks`, for each query (NumPy array of
      floats, with shape [#queries, len(desired_pr_ranks)]).
    recalls: Recall @ `desired_pr_ranks`, for each query (NumPy array of
      floats, with shape [#queries, len(desired_pr_ranks)]).
    
      def _generate(self, feature_map_shape_list, im_height=1, im_width=1):
    '''Generates a collection of bounding boxes to be used as anchors.
    
        Raises:
      ValueError: if invalid dimensions for bbox data or if bbox data is not in
          float32 format.
    '''
    if len(boxes.get_shape()) != 2 or boxes.get_shape()[-1] != 4:
      raise ValueError('Invalid dimensions for box data.')
    if boxes.dtype != tf.float32:
      raise ValueError('Invalid tensor type: should be tf.float32')
    self.data = {'boxes': boxes}
    
    
def prefetch(tensor_dict, capacity):
  '''Creates a prefetch queue for tensors.
    
    Outputs file:
* A tflite compatible frozen graph - $output_directory/tflite_graph.pb
    
        with tf.device(deploy_config.optimizer_device()):
      training_optimizer, optimizer_summary_vars = optimizer_builder.build(
          train_config.optimizer)
      for var in optimizer_summary_vars:
        tf.summary.scalar(var.op.name, var, family='LearningRate')
    
      def _match(self, similarity_matrix, valid_rows):
    '''Bipartite matches a collection rows and columns. A greedy bi-partite.
    
    

    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def short_desc(self):
        return 'Run a spider'
    
        def short_desc(self):
        return 'Edit spider'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
        def spider_closed(self, spider):
        self.storage.close_spider(spider)
    
    EOF = -1
    
        def getNumberOfSyntaxErrors(self):
        '''
        Get number of recognition errors (lexer, parser, tree parser).  Each
        recognizer tracks its own number.  So parser and lexer each have
        separate count.  Does not count the spurious errors found between
        an error and next valid token match
    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
    from ..common import *
    
        mime, ext, size = url_info(real_url)
    
    def douban_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html = get_html(url)
    
    from ..common import *
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
        def prepare(self, **kwargs):
        if re.search(r'imgur\.com/a/', self.url):
            # album
            content = get_content(self.url)
            album = match1(content, r'album\s*:\s*({.*}),') or \
                    match1(content, r'image\s*:\s*({.*}),')
            album = json.loads(album)
            count = album['album_images']['count']
            images = album['album_images']['images']
            ext = images[0]['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (i['hash'], ext)
                            for i in images],
                    'size': sum([i['size'] for i in images]),
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (i['hash'], '.jpg')
                            for i in images],
                    'container': 'jpg'
                }
            }
            self.title = album['title']
    
        def counting_handler(self, text):
        self.n += 1
    
            def stls(self, keyfile=None, certfile=None, context=None):
            '''The method unconditionally raises an exception since the
            STLS command doesn't make any sense on an already established
            SSL/TLS session.
            '''
            raise error_proto('-ERR TLS session already established')
    
    
class Queue:
    '''Create a queue object with a given maximum size.
    
    
class PyTextIOWrapperTest(TextIOWrapperTest):
    io = pyio
    shutdown_error = 'LookupError: unknown encoding: ascii'
    
        def CheckExecuteDictMapping_Mapping(self):
        class D(dict):
            def __missing__(self, key):
                return 'foo'
    
            with contextlib.ExitStack() as stack:
            if _mswindows:
                if p2cread != -1:
                    stack.callback(p2cread.Close)
                if c2pwrite != -1:
                    stack.callback(c2pwrite.Close)
                if errwrite != -1:
                    stack.callback(errwrite.Close)
            else:
                if p2cread != -1 and p2cwrite != -1 and p2cread != devnull_fd:
                    stack.callback(os.close, p2cread)
                if c2pwrite != -1 and c2pread != -1 and c2pwrite != devnull_fd:
                    stack.callback(os.close, c2pwrite)
                if errwrite != -1 and errread != -1 and errwrite != devnull_fd:
                    stack.callback(os.close, errwrite)
    
    from lib.model import masks as model_masks
from ._base import Adjustment, BlurMask, logger
    
    
_DEFAULTS = {
    'format': {
        'default': 'png',
        'info': 'Image format to use:'
                '\n\t bmp: Windows bitmap'
                '\n\t gif: Graphics Interchange Format (NB: Not animated)'
                '\n\t jpg: JPEG format'
                '\n\t jp2: JPEG 2000 format'
                '\n\t png: Portable Network Graphics'
                '\n\t ppm: Portable Pixmap Format'
                '\n\t tif: Tag Image File Format',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['bmp', 'gif', 'jpg', 'jp2', 'png', 'ppm', 'tif'],
        'gui_radio': True,
        'fixed': True,
    },
    'draw_transparent': {
        'default': False,
        'info': 'Place the swapped face on a transparent layer rather than the original frame.'
                '\nNB: This is only compatible with images saved in png or tif format. If an '
                'incompatible format is selected then the image will be saved as a png.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'optimize': {
        'default': False,
        'info': '[gif, jpg and png only] If enabled, indicates that the encoder should make '
                'an extra pass over the image in order to select optimal encoder settings.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'gif_interlace': {
        'default': True,
        'info': '[gif only] Set whether to save the gif as interlaced or not.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'jpg_quality': {
        'default': 75,
        'info': '[jpg only] Set the jpg quality. 1 is worst 95 is best. Higher quality leads '
                'to larger file sizes.',
        'datatype': int,
        'rounding': 1,
        'min_max': (1, 95),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'png_compress_level': {
        'default': 3,
        'info': '[png only] ZLIB compression level, 1 gives best speed, 9 gives best '
                'compression, 0 gives no compression at all. When optimize option is set to '
                'True this has no effect (it is set to 9 regardless of a value passed).',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 9),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'tif_compression': {
        'default': 'tiff_deflate',
        'info': '[tif only] The desired compression method for the file.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': [
            'none',
            'tiff_ccitt',
            'group3',
            'group4',
            'tiff_jpeg',
            'tiff_adobe_deflate',
            'tiff_thunderscan',
            'tiff_deflate',
            'tiff_sgilog',
            'tiff_sgilog24',
            'tiff_raw_16',
        ],
        'gui_radio': False,
        'fixed': True,
    },
}

    
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
    
        # remove initial and terminal nodes from checkpoints list if present
    checkpoints = list(set(checkpoints) - set(ys) - set(xs))
    
        def extract_tags(self, sentence, topK=20, withWeight=False, allowPOS=(), withFlag=False):
        '''
        Extract keywords from sentence using TF-IDF algorithm.
        Parameter:
            - topK: return how many top keywords. `None` for all possible words.
            - withWeight: if True, return a list of (word, weight);
                          if False, return a list of words.
            - allowPOS: the allowed POS list eg. ['ns', 'n', 'vn', 'v','nr'].
                        if the POS of w is not in this list,it will be filtered.
            - withFlag: only work with allowPOS is not empty.
                        if True, return a list of pair(word, weight) like posseg.cut
                        if False, return a list of words
        '''
        if allowPOS:
            allowPOS = frozenset(allowPOS)
            words = self.postokenizer.cut(sentence)
        else:
            words = self.tokenizer.cut(sentence)
        freq = {}
        for w in words:
            if allowPOS:
                if w.flag not in allowPOS:
                    continue
                elif not withFlag:
                    w = w.word
            wc = w.word if allowPOS and withFlag else w
            if len(wc.strip()) < 2 or wc.lower() in self.stop_words:
                continue
            freq[w] = freq.get(w, 0.0) + 1.0
        total = sum(freq.values())
        for k in freq:
            kw = k.word if allowPOS and withFlag else k
            freq[k] *= self.idf_freq.get(kw, self.median_idf) / total
    
    file_name = args[0]
    
    from __future__ import unicode_literals
import sys
sys.path.append('../')