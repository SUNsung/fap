
        
                headers = dict(self._orig.headers)
        if 'Host' not in self._orig.headers:
            headers['Host'] = url.netloc.split('@')[-1]
    
    
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
    
filenames = list(rst_filenames())
assert filenames
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        DEFAULTS = {
        'default_options': []
    }
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    '''
__version__ = '1.0.0-dev'
__author__ = 'Jakub Roztocil'
__licence__ = 'BSD'
    
            # Raises
            TypeError: If `layer` is not a layer instance.
            ValueError: In case the `layer` argument does not
                know its input shape.
            ValueError: In case the `layer` argument has
                multiple output tensors, or is already connected
                somewhere else (forbidden in `Sequential` models).
        '''
        if not isinstance(layer, Layer):
            raise TypeError('The added layer must be '
                            'an instance of class Layer. '
                            'Found: ' + str(layer))
        if not self.outputs:
            # First layer in model: check that it is an input layer.
            if not isinstance(layer, (InputLayer, legacy_layers.Merge)):
                # Create an input layer.
                # First, we need to infer its expected input shape and dtype.
                if isinstance(layer, (Model, Sequential)):
                    # We were passed a model as first layer.
                    # This requires a specific way to figure out the
                    # input shape and dtype.
                    if not layer.layers:
                        raise ValueError('Cannot add an empty model '
                                         'to a `Sequential` model.')
                    # In case of nested models: recover the first layer
                    # of the deepest model to infer input shape and dtype.
                    first_layer = layer.layers[0]
                    while isinstance(first_layer, (Model, Sequential)):
                        first_layer = first_layer.layers[0]
                    batch_shape = first_layer.batch_input_shape
                    dtype = first_layer.dtype
                else:
                    # We were passed a regular layer, and it should
                    # know about its input shape. Otherwise, that's an error.
                    if not hasattr(layer, 'batch_input_shape'):
                        raise ValueError('The first layer in a '
                                         'Sequential model must '
                                         'get an `input_shape` or '
                                         '`batch_input_shape` argument.')
                    batch_shape = layer.batch_input_shape
                    dtype = layer.dtype
                # Instantiate the input layer.
                x = Input(batch_shape=batch_shape,
                          dtype=dtype,
                          name=layer.name + '_input')
                # This will build the current layer
                # and create the node connecting the current layer
                # to the input layer we just created.
                layer(x)
    
            # Returns
            Scalar loss (if the model has a single output and no metrics)
            or list of scalars (if the model has multiple outputs
            and/or metrics). The attribute `model.metrics_names` will give you
            the display labels for the scalar outputs.
        '''
    
    
def get_earliest_class_that_defined_member(member, cls):
    ancestors = get_classes_ancestors([cls])
    result = None
    for ancestor in ancestors:
        if member in dir(ancestor):
            result = ancestor
    if not result:
        return cls
    return result
    
    from keras.models import Sequential
from keras.engine.training import _weighted_masked_objective
from keras.layers import TimeDistributed, Masking, Dense
from keras.utils.test_utils import keras_test
from keras import losses
from keras import backend as K
    
        # Sampling loop for a batch of sequences
    # (to simplify, here we assume a batch of size 1).
    stop_condition = False
    decoded_sentence = ''
    while not stop_condition:
        output_tokens, h, c = decoder_model.predict(
            [target_seq] + states_value)
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def get_testable_domain_names(self):
        '''Returns the set of domain names that can be tested against'''
        if self._test_names:
            return self._test_names
        else:
            return {'example.com'}
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'certbot-compatibility-test',
     u'certbot-compatibility-test Documentation',
     author, 'certbot-compatibility-test',
     'One line description of project.', 'Miscellaneous'),
]
    
    
@zope.interface.implementer(interfaces.IAuthenticator)
@zope.interface.provider(interfaces.IPluginFactory)
class Authenticator(common.Plugin):
    '''Example Authenticator.'''
    
    
def write_with_harness(codefile, sourcefile, start_linenum, linebuffer):
    '''write output with additional lines to make code likely compilable'''
    # add commonly used headers, so that lines can likely compile.
    # This is work in progress, the main issue remains handling class
    # declarations in in-function code differently
    with io.open(codefile, 'w') as code_filehandle:
        code_filehandle.write('''\
#include<stdio.h>      // by md-split
#include<stdlib.h>     // by md-split
#include<tuple>        // by md-split
#include<utility>      // by md-split
#include<limits>       // by md-split
#include<functional>   // by md-split
#include<string>       // by md-split
#include<map>          // by md-split
#include<iostream>     // by md-split
#include<vector>       // by md-split
#include<algorithm>    // by md-split
#include<memory>       // by md-split
using namespace std;   // by md-split
// %s : %s
''' % (sourcefile, start_linenum))
        # TODO: if not toplevel code, wrap inside class
        for codeline in linebuffer:
            code_filehandle.write(codeline)
    
        #Writing the PDF to disk, preserving metadata of first tldr page
    group[2].copy(ap).write_pdf('tldr.pdf')
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
    
# from pylons < 1.0
def ErrorDocuments(app, global_conf, mapper, **kw):
    '''Wraps the app in error docs using Paste RecursiveMiddleware and
    ErrorDocumentsMiddleware
    '''
    if global_conf is None:
        global_conf = {}
    
    from r2.config.extensions import set_extension
from r2.controllers.reddit_base import RedditController, generate_modhash
from r2.controllers.login import handle_login, handle_register
from r2.lib.csrf import csrf_exempt
from r2.lib.validator import (
    json_validate,
    ValidEmail,
    VPasswordChange,
    VRatelimit,
    VSigned,
    VThrottledLogin,
    VUname,
)
    
    from r2.controllers.api_docs import api_doc, api_section
from r2.controllers.oauth2 import require_oauth2_scope
from r2.controllers.reddit_base import OAuth2OnlyController
from r2.lib.jsontemplates import (
    FriendTableItemJsonTemplate,
    get_usertrophies,
    IdentityJsonTemplate,
    KarmaListJsonTemplate,
    PrefsJsonTemplate,
)
from r2.lib.pages import FriendTableItem
from r2.lib.validator import (
    validate,
    VAccountByName,
    VFriendOfMine,
    VLength,
    VList,
    VUser,
    VValidatedJSON,
)
from r2.models import Account, Trophy
import r2.lib.errors as errors
import r2.lib.validator.preferences as vprefs