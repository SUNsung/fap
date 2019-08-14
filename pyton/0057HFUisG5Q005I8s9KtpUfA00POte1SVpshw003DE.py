
        
        
class TwoArgException(Exception):
    def __init__(self, one, two):
        pass
    
    
class AuthorAdmin(admin.ModelAdmin):
    inlines = [
        BookInline, NonAutoPKBookTabularInline, NonAutoPKBookStackedInline,
        EditablePKBookTabularInline, EditablePKBookStackedInline,
        NonAutoPKBookChildTabularInline,
    ]
    
        def test_tabular_model_form_meta_readonly_field(self):
        '''
        Tabular inlines use ModelForm.Meta.help_texts and labels for read-only
        fields.
        '''
        response = self.client.get(reverse('admin:admin_inlines_someparentmodel_add'))
        self.assertContains(
            response,
            '<img src='/static/admin/img/icon-unknown.svg' '
            'class='help help-tooltip' width='10' height='10' '
            'alt='(Help text from ModelForm.Meta)' '
            'title='Help text from ModelForm.Meta'>'
        )
        self.assertContains(response, 'Label from ModelForm.Meta')
    
        def deconstruct(self):
        path, args, kwargs = super().deconstruct()
        if self.buffering is not None:
            kwargs['buffering'] = self.buffering
        if self.fillfactor is not None:
            kwargs['fillfactor'] = self.fillfactor
        return path, args, kwargs
    
            # Bad version output
        mocked_popen_wrapper.return_value = (
            'any other return value\n', '', 0)
        cmd = MakeMessagesCommand()
        with self.assertRaisesMessage(CommandError, 'Unable to get gettext version. Is it installed?'):
            cmd.gettext_version
    
    from django.contrib.gis.gdal.base import GDALBase
from django.contrib.gis.gdal.error import GDALException
from django.contrib.gis.gdal.prototypes import ds as vcapi, raster as rcapi
from django.utils.encoding import force_bytes, force_str
    
        def __len__(self):
        'Return the count of fields in this feature.'
        return self.num_fields
    
        @property
    def projected(self):
        '''
        Return True if this SpatialReference is a projected coordinate system
         (root node is PROJCS).
        '''
        return bool(capi.isprojected(self.ptr))
    
    In Blackboard pattern several specialised sub-systems (knowledge sources)
assemble their knowledge to build a possibly partial or approximate solution.
In this way, the sub-systems work together to solve the problem,
where the solution is the sum of its parts.
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(10, 20)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 30)
    
    Objects in a system communicate through a Mediator instead of directly with each other.
This reduces the dependencies between communicating objects, thereby reducing coupling.
    
    
class FmState(State):
    def __init__(self, radio):
        self.radio = radio
        self.stations = ['81.3', '89.1', '103.9']
        self.pos = 0
        self.name = 'FM'
    
    *Examples in Python ecosystem:
- Python's ast.NodeVisitor: https://github.com/python/cpython/blob/master/Lib/ast.py#L250
which is then being used e.g. in tools like `pyflakes`.
- `Black` formatter tool implements it's own: https://github.com/ambv/black/blob/master/black.py#L718
'''
    
    
class lazy_property(object):
    def __init__(self, function):
        self.function = function
        functools.update_wrapper(self, function)
    
    '''
*What is this pattern about?
This patterns aims to reduce the number of classes required by an
application. Instead of relying on subclasses it creates objects by
copying a prototypical instance at run-time.
    
        def meow(self):
        return 'meow!'
    
    ### OUTPUT ###
# before: hello, world!
# after: <i><b>hello, world!</b></i>

    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
    def resolve_filename(f):
    try:
        return f.name
    except AttributeError:
        return repr(f)

    
    STOP_WORDS = frozenset(('a', 'an', 'and', 'are', 'as', 'at', 'be', 'by', 'can',
                        'for', 'from', 'have', 'if', 'in', 'is', 'it', 'may',
                        'not', 'of', 'on', 'or', 'tbd', 'that', 'the', 'this',
                        'to', 'us', 'we', 'when', 'will', 'with', 'yet',
                        'you', 'your', '的', '了', '和'))
    
        def __init__(self, idf_path=None):
        self.tokenizer = jieba.dt
        self.postokenizer = jieba.posseg.dt
        self.stop_words = self.STOP_WORDS.copy()
        self.idf_loader = IDFLoader(idf_path or DEFAULT_IDF)
        self.idf_freq, self.median_idf = self.idf_loader.get_idf()
    
    Force_Split_Words = set([])
def load_model():
    start_p = pickle.load(get_module_res('finalseg', PROB_START_P))
    trans_p = pickle.load(get_module_res('finalseg', PROB_TRANS_P))
    emit_p = pickle.load(get_module_res('finalseg', PROB_EMIT_P))
    return start_p, trans_p, emit_p
    
        def load_word_tag(self, f):
        self.word_tag_tab = {}
        f_name = resolve_filename(f)
        for lineno, line in enumerate(f, 1):
            try:
                line = line.strip().decode('utf-8')
                if not line:
                    continue
                word, _, tag = line.split(' ')
                self.word_tag_tab[word] = tag
            except Exception:
                raise ValueError(
                    'invalid POS dictionary entry in %s at Line %s: %s' % (f_name, lineno, line))
        f.close()
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
    from __future__ import unicode_literals
import sys
sys.path.append('../')
    
    t2 = time.time()
tm_cost = t2-t1