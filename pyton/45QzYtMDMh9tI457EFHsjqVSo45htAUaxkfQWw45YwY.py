
        
                When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def mapper(self, _, line):
        yield line, 1
    
        def _hash_function(self, key):
        return key % self.size
    
    
class Node(object):
    
    from sentry.utils.compat import implements_to_string
    
        # Flag to indicate if this migration is too risky
    # to run online and needs to be coordinated for offline
    is_dangerous = True
    
            # Changing field 'TagValue.project_id'
        db.alter_column(u'tagstore_tagvalue', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
    :copyright: (c) 2010-2014 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
        for i, filename in enumerate(files, 1):
        out = str(dest.joinpath(filename))
        link = urllib.request.urljoin(base, filename)
        urllib.request.urlretrieve(link, out)
        print('Downloaded {link} to {out} [{i}/{N}]'.format(
            link=link, out=out, i=i, N=N
        ))
    
    import pandas as pd
from pandas import DataFrame, Series, concat
from pandas.util import testing as tm
    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data
    
    
def test_read_array_header():
    unpacker = Unpacker()
    unpacker.feed(packb(['a', 'b', 'c']))
    assert unpacker.read_array_header() == 3
    assert unpacker.unpack() == b'a'
    assert unpacker.unpack() == b'b'
    assert unpacker.unpack() == b'c'
    try:
        unpacker.unpack()
        assert 0, 'should raise exception'
    except OutOfData:
        assert 1, 'okay'
    
        for idx in range(NUMBER_OF_STRINGS):
        data = gen_binary_data(idx)
        dumpf.write(packer.pack(data))
    
    
# copied from fix_tuple_params.py
def is_docstring(stmt):
    return isinstance(stmt, pytree.Node) and stmt.children[0].type == token.STRING
    
        Running a script with this wrapper is similar to calling
    `tornado.autoreload.wait` at the end of the script, but this wrapper
    can catch import-time problems like syntax errors that would otherwise
    prevent the script from reaching its call to `wait`.
    '''
    # Remember that we were launched with autoreload as main.
    # The main module can be tricky; set the variables both in our globals
    # (which may be __main__) and the real importable version.
    import tornado.autoreload
    
    
class AuthTest(AsyncHTTPTestCase):
    def get_app(self):
        return Application(
            [
                # test endpoints
                ('/openid/client/login', OpenIdClientLoginHandler, dict(test=self)),
                (
                    '/oauth10/client/login',
                    OAuth1ClientLoginHandler,
                    dict(test=self, version='1.0'),
                ),
                (
                    '/oauth10/client/request_params',
                    OAuth1ClientRequestParametersHandler,
                    dict(version='1.0'),
                ),
                (
                    '/oauth10a/client/login',
                    OAuth1ClientLoginHandler,
                    dict(test=self, version='1.0a'),
                ),
                (
                    '/oauth10a/client/login_coroutine',
                    OAuth1ClientLoginCoroutineHandler,
                    dict(test=self, version='1.0a'),
                ),
                (
                    '/oauth10a/client/request_params',
                    OAuth1ClientRequestParametersHandler,
                    dict(version='1.0a'),
                ),
                ('/oauth2/client/login', OAuth2ClientLoginHandler, dict(test=self)),
                ('/facebook/client/login', FacebookClientLoginHandler, dict(test=self)),
                ('/twitter/client/login', TwitterClientLoginHandler, dict(test=self)),
                (
                    '/twitter/client/authenticate',
                    TwitterClientAuthenticateHandler,
                    dict(test=self),
                ),
                (
                    '/twitter/client/login_gen_coroutine',
                    TwitterClientLoginGenCoroutineHandler,
                    dict(test=self),
                ),
                (
                    '/twitter/client/show_user',
                    TwitterClientShowUserHandler,
                    dict(test=self),
                ),
                # simulated servers
                ('/openid/server/authenticate', OpenIdServerAuthenticateHandler),
                ('/oauth1/server/request_token', OAuth1ServerRequestTokenHandler),
                ('/oauth1/server/access_token', OAuth1ServerAccessTokenHandler),
                ('/facebook/server/access_token', FacebookServerAccessTokenHandler),
                ('/facebook/server/me', FacebookServerMeHandler),
                ('/twitter/server/access_token', TwitterServerAccessTokenHandler),
                (r'/twitter/api/users/show/(.*)\.json', TwitterServerShowUserHandler),
                (
                    r'/twitter/api/account/verify_credentials\.json',
                    TwitterServerVerifyCredentialsHandler,
                ),
            ],
            http_client=self.http_client,
            twitter_consumer_key='test_twitter_consumer_key',
            twitter_consumer_secret='test_twitter_consumer_secret',
            facebook_api_key='test_facebook_api_key',
            facebook_secret='test_facebook_secret',
        )
    
            event = Event()
        test = self
        body = []