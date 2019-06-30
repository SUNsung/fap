
        
            for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
    import rsa
import json
from binascii import hexlify
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
    import shutil
    
            def print_skipping(reason):
            print('Skipping %s: %s' % (test_case['name'], reason))
        if not ie.working():
            print_skipping('IE marked as not _WORKING')
            return
    
    
class TestCeskaTelevizeSubtitles(BaseTestSubtitles):
    url = 'http://www.ceskatelevize.cz/ivysilani/10600540290-u6-uzasny-svet-techniky'
    IE = CeskaTelevizeIE
    
        def __call__(self, x):
        regularization = 0.
        if self.l1:
            regularization += K.sum(self.l1 * K.abs(x))
        if self.l2:
            regularization += K.sum(self.l2 * K.square(x))
        return regularization
    
    
def test_objective_shapes_2d():
    y_a = K.variable(np.random.random((6, 7)))
    y_b = K.variable(np.random.random((6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (6,)
    
    data_dim = 5
num_classes = 2
batch_size = 10
    
    Get to 99.8% test accuracy after 5 epochs
for the first five digits classifier
and 99.2% for the last five digits after transfer + fine-tuning.
'''
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
    
def public_course_playlist(url, page=None):
    host = 'http://www.icourses.cn/'
    patt = r'<a href='(.+?)'\s*title='(.+?)'.+?>(?:.|\n)+?</a>'
    
    # If true, the index is split into individual pages for each letter.
#html_split_index = False
    
    1. Prepare a set of images of the known people you want to recognize. Organize the images in a single directory
   with a sub-directory for each known person.
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
            if len(encodings) == 0:
            click.echo('WARNING: No faces found in {}. Ignoring file.'.format(file))
        else:
            known_names.append(basename)
            known_face_encodings.append(encodings[0])
    
    # 载入样本图片（奥巴马和拜登）
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        # Start to show video
    last_num = 1
    fps_list = []
    tmp_time = time.time()
    while not Global.is_exit:
        while Global.write_num != last_num:
            last_num = int(Global.write_num)
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    def clean_text(text, replacements = {':': '_', ' ': '_', '/': '_', '.': '', ''': ''}):
    for key, rep in replacements.items():
        text = text.replace(key, rep)
    return text    
    
    
class TagValueNotFound(Exception):
    pass
    
    from django.conf import settings
from django.core.exceptions import ImproperlyConfigured
    
        def forwards(self, orm):
    
    
@instrumented_task(
    name='sentry.tagstore.tasks.delete_tag_key',
    queue='cleanup',
    default_retry_delay=60 * 5,
    max_retries=MAX_RETRIES
)
@retry(exclude=(DeleteAborted, ))
def delete_tag_key(object_id, model, transaction_id=None, **kwargs):
    from sentry import deletions
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
        This **does not** guarantee that the correct value is written into the cache
    though it will correct itself in the next update window.
    '''
    cutoff_dt = timezone.now() - timedelta(seconds=cutoff)
    # TODO(dcramer): this doesnt handle deleted options (which shouldn't be allowed)
    for option in Option.objects.filter(last_updated__gte=cutoff_dt).iterator():
        try:
            opt = default_manager.lookup_key(option.key)
            default_manager.store.set_cache(opt, option.value)
        except UnknownOption as e:
            logger.exception(six.text_type(e))

    
        s = pd.Series([1, 2, -1, 4])
    s[s < 0] = inc
    
    ABCSeries = create_pandas_abc_type('ABCSeries', '_typ', ('series', ))
ABCDataFrame = create_pandas_abc_type('ABCDataFrame', '_typ', ('dataframe', ))
ABCSparseDataFrame = create_pandas_abc_type('ABCSparseDataFrame', '_subtyp',
                                            ('sparse_frame', ))
ABCPanel = create_pandas_abc_type('ABCPanel', '_typ', ('panel',))
ABCSparseSeries = create_pandas_abc_type('ABCSparseSeries', '_subtyp',
                                         ('sparse_series',
                                          'sparse_time_series'))
ABCSparseArray = create_pandas_abc_type('ABCSparseArray', '_subtyp',
                                        ('sparse_array', 'sparse_series'))
ABCCategorical = create_pandas_abc_type('ABCCategorical', '_typ',
                                        ('categorical'))
ABCDatetimeArray = create_pandas_abc_type('ABCDatetimeArray', '_typ',
                                          ('datetimearray'))
ABCTimedeltaArray = create_pandas_abc_type('ABCTimedeltaArray', '_typ',
                                           ('timedeltaarray'))
ABCPeriodArray = create_pandas_abc_type('ABCPeriodArray', '_typ',
                                        ('periodarray', ))
ABCPeriod = create_pandas_abc_type('ABCPeriod', '_typ', ('period', ))
ABCDateOffset = create_pandas_abc_type('ABCDateOffset', '_typ',
                                       ('dateoffset',))
ABCInterval = create_pandas_abc_type('ABCInterval', '_typ', ('interval', ))
ABCExtensionArray = create_pandas_abc_type('ABCExtensionArray', '_typ',
                                           ('extension',
                                            'categorical',
                                            'periodarray',
                                            'datetimearray',
                                            'timedeltaarray',
                                            ))
ABCPandasArray = create_pandas_abc_type('ABCPandasArray',
                                        '_typ',
                                        ('npy_extension',))
    
        with tm.ensure_clean(filename) as path:
        df.to_json(path, compression=to_compression)
        result = pd.read_json(path, compression=read_compression)
        tm.assert_frame_equal(result, df)

    
        packer = msgpack.Packer()
    
            exp = pd.Series([pd.Timestamp('2011-01-02'),
                         pd.Timestamp('2011-01-02', tz='US/Eastern'),
                         pd.Timedelta('2 days')],
                        name=0.5, index=['A', 'B', 'C'])
        tm.assert_series_equal(res, exp)