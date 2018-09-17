
        
        
def CheckCall( args, **kwargs ):
  try:
    subprocess.check_call( args, **kwargs )
  except subprocess.CalledProcessError as error:
    sys.exit( error.returncode )
    
      AddToGroupMap( 'Function', identifier_group )
    
    import contextlib
import functools
import os
import requests
import time
import warnings
    
      results = request.RawResponse()[ 'completions' ]
    
    
def EndsWithPython_BadPaths_test():
  not_python_paths = [
    None,
    '',
    '/opt/local/bin/vim',
    r'C:\Program Files\Vim\vim74\gvim.exe',
    '/usr/bin/python2.5',
    '/home/user/.pyenv/shims/python3.2',
  ]
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
        requests *= 10000
    client1_delegate = timeit(client1.delegate)
    client2_delegate = timeit(client2.delegate)
    with suppress_stdout():
        client1_delegate(requests)
        client2_delegate(requests)
    # lets check which is faster
    print(client1_delegate._time, client2_delegate._time)
    
    print('Counting to two...')
for number in count_to_two():
    print(number, end=' ')
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
    
# Makes templates
def make_template(skeleton, getter, action):
    '''Instantiate a template method with getter and action'''
    def template():
        skeleton(getter, action)
    return template
    
    
class Dog(object):
    
        def __get__(self, obj, type_):
        if obj is None:
            return self
        val = self.function(obj)
        obj.__dict__[self.function.__name__] = val
        return val
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
        def __getattr__(self, name):
        def wrapper(*args, **kwargs):
            if hasattr(self.delegate, name):
                attr = getattr(self.delegate, name)
                if callable(attr):
                    return attr(*args, **kwargs)
        return wrapper
    
        for obj in objects:
        print('A {0} goes {1}'.format(obj.name, obj.make_noise()))
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        def __init__(self, test_mode):
        '''Initialize suite view.'''
        self._test_mode = test_mode
    
        see(
        dev_id='demo_home_boy',
        host_name='Home Boy',
        gps=[hass.config.latitude - 0.00002, hass.config.longitude + 0.00002],
        gps_accuracy=20,
        battery=53
    )