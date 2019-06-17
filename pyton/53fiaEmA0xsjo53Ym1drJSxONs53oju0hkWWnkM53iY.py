
        
        with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    import unittest
    
            jsi = JSInterpreter('function f(){return (1 + 2) * 3;}')
        self.assertEqual(jsi.call_function('f'), 9)
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
    try:
    import botocore
except ImportError:
    pass  # handled by AnsibleAWSModule
    
    # Snapshot of volume mounted on device_name attached to instance_id
- ec2_snapshot:
    instance_id: i-12345678
    device_name: /dev/sdb1
    description: snapshot of /data from DB123 taken 2013/11/28 12:18:32
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            state=dict(required=True, type='str', choices=['present', 'absent', 'copy']),
            replication_id=dict(type='str'),
            cluster_id=dict(type='str'),
            target=dict(type='str'),
            bucket=dict(type='str'),
        )
    )
    
        module.exit_json(changed=changed, monitoring_policy=monitoring_policy)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.vca import VcaError, vca_argument_spec, vca_login
    
            removed_count += 1
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
        def get_callback_from_rules(self, spider, response):
        if getattr(spider, 'rules', None):
            for rule in spider.rules:
                if rule.link_extractor.matches(response.url):
                    return rule.callback or 'parse'
        else:
            logger.error('No CrawlSpider rules found in spider %(spider)r, '
                         'please specify a callback to use for parsing',
                         {'spider': spider.name})
    
            try:
            self.min_bound = int(self.args[1])
        except IndexError:
            self.min_bound = 1
    
    if twisted_version >= (14, 0, 0):
    # ClientTLSOptions requires a recent-enough version of Twisted.
    # Not having ScrapyClientTLSOptions should not matter for older
    # Twisted versions because it is not used in the fallback
    # ScrapyClientContextFactory.
    
        def close(self):
        self.closing = defer.Deferred()
        self._maybe_fire_closing()
        return self.closing
    
        def _is_tar(self, response):
        archive = BytesIO(response.body)
        try:
            tar_file = tarfile.open(name=mktemp(), fileobj=archive)
        except tarfile.ReadError:
            return
    
    
    def download_by_id(self, vid = '', title = None, output_dir='.', merge=True, info_only=False,**kwargs):
        '''self, str->None
        
        Keyword arguments:
        self: self
        vid: The video ID for BokeCC cloud, something like
        FE3BB999594978049C33DC5901307461
        
        Calls the prepare() to download the video.
        
        If no title is provided, this method shall try to find a proper title
        with the information providin within the
        returned content of the API.'''
    
    __all__ = ['dailymotion_download']
    
            ep_url = self.__class__.video_ep if 'single_video' in kwargs else self.__class__.media_ep
    
        title = r1(r'<meta property='og:title' content='(.*?)'>', html)
    
      # Ignore 'virtual' keywords that are near access-specifiers.  These
  # are only used in class base-specifier and do not apply to member
  # functions.
  if (Search(r'\b(public|protected|private)\s+$', virtual.group(1)) or
      Match(r'^\s+(public|protected|private)\b', virtual.group(3))):
    return