
        
        import click
from flask import current_app, g
from flask.cli import with_appcontext
    
        auth.login()
    response = client.get('/')
    assert b'test title' in response.data
    assert b'by test on 2018-01-01' in response.data
    assert b'test\nbody' in response.data
    assert b'href='/1/update'' in response.data
    
    import pytest
from flaskr.db import get_db
    
            :param name: the optional name of the filter, otherwise the
                     function name will be used.
        '''
        def decorator(f):
            self.add_app_template_filter(f, name=name)
            return f
        return decorator
    
        seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
    
def make_response(*args):
    '''Sometimes it is necessary to set additional headers in a view.  Because
    views do not have to return response objects but can return a value that
    is converted into a response object by Flask itself, it becomes tricky to
    add headers to it.  This function can be called instead of using a return
    and you will get a response object which you can use to attach headers.
    
        # Arguments
        tensor: The tensor to start from.
        layer: Origin layer of the tensor. Will be
            determined via tensor._keras_history if not provided.
        node_index: Origin node index of the tensor.
    
        model = create_multi_input_model_from(dense_layer, dense_layer)
    model.compile(loss='categorical_crossentropy', optimizer='sgd')
    assert len(model.losses) == 6
    
        ```python
    # Consider an array of 5 labels out of a set of 3 classes {0, 1, 2}:
    > labels
    array([0, 2, 1, 2, 0])
    # `to_categorical` converts this into a matrix with as many
    # columns as there are classes. The number of rows
    # stays the same.
    > to_categorical(labels)
    array([[ 1.,  0.,  0.],
           [ 0.,  0.,  1.],
           [ 0.,  1.,  0.],
           [ 0.,  0.,  1.],
           [ 1.,  0.,  0.]], dtype=float32)
    ```
    '''
    
        Example 1 - Training models with weights merge on CPU
    
    Settings: horizontal_flip = True
----------------------------------------------------------------------------
Epoch     | ImageGenerator | ImageGenerator | AugmentLayer  | Augment Layer
Number    | %Accuracy      | Performance    | %Accuracy     | Performance
----------------------------------------------------------------------------
1         | 44.84          | 15ms/step      | 45.54         | 358us/step
2         | 52.34          |  8ms/step      | 50.55         | 285us/step
8         | 65.45          |  8ms/step      | 65.59         | 281us/step
25        | 76.74          |  8ms/step      | 76.17         | 280us/step
100       | 78.81          |  8ms/step      | 78.70         | 285us/step
---------------------------------------------------------------------------
    
        def start_requests(self):
        url = self.benchurl
        if self.latency is not None:
            url += '?latency={0}'.format(self.latency)
    
    def _run_print_help(parser, func, *a, **kw):
    try:
        func(*a, **kw)
    except UsageError as e:
        if str(e):
            parser.error(str(e))
        if e.print_help:
            parser.print_help()
        sys.exit(2)
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False}
    
                # determine real callback
            cb = response.meta['_callback']
            if not cb:
                if opts.callback:
                    cb = opts.callback
                elif opts.rules and self.first_response == response:
                    cb = self.get_callback_from_rules(spider, response)
    
        protocol = ScrapyHTTPPageGetter
    waiting = 1
    noisy = False
    followRedirect = False
    afterFoundGet = False
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        def state_changed_listener(event):
        '''Listen for new messages on the bus and sends them to Datadog.'''
        state = event.data.get('new_state')
    
    For more details about this platform, please refer to the documentation
https://home-assistant.io/components/demo/
'''
import random
    
        def get_extra_attributes(self, device):
        '''Return the IP of the given device.'''
        filter_ip = next((
            result.ip for result in self.last_results
            if result.mac == device), None)
        return {'ip': filter_ip}
    
    DEFAULT_IP = '192.168.1.1'
    
            self.mac2name = None
        self.success_init = self.token is not None
    
    
def create_event_handler(patterns, hass):
    '''Return the Watchdog EventHandler object.'''
    from watchdog.events import PatternMatchingEventHandler
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import CONF_ENTITIES, CONF_NAME, ATTR_ENTITY_ID
from homeassistant.helpers.entity import Entity
from homeassistant.helpers.entity_component import EntityComponent
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/join/
'''
import logging