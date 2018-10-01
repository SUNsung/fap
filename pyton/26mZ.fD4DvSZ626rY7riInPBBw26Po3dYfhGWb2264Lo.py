
        
        
@pytest.fixture(autouse=True)
def shell(mocker):
    shell = mocker.patch('thefuck.entrypoints.not_configured.shell',
                         new_callable=MagicMock)
    shell.get_history.return_value = []
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=True)
    return shell
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
def test_match():
    assert match(Command('apt list --upgradable', match_output))
    assert match(Command('sudo apt list --upgradable', match_output))
    
    dynamodb                                 | dynamodbstreams
ec2                                      | ecr
'''
    
            Did you mean `build`?
'''
    
    We build a custom activation layer called 'Antirectifier',
which modifies the shape of the tensor that passes through it.
We need to specify two methods: `compute_output_shape` and `call`.
    
        model._check_trainable_weights_consistency()
    if hasattr(model, '_collected_trainable_weights'):
        trainable_count = count_params(model._collected_trainable_weights)
    else:
        trainable_count = count_params(model.trainable_weights)
    
        out1 = utils.preprocess_input(x, 'channels_last')
    out1int = utils.preprocess_input(xint, 'channels_last')
    out2 = utils.preprocess_input(np.transpose(x, (2, 0, 1)),
                                  'channels_first')
    out2int = utils.preprocess_input(np.transpose(xint, (2, 0, 1)),
                                     'channels_first')
    assert_allclose(out1, out2.transpose(1, 2, 0))
    assert_allclose(out1int, out2int.transpose(1, 2, 0))
    
    from keras.models import Sequential, Model
from keras.layers import Dense, Input, Average
from keras.utils import np_utils
from keras.utils import test_utils
from keras import regularizers
from keras import backend as K
    
        plt.imshow(toplot)
    ax = fig.add_subplot(122)
    plt.text(1, 3, 'Ground truth', fontsize=20)
    
            # Sample a token
        sampled_token_index = np.argmax(output_tokens[0, -1, :])
        sampled_char = reverse_target_char_index[sampled_token_index]
        decoded_sentence += sampled_char
    
    The models are trained on an input/output pair, where
the input is a generated uniformly distributed
random sequence of length = 'input_len',
and the output is a moving average of the input with window length = 'tsteps'.
Both 'input_len' and 'tsteps' are defined in the 'editable parameters' section.
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
            for spidername in args or spider_loader.list():
            spidercls = spider_loader.load(spidername)
            spidercls.start_requests = lambda s: conman.from_spider(s, result)
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
        # Remove trailing '\r'.
    # The -1 accounts for the extra trailing blank line we get from split()
    for linenum in range(len(lines) - 1):
      if lines[linenum].endswith('\r'):
        lines[linenum] = lines[linenum].rstrip('\r')
        crlf_lines.append(linenum + 1)
      else:
        lf_lines.append(linenum + 1)
    
    *References:
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
https://fkromer.github.io/python-pattern-references/design/#factory-method
https://sourcemaking.com/design_patterns/factory_method
    
    
class CompositeGraphic(Graphic):
    def __init__(self):
        self.graphics = []
    
        def __init__(self):
        self.__dict__ = self.__shared_state
        self.state = 'Init'
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
    
### OUTPUT ###
# <NumObj: -1>
# <NumObj: 0>
# <NumObj: 1>
# <NumObj: 2>
# -- committed
# <NumObj: 3>
# <NumObj: 4>
# <NumObj: 5>
# -- rolled back
# <NumObj: 2>
# -- now doing stuff ...
# -> doing stuff failed!
# Traceback (most recent call last):
# File 'memento.py', line 97, in <module>
#     num_obj.do_stuff()
#   File 'memento.py', line 52, in transaction
#     raise e
#   File 'memento.py', line 49, in transaction
#     return self.method(obj, *args, **kwargs)
#   File 'memento.py', line 70, in do_stuff
#     self.increment()     # <- will fail and rollback
#   File 'memento.py', line 65, in increment
#     self.value += 1
# TypeError: Can't convert 'int' object to str implicitly
# <NumObj: 2>

    
    *TL;DR80
Delays the eval of an expr until its value is needed and avoids repeated evals.
'''
    
    *What does this example do?
When the number of prototypes in an application can vary, it can be
useful to keep a Dispatcher (aka, Registry or Manager). This allows
clients to query the Dispatcher for a prototype before cloning a new
instance.
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''