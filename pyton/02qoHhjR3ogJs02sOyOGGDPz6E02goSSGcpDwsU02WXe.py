
        
            # test that successful registration redirects to the login page
    response = client.post(
        '/auth/register', data={'username': 'a', 'password': 'a'}
    )
    assert 'http://localhost/auth/login' == response.headers['Location']
    
    from .globals import request
    
    
DOCUMENTATION = '''
---
module: elasticache_subnet_group
version_added: '2.0'
short_description: manage Elasticache subnet groups
description:
     - Creates, modifies, and deletes Elasticache subnet groups. This module has a dependency on python-boto >= 2.5.
options:
  state:
    description:
      - Specifies whether the subnet should be present or absent.
    required: true
    default: present
    choices: [ 'present' , 'absent' ]
  name:
    description:
      - Database subnet group identifier.
    required: true
  description:
    description:
      - Elasticache subnet group description. Only set when a new group is added.
  subnets:
    description:
      - List of subnet IDs that make up the Elasticache subnet group.
author: 'Tim Mahoney (@timmahoney)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        lambda_facts = dict()
    params = dict()
    function_name = module.params.get('function_name')
    
    EXAMPLES = '''
    
            _processes = []
        for process in processes:
            _process = oneandone.client.Process(
                process=process['process'],
                alert_if=process['alert_if'],
                email_notification=str(process['email_notification']).lower())
            _processes.append(_process)
    
            # if we reach this point we can assume that the host was taken to the desired state
    
        changed = False
    if state == 'present':
        if not ipa_role:
            changed = True
            if not module.check_mode:
                ipa_role = client.role_add(name=name, item=module_role)
        else:
            diff = get_role_diff(client, ipa_role, module_role)
            if len(diff) > 0:
                changed = True
                if not module.check_mode:
                    data = {}
                    for key in diff:
                        data[key] = module_role.get(key)
                    client.role_mod(name=name, item=data)
    
    
DOCUMENTATION = '''
---
module: airbrake_deployment
version_added: '1.2'
author: 'Bruce Pennypacker (@bpennypacker)'
short_description: Notify airbrake about app deployments
description:
   - Notify airbrake about app deployments (see http://help.airbrake.io/kb/api-2/deploy-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The airbrake environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
    required: false
  repo:
    description:
      - URL of the project repository
    required: false
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
    required: false
  url:
    description:
      - Optional URL to submit the notification to. Use to send notifications to Airbrake-compliant tools like Errbit.
    required: false
    default: 'https://airbrake.io/deploys.txt'
    version_added: '1.5'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
                    log.println('    platform: {}'.format(platform.platform()))
                log.println('    python:   {}'.format(sys.version.split('\n')[0]))
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
        type, ext, size = url_info(urls[0], True)
    size = urls_size(urls)
    
                print_info(site_info, title_i, ext, size)
            if not info_only:
                download_urls([real_url], title_i, ext, size, output_dir, merge = merge)
    
    
def icourses_playlist_new(url, page=None):
    # 2 helpers using same interface in the js code
    def to_chap(course_id, chap_id, mod):
        ep = 'http://www.icourses.cn/jpk/viewCharacterDetail2.action?courseId={}&characId={}&mod={}'
        req = post_content(ep.format(course_id, chap_id, mod), post_data={})
        return req