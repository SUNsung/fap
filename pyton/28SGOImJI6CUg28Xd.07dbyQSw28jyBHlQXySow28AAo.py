
        
            def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
    SC_MANAGER_ALL_ACCESS = 0xf003f
SC_MANAGER_CREATE_SERVICE = 0x02
SERVICE_WIN32_OWN_PROCESS = 0x10
SERVICE_AUTO_START = 0x2
SERVICE_ERROR_NORMAL = 0x1
DELETE = 0x00010000
SERVICE_STATUS_START_PENDING = 0x00000002
SERVICE_STATUS_RUNNING = 0x00000004
SERVICE_ACCEPT_STOP = 0x1
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
    with io.open(README_FILE, 'w', encoding='utf-8') as f:
    f.write(header)
    f.write(options)
    f.write(footer)

    
        template = template.replace('{{fileopts}}', '|'.join(fileopts))
    template = template.replace('{{diropts}}', '|'.join(diropts))
    template = template.replace('{{flags}}', ' '.join(flags))
    
    from youtube_dl.aes import aes_decrypt, aes_encrypt, aes_cbc_decrypt, aes_cbc_encrypt, aes_decrypt_text
from youtube_dl.utils import bytes_to_intlist, intlist_to_bytes
import base64
    
    import click
from flask import current_app, g
from flask.cli import with_appcontext
    
        # test that successful login redirects to the index page
    response = auth.login()
    assert response.headers['Location'] == 'http://localhost/'
    
    import pytest
from flaskr.db import get_db
    
            export YOURAPPLICATION_SETTINGS='/path/to/config/file'
    
        class TagOrderedDict(JSONTag):
        __slots__ = ('serializer',)
        key = ' od'
    
    
@LocalProxy
def wsgi_errors_stream():
    '''Find the most appropriate error stream for the application. If a request
    is active, log to ``wsgi.errors``, otherwise use ``sys.stderr``.
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''