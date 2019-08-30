
        
            def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def syntax(self):
        return '<spider>'
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
        # Stripping scripts and comments is slow (about 20x slower than
    # just checking if a string is in text); this is a quick fail-fast
    # path that should work for most pages.
    if 'fragment' not in text:
        return False
    if 'content' not in text:
        return False
    
        def process_request(self, request, spider):
        if self._timeout:
            request.meta.setdefault('download_timeout', self._timeout)

    
        def report_not_exist(self, appid, ip):
        self.logger.debug('report_not_exist:%s %s', appid, ip)
        th = threading.Thread(target=self.process_appid_not_exist, args=(appid, ip))
        th.start()
    
    
    def insertBefore(self, *args):
        if len(args) == 2:
            programName = self.DEFAULT_PROGRAM_NAME
            index = args[0]
            text = args[1]
            
        elif len(args) == 3:
            programName = args[0]
            index = args[1]
            text = args[2]
    
        API_ENDPOINT = 'http://p.bokecc.com/'
    
        if '_text' in dictified['flashvars'][0]:
        video_dict['flashvars'] = dictified['flashvars'][0]['_text'].strip()
    
    
@contextlib.contextmanager
def capture_ops():
    '''Decorator to capture ops created in the block.
    with capture_ops() as ops:
        # create some ops
    print(ops) # => prints ops created.
    '''
    
    
class facehull(Mask):  # pylint: disable=invalid-name
    ''' Basic face hull mask '''
    def build_mask(self):
        mask = np.zeros(self.face.shape[0:2] + (1, ), dtype=np.float32)
        hull = cv2.convexHull(  # pylint: disable=no-member
            np.array(self.landmarks).reshape((-1, 2)))
        cv2.fillConvexPoly(mask, hull, 255.0, lineType=cv2.LINE_AA)  # pylint: disable=no-member
        return mask

    
        def load_module(self, filename, module_path, plugin_type):
        ''' Load the defaults module and add defaults '''
        logger.debug('Adding defaults: (filename: %s, module_path: %s, plugin_type: %s',
                     filename, module_path, plugin_type)
        module = os.path.splitext(filename)[0]
        section = '.'.join((plugin_type, module.replace('_defaults', '')))
        logger.debug('Importing defaults module: %s.%s', module_path, module)
        mod = import_module('{}.{}'.format(module_path, module))
        self.add_section(title=section, info=mod._HELPTEXT)  # pylint:disable=protected-access
        for key, val in mod._DEFAULTS.items():  # pylint:disable=protected-access
            self.add_item(section=section, title=key, **val)
        logger.debug('Added defaults: %s', section)

    
            For actions that occur identically for each frame (e.g. blend_box), constants can
        be placed into self.func_constants to be compiled at launch, then referenced for
        each face. '''
    def __init__(self, mask_type, output_size, predicted_available=False, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.mask = self.get_mask() if not self.skip else None
    
    import cv2
from ._base import Output, logger
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
    import cv2
import numpy as np
from ._base import Adjustment
    
        def forwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
            # Changing field 'GroupTagValue.group_id'
        db.alter_column(u'tagstore_grouptagvalue', 'group_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
    
class Migration(SchemaMigration):
    
        def add(self, ident, func, args=None, kwargs=None):
        if args is None:
            args = ()
        if kwargs is None:
            kwargs = {}
        task = (ident, func, args, kwargs)
        self.tasks.append(ident)
        self.queue.put_nowait(task)
    
    from django.conf import settings
from social_auth.utils import custom_user_frozen_models