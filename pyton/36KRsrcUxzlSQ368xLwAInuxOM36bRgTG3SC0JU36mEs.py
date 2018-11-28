
        
        
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
    from django.conf import settings
from django.contrib.sessions.backends.db import SessionStore as DBStore
from django.core.cache import caches
    
        def exists(self, session_key):
        return self.model.objects.filter(session_key=session_key).exists()
    
        def load(self):
        '''
        Load the data from the key itself instead of fetching from some
        external data store. Opposite of _get_session_key(), raise BadSignature
        if signature fails.
        '''
        try:
            return signing.loads(
                self.session_key,
                serializer=self.serializer,
                # This doesn't handle non-default expiry dates, see #19201
                max_age=settings.SESSION_COOKIE_AGE,
                salt='django.contrib.sessions.backends.signed_cookies',
            )
        except Exception:
            # BadSignature, ValueError, or unpickling exceptions. If any of
            # these happen, reset the session.
            self.create()
        return {}
    
            volume_id = volumes[0].id
    
        vpc_id = module.params.get('vpc_id')
    state = module.params.get('state')
    
    
def get_elasticache_clusters(client, module, region):
    try:
        clusters = describe_cache_clusters_with_backoff(client, cluster_id=module.params.get('name'))
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Couldn't obtain cache cluster info')
    
        function_name = module.params.get('function_name')
    if function_name:
        try:
            # get_policy returns a JSON string so must convert to dict before reassigning to its key
            lambda_facts.update(policy=json.loads(client.get_policy(FunctionName=function_name)['Policy']))
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(policy={})
            else:
                module.fail_json_aws(e, msg='Trying to get {0} policy'.format(function_name))
    else:
        module.fail_json(msg='Parameter function_name required for query=policy.')
    
    DOCUMENTATION = '''
---
module: rds_snapshot_facts
version_added: '2.6'
short_description: obtain facts about one or more RDS snapshots
description:
  - obtain facts about one or more RDS snapshots. These can be for unclustered snapshots or snapshots of clustered DBs (Aurora)
  - Aurora snapshot facts may be obtained if no identifier parameters are passed or if one of the cluster parameters are passed.
options:
  db_snapshot_identifier:
    description:
      - Name of an RDS (unclustered) snapshot. Mutually exclusive with I(db_instance_identifier), I(db_cluster_identifier), I(db_cluster_snapshot_identifier)
    required: false
    aliases:
      - snapshot_name
  db_instance_identifier:
    description:
      - RDS instance name for which to find snapshots. Mutually exclusive with I(db_snapshot_identifier), I(db_cluster_identifier),
        I(db_cluster_snapshot_identifier)
    required: false
  db_cluster_identifier:
    description:
      - RDS cluster name for which to find snapshots. Mutually exclusive with I(db_snapshot_identifier), I(db_instance_identifier),
        I(db_cluster_snapshot_identifier)
    required: false
  db_cluster_snapshot_identifier:
    description:
      - Name of an RDS cluster snapshot. Mutually exclusive with I(db_instance_identifier), I(db_snapshot_identifier), I(db_cluster_identifier)
    required: false
  snapshot_type:
    description:
      - Type of snapshot to find. By default both automated and manual
        snapshots will be returned.
    required: false
    choices: ['automated', 'manual', 'shared', 'public']
requirements:
    - 'python >= 2.6'
    - 'boto3'
author:
    - 'Will Thames (@willthames)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        client = module.client('route53')
    
        try:
        client_connection.get_bucket_website(Bucket=bucket_name)
    except ClientError as e:
        if e.response['Error']['Code'] == 'NoSuchWebsiteConfiguration':
            module.exit_json(changed=changed)
        else:
            module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
        def get_item(self):
        '''Get a single Azure Kubernetes Service'''
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
    
class SniManager(object):
    plus = ['-', '', '.']
    end = ['com', 'net', 'ml', 'org', 'us']
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
        def __str__(self):
        return 'MismatchedRangeException(%r not in [%r..%r])' % (
            self.getUnexpectedType(), self.a, self.b
            )
    __repr__ = __str__
    
    
        
    def __init__(self, data):
        '''
        @param data This should be a unicode string holding the data you want
           to parse. If you pass in a byte string, the Lexer will choke on
           non-ascii data.
           
        '''
        
        CharStream.__init__(self)
        
  	# The data being scanned
        self.strdata = unicode(data)
        self.data = [ord(c) for c in self.strdata]
        
	# How many characters are actually in the buffer
        self.n = len(data)
    
    
    def __str__(self):
        if self.type == EOF:
            return '<EOF>'
    
    __all__ = ['normcase','isabs','join','splitdrive','split','splitext',
           'basename','dirname','commonprefix','getsize','getmtime',
           'getatime','getctime','islink','exists','lexists','isdir','isfile',
           'ismount', 'expanduser','expandvars','normpath','abspath',
           'samefile','sameopenfile','samestat',
           'curdir','pardir','sep','pathsep','defpath','altsep','extsep',
           'devnull','realpath','supports_unicode_filenames','relpath',
           'commonpath']
    
        def test_normcase(self):
        normcase = self.pathmodule.normcase
        # check that normcase() is idempotent
        for p in ['FoO/./BaR', b'FoO/./BaR']:
            p = normcase(p)
            self.assertEqual(p, normcase(p))
    
            self.assertIs(posixpath.isabs(b''), False)
        self.assertIs(posixpath.isabs(b'/'), True)
        self.assertIs(posixpath.isabs(b'/foo'), True)
        self.assertIs(posixpath.isabs(b'/foo/bar'), True)
        self.assertIs(posixpath.isabs(b'foo/bar'), False)
    
    
class BZ2CompressorTest(BaseTest):
    def testCompress(self):
        bz2c = BZ2Compressor()
        self.assertRaises(TypeError, bz2c.compress)
        data = bz2c.compress(self.TEXT)
        data += bz2c.flush()
        self.assertEqual(ext_decompress(data), self.TEXT)
    
    # Add the html version.  This converts the message into a multipart/alternative
# container, with the original text message as the first part and the new html
# message as the second part.
asparagus_cid = make_msgid()
msg.add_alternative('''\
<html>
  <head></head>
  <body>
    <p>Salut!</p>
    <p>Cela ressemble à un excellent
        <a href='http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718'>
            recipie
        </a> déjeuner.
    </p>
    <img src='cid:{asparagus_cid}' />
  </body>
</html>
'''.format(asparagus_cid=asparagus_cid[1:-1]), subtype='html')
# note that we needed to peel the <> off the msgid for use in the html.
    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))