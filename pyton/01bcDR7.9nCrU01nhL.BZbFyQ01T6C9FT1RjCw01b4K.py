
        
            with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))
    
    
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
        def app_url_value_preprocessor(self, f):
        '''Same as :meth:`url_value_preprocessor` but application wide.
        '''
        self.record_once(lambda s: s.app.url_value_preprocessors
            .setdefault(None, []).append(f))
        return f
    
           It is strongly recommended to activate either ``X-Sendfile`` support in
       your webserver or (if no authentication happens) to tell the webserver
       to serve files for the given path on its own without calling into the
       web application for improved performance.
    
    
def tojson_filter(obj, **kwargs):
    return Markup(htmlsafe_dumps(obj, **kwargs))

    
    from time import time
import numpy as np
import matplotlib.pyplot as plt
from sklearn.neighbors import LocalOutlierFactor
from sklearn.metrics import roc_curve, auc
from sklearn.datasets import fetch_kddcup99, fetch_covtype, fetch_mldata
from sklearn.preprocessing import LabelBinarizer
    
        ###########################################################################
    # Set custom tracking based method
    sampling_algorithm['custom-tracking-selection'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='tracking_selection',
                                       random_state=random_state)
    
        plt.show()

    
        # decode the payload explicitly as UTF-8 since lxml is confused for some
    # reason
    with codecs.open(html_filename,'r','utf-8') as html_file:
        html_content = html_file.read()
    tree = ElementTree(lxml.html.document_fromstring(html_content))
    i = 0
    j = 0
    for p in tree.findall('//p'):
        content = p.text_content()
        if len(content) < 100:
            # skip paragraphs that are too short - probably too noisy and not
            # representative of the actual language
            continue
    
        def report_not_exist(self, appid, ip):
        self.logger.debug('report_not_exist:%s %s', appid, ip)
        th = threading.Thread(target=self.process_appid_not_exist, args=(appid, ip))
        th.start()
    
            xlog.info('Add new cert to Firefox in %s', firefox_config_path)
        cmd_line = 'certutil -d %s -A -t 'C,,' -n '%s' -i '%s'' % (firefox_config_path, common_name, ca_file)
        os.system(cmd_line) # install new cert
        return True
    
    import sys
import os
import threading
    
    
def run_cmds(cmds):
    log = Log()
    cmd_pl = cmds.split('\n')
    outs = []
    for cmd in cmd_pl:
        if not cmd:
            continue
    
            raise NotImplementedError
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        '''catalog of multiple methods that are executed depending on an init
    
    
@coroutine
def coroutine1(target):
    while True:
        request = yield
        if 0 < request <= 10:
            print('request {} handled in coroutine 1'.format(request))
        else:
            target.send(request)
    
    
class Action(object):
    def __init__(self, name):
        self.name = name
    
    from __future__ import print_function
import os
from os.path import lexists
    
    ### OUTPUT ###
# Counting to two...
# one two
# Counting to five...
# one two three four five

    
        def prepare(self):
        print('Reporter Class is preparing to report the results')
        time.sleep(0.1)
    
        def notify(self, msg):
        self.msg_queue.append(msg)
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight
