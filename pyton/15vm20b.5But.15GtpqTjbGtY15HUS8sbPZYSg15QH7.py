
        
        
@pytest.fixture
def auth(client):
    return AuthActions(client)

    
    
def test_get_close_db(app):
    with app.app_context():
        db = get_db()
        assert db is get_db()
    
    
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
    
def htmlsafe_dump(obj, fp, **kwargs):
    '''Like :func:`htmlsafe_dumps` but writes into a file object.'''
    fp.write(text_type(htmlsafe_dumps(obj, **kwargs)))
    
        def to_json(self, value):
        return b64encode(value).decode('ascii')
    
    from click.testing import CliRunner
from flask.cli import ScriptInfo
from werkzeug.test import Client, EnvironBuilder
from flask import _request_ctx_stack
from flask.json import dumps as json_dumps
from werkzeug.urls import url_parse
    
        if release_date.date() != date.today():
        fail(
            'Release date is not today (%s != %s)',
            release_date.date(), date.today()
        )
    
        @app.teardown_appcontext
    def teardown_app(error=None):
        called.append('app')
    
    
def serialize(regularizer):
    return serialize_keras_object(regularizer)
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loss = MSE_MAE_loss(0.3)
        inputs = keras.layers.Input((2,))
        outputs = keras.layers.Dense(1, name='model_output')(inputs)
        model = keras.models.Model(inputs, outputs)
        model.compile(optimizer='sgd', loss={'model_output': loss})
        model.fit(np.random.rand(256, 2), np.random.rand(256, 1))
        model.save(model_filename)
    
            kwargs = {}
        if has_arg(self.cell.call, 'training'):
            kwargs['training'] = training
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
y_train = np.array(y_train)
y_test = np.array(y_test)
    
        def __iter__(self):
        return (casedkey for casedkey, mappedvalue in self._store.values())
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    '''
Requests HTTP Library
~~~~~~~~~~~~~~~~~~~~~
    
            return 'Digest %s' % (base)
    
        def list_domains(self):
        '''Utility method to list all the domains in the jar.'''
        domains = []
        for cookie in iter(self):
            if cookie.domain not in domains:
                domains.append(cookie.domain)
        return domains
    
    # TODO: response is the only one
    
            # Verify we receive an Authorization header in response, then
        # challenge again.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_401)
    
            The encoding of the response content is determined based solely on HTTP
        headers, following RFC 2616 to the letter. If you can take advantage of
        non-HTTP knowledge to make a better guess at the encoding, you should
        set ``r.encoding`` appropriately before accessing this property.
        '''
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        name=dict(type='str'),
    ))
    
        json_output['changed'] = False
    json_output.update(mod_params)
    module.exit_json(**json_output)
    
    
VALID_RULE_KEYS = ['rule_type', 'original_ip', 'original_port',
                   'translated_ip', 'translated_port', 'protocol']
    
        if state in ['present', 'enabled']:
        ipaenabledflag = 'TRUE'
    else:
        ipaenabledflag = 'FALSE'
    
        if module.params['repo']:
        params['deploy[repository]'] = module.params['repo']
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        if running and state == 'unmonitored':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('unmonitor')
        if status in ['not monitored'] or 'unmonitor pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not unmonitored' % name, status=status)
    
        def __init__(self):
        ca_certs = os.path.join(current_path, 'cacert.pem')
        openssl_context = SSLContext(
            logger, ca_certs=ca_certs,
            cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                           '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
        )
        host_manager = HostManagerBase()
        connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                         debug=True)
        self.check_ip = CheckIp(logger, config, connect_creator)
    
                if fail or self.network_stat != 'OK':
                # Fail or unknown
                if time_now - self.last_check_time < 3:
                    return
            else:
                if time_now - self.last_check_time < 10:
                    return
    
    from xlog import getLogger
xlog = getLogger('gae_proxy')
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
    
class BacktrackingFailed(Exception):
    '''@brief Raised to signal failed backtrack attempt'''
    
    
    def matchRange(self, a, b):
        if self.input.LA(1) < a or self.input.LA(1) > b:
            if self._state.backtracking > 0:
                raise BacktrackingFailed
    
        # Get (branch, commit) if running from a git repo.
    head = git.get_head(kwargs['repo_path'])
    
        def prepare(self, **kwargs):
    
    from ..common import *
from ..extractor import VideoExtractor
import xml.etree.ElementTree as ET
    
    import json
import re
    
    
def get_file_path(merge, output_dir, title, url):
    mime, ext, size = url_info(url)
    file_name = get_output_filename([], title, ext, output_dir, merge)
    file_path = os.path.join(output_dir, file_name)
    return file_name, file_path
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
    from ..common import *
    
                print_info(site_info, title_i, ext, size)
            if not info_only:
                download_urls([real_url], title_i, ext, size, output_dir, merge = merge)