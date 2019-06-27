
        
                next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
    print(longestSub([4,8,7,5,1,12,2,3,9]))
print(longestSub([9,8,7,6,5,7]))
    
    The problem is  :
Given an array, to find the longest and continuous sub array and get the max sum of the sub array in the given array.
'''
from __future__ import print_function
    
        def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
    
# -- Options for manual page output ---------------------------------------
    
            if 'latency' in request.args:
            latency = float(request.args['latency'][0])
            reactor.callLater(latency, self._finish, request)
            return NOT_DONE_YET
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
        def short_desc(self):
        return 'Run a self-contained spider (without creating a project)'
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
        # taken from twisted/twisted/internet/_sslverify.py
    
        def connectionLost(self, reason):
        self._connection_lost_reason = reason
        HTTPClient.connectionLost(self, reason)
        self.factory.noPage(reason)
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
                viableTokensFollowingThisRule = self.computeContextSensitiveRuleFOLLOW()
            follow = follow | viableTokensFollowingThisRule
    
    
class FunctionDocstringTest(FuncAttrsTest):
    def test_set_docstring_attr(self):
        self.assertEqual(self.b.__doc__, None)
        docstr = 'A test method that does nothing'
        self.b.__doc__ = docstr
        self.F.a.__doc__ = docstr
        self.assertEqual(self.b.__doc__, docstr)
        self.assertEqual(self.fi.a.__doc__, docstr)
        self.cannot_set_attr(self.fi.a, '__doc__', docstr, AttributeError)
    
    prefix_map = {
    # backend path prefix: path to the `models` parent model used
    'sentry.tagstore.legacy': 'sentry.tagstore.legacy',
    'sentry.tagstore.v2': 'sentry.tagstore.v2',
    'sentry.tagstore.snuba': 'sentry.tagstore.v2',
}
    
        models = {
    }
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True))
    
        __repr__ = sane_repr('event_id', 'key_id', 'value_id')