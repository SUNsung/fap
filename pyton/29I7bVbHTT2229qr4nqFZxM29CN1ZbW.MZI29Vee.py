
        
        
def ensure_rule_present(client, module):
    name = module.params['name']
    rule_id = get_rule_by_name(client, module, name)
    params = dict()
    if rule_id:
        return find_and_update_rule(client, module, rule_id)
    else:
        params['Name'] = module.params['name']
        metric_name = module.params['metric_name']
        if not metric_name:
            metric_name = re.sub(r'[^a-zA-Z0-9]', '', module.params['name'])
        params['MetricName'] = metric_name
        try:
            new_rule = run_func_with_change_token_backoff(client, module, params, client.create_rule)['Rule']
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not create rule')
        return find_and_update_rule(client, module, new_rule['RuleId'])
    
        images.sort(key=lambda e: e.get('creation_date', ''))  # it may be possible that creation_date does not always exist
    module.exit_json(images=images)
    
        results = dict(changed=False)
    if module.params['state'] == 'present':
        if existing['CustomerGateways']:
            existing['CustomerGateway'] = existing['CustomerGateways'][0]
            results['gateway'] = existing
            if existing['CustomerGateway']['Tags']:
                tag_array = existing['CustomerGateway']['Tags']
                for key, value in enumerate(tag_array):
                    if value['Key'] == 'Name':
                        current_name = value['Value']
                        if current_name != name:
                            results['name'] = gw_mgr.tag_cgw_name(
                                results['gateway']['CustomerGateway']['CustomerGatewayId'],
                                module.params['name'],
                            )
                            results['changed'] = True
        else:
            if not module.check_mode:
                results['gateway'] = gw_mgr.ensure_cgw_present(
                    module.params['bgp_asn'],
                    module.params['ip_address'],
                )
                results['name'] = gw_mgr.tag_cgw_name(
                    results['gateway']['CustomerGateway']['CustomerGatewayId'],
                    module.params['name'],
                )
            results['changed'] = True
    
    
RETURN = '''
placement_groups:
  description: Placement group attributes
  returned: always
  type: complex
  contains:
    name:
      description: PG name
      type: string
      sample: my-cluster
    state:
      description: PG state
      type: string
      sample: 'available'
    strategy:
      description: PG strategy
      type: string
      sample: 'cluster'
    
        if not region:
        module.fail_json(msg=str('Either region or AWS_REGION or EC2_REGION environment variable or boto config aws_region or ec2_region must be set.'))
    
    
if __name__ == '__main__':
    main()

    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (HAS_BOTO3, boto3_conn, camel_dict_to_snake_dict, ec2_argument_spec,
                                      get_aws_connection_info)
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
    from ..common import *
    
            link_list = self.get_streams_by_id(account_number, video_id)
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
    
def download_url(url, merge, output_dir, title, info_only):
    mime, ext, size = url_info(url)
    print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
        title = r1(r'<title id='pageTitle'>(.+)</title>', html)
    
        title = html['data']['tv']['title']
    
    class norm_error(Exception):
    '''Path cannot be normalized'''
    
        @property
    def suffixes(self):
        '''A list of the final component's suffixes, if any.'''
        name = self.name
        if name.endswith('.'):
            return []
        name = name.lstrip('.')
        return ['.' + suffix for suffix in name.split('.')[1:]]
    
        @unittest.skipUnless(support.can_symlink(),
                         'Test requires symlink support')
    def test_ismount_symlinks(self):
        # Symlinks are never mountpoints.
        try:
            os.symlink('/', ABSTFN)
            self.assertIs(posixpath.ismount(ABSTFN), False)
        finally:
            os.unlink(ABSTFN)
    
    
def read_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> str:
    '''Return the decoded string of the resource.
    
    # Set our expectation for the default encoding used in the C locale
# for the filesystem encoding and the standard streams
EXPECTED_C_LOCALE_STREAM_ENCODING = 'ascii'
EXPECTED_C_LOCALE_FS_ENCODING = 'ascii'
    
    
if __name__ == '__main__':
    main()

    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    document = '''\
<slideshow>
<title>Demo slideshow</title>
<slide><title>Slide title</title>
<point>This is a demo</point>
<point>Of a program for processing slides</point>
</slide>