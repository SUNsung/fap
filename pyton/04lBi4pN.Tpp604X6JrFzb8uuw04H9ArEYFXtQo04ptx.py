
        
        
class Call(object):
    
        def __init__(self, timestamp, seller, amount):
        self.timestamp = timestamp
        self.seller = seller
        self.amount = amount
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def __init__(self):
        self.lookup = {}  # key: person_id, value: person_server
    
        def get_mcp_version(self, location):
        '''
        Get the MCP version for the specified location.
        '''
    
        if module.params['size']:
        try:
            Capacity(module.params['size'])
        except Exception:
            module.fail_json(msg='size (Physical Capacity) should be defined in MB, GB, TB or PB units')
    
    EXAMPLES = '''
# Add a user to a password file and ensure permissions are set
- htpasswd:
    path: /etc/nginx/passwdfile
    name: janedoe
    password: '9s36?;fyNp'
    owner: root
    group: www-data
    mode: 0640
    
    
def merge_list_by_key(original_list, updated_list, key, ignore_when_null=None):
    '''
    Merge two lists by the key. It basically:
    
        # Send push notification
    try:
        if push_type == 'link':
            target.push_link(title, url, body)
        else:
            target.push_note(title, body)
        module.exit_json(changed=False, msg='OK')
    except PushError as e:
        module.fail_json(msg='An error occurred, Pushbullet's response: %s' % str(e))
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
            module.exit_json(changed=changed, **response)
    except Exception as e:
        module.fail_json(msg=str(e))
    
        mo_module = import_module(managed_object['module'])
    mo_class = getattr(mo_module, managed_object['class'])
    
        if action == 'create_release':
        release_exists = repository.release_from_tag(tag)
        if release_exists:
            module.exit_json(changed=False, msg='Release for tag %s already exists.' % tag)
    
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
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
    from ..common import *
from ..extractor import VideoExtractor
from .universal import *
    
        def test_default_encoder_naive_fails(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            ValueError, RFC3339Field.default_encoder, datetime.datetime.now())
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
    import josepy as jose
    
    # If true, the current module name will be prepended to all description
# unit titles (such as .. function::).
#add_module_names = True
    
        filesystem.chmod(path, 0o600)

    
        def more_info(self): # pylint: disable=missing-docstring,no-self-use
        return 'This plugin configures a DNS TXT record to respond to a dns-01 challenge using ' + \
               'the Google Cloud DNS API.'
    
    Examples
--------
    
            :param str domain_name: The domain name to query for an SOA record.
        :returns: True if found, False otherwise.
        :rtype: bool
        :raises certbot.errors.PluginError: if no response is received.
        '''
    
        def prepare(self):
        '''Memoized plugin preparation.'''
        assert self.initialized
        if self._prepared is None:
            try:
                self._initialized.prepare()
            except errors.MisconfigurationError as error:
                logger.debug('Misconfigured %r: %s', self, error, exc_info=True)
                self._prepared = error
            except errors.NoInstallationError as error:
                logger.debug(
                    'No installation (%r): %s', self, error, exc_info=True)
                self._prepared = error
            except errors.PluginError as error:
                logger.debug('Other error:(%r): %s', self, error, exc_info=True)
                self._prepared = error
            else:
                self._prepared = True
        return self._prepared