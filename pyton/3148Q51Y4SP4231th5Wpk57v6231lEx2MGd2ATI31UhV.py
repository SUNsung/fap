
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
            description = self._html_search_regex(
            r'(?s)<div\b[^>]+\bclass=['\']full hidden[^>]+>(.+?)</div>',
            webpage, 'description', fatal=False)
        thumbnail = self._og_search_thumbnail(
            webpage, default=None) or self._html_search_meta(
            'twitter:image:src', webpage, 'thumbnail')
        uploader = self._html_search_regex(
            (r'(?s)<div class=['\']channel-banner.*?<p\b[^>]+\bclass=['\']name[^>]+>(.+?)</p>',
             r'(?s)<p\b[^>]+\bclass=['\']video-author[^>]+>(.+?)</p>'),
            webpage, 'uploader', fatal=False)
    
            return {
            'id': video_id,
            'title': title,
            'description': video.get('long_description') or video.get(
                'short_description'),
            'duration': float_or_none(video.get('duration'), scale=1000),
            'formats': formats,
            'subtitles': subtitles,
        }
    
        _TESTS = [{
        'url': 'http://www.cbs.com/shows/garth-brooks/video/_u7W953k6la293J7EPTd9oHkSPs6Xn6_/connect-chat-feat-garth-brooks/',
        'info_dict': {
            'id': '_u7W953k6la293J7EPTd9oHkSPs6Xn6_',
            'ext': 'mp4',
            'title': 'Connect Chat feat. Garth Brooks',
            'description': 'Connect with country music singer Garth Brooks, as he chats with fans on Wednesday November 27, 2013. Be sure to tune in to Garth Brooks: Live from Las Vegas, Friday November 29, at 9/8c on CBS!',
            'duration': 1495,
            'timestamp': 1385585425,
            'upload_date': '20131127',
            'uploader': 'CBSI-NEW',
        },
        'params': {
            # m3u8 download
            'skip_download': True,
        },
        '_skip': 'Blocked outside the US',
    }, {
        'url': 'http://colbertlateshow.com/video/8GmB0oY0McANFvp2aEffk9jZZZ2YyXxy/the-colbeard/',
        'only_matching': True,
    }, {
        'url': 'http://www.colbertlateshow.com/podcasts/dYSwjqPs_X1tvbV_P2FcPWRa_qT6akTC/in-the-bad-room-with-stephen/',
        'only_matching': True,
    }]
    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
    # NAME
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
        def to_url(self, value):
        return value
    
    
class POFileAssertionMixin:
    
    
class CopyPluralFormsExtractorTests(ExtractorTests):
    
    
DOCUMENTATION = '''
module: clc_publicip
short_description: Add and Delete public ips on servers in CenturyLink Cloud.
description:
  - An Ansible module to add or delete public ip addresses on an existing server or servers in CenturyLink Cloud.
version_added: '2.0'
options:
  protocol:
    description:
      - The protocol that the public IP will listen for.
    default: TCP
    choices: ['TCP', 'UDP', 'ICMP']
  ports:
    description:
      - A list of ports to expose. This is required when state is 'present'
  server_ids:
    description:
      - A list of servers to create public ips on.
    required: True
  state:
    description:
      - Determine whether to create or delete public IPs. If present module will not create a second public ip if one
        already exists.
    default: present
    choices: ['present', 'absent']
  wait:
    description:
      - Whether to wait for the tasks to finish before returning.
    type: bool
    default: 'yes'
requirements:
    - python = 2.7
    - requests >= 2.5.0
    - clc-sdk
author: 'CLC Runner (@clc-runner)'
notes:
    - To use this module, it is required to set the below environment variables which enables access to the
      Centurylink Cloud
          - CLC_V2_API_USERNAME, the account login id for the centurylink cloud
          - CLC_V2_API_PASSWORD, the account password for the centurylink cloud
    - Alternatively, the module accepts the API token and account alias. The API token can be generated using the
      CLC account login and password via the HTTP api call @ https://api.ctl.io/v2/authentication/login
          - CLC_V2_API_TOKEN, the API token generated from https://api.ctl.io/v2/authentication/login
          - CLC_ACCT_ALIAS, the account alias associated with the centurylink cloud
    - Users can set CLC_V2_API_URL to specify an endpoint for pointing to a different CLC environment.
'''
    
    DOCUMENTATION = '''
---
module: netcup_dns
notes: []
version_added: 2.7.0
short_description: manage Netcup DNS records
description:
  - 'Manages DNS records via the Netcup API, see the docs U(https://ccp.netcup.net/run/webservice/servers/endpoint.php)'
options:
  api_key:
    description:
      - API key for authentification, must be obtained via the netcup CCP (U(https://ccp.netcup.net))
    required: True
  api_password:
    description:
      - API password for authentification, must be obtained via the netcup CCP (https://ccp.netcup.net)
    required: True
  customer_id:
    description:
      - Netcup customer id
    required: True
  domain:
    description:
      - Domainname the records should be added / removed
    required: True
  record:
    description:
      - Record to add or delete, supports wildcard (*). Default is C(@) (e.g. the zone name)
    default: '@'
    aliases: [ name ]
  type:
    description:
      - Record type
    choices: ['A', 'AAAA', 'MX', 'CNAME', 'CAA', 'SRV', 'TXT', 'TLSA', 'NS', 'DS']
    required: True
  value:
    description:
      - Record value
    required: true
  solo:
    type: bool
    default: False
    description:
      - Whether the record should be the only one for that record type and record name. Only use with C(state=present)
      - This will delete all other records with the same record name and type.
  priority:
    description:
      - Record priority. Required for C(type=MX)
    required: False
  state:
    description:
      - Whether the record should exist or not
    required: False
    default: present
    choices: [ 'present', 'absent' ]
requirements:
  - 'nc-dnsapi >= 0.1.3'
author: 'Nicolai Buchwitz (@nbuchwitz)'
    
        if not matrix_found:
        module.fail_json(msg=missing_required_lib('matrix-client'), exception=MATRIX_IMP_ERR)
    
    def main():
    module = AnsibleModule(
        argument_spec=dict(
            api_key=dict(type='str', required=True, no_log=True),
            channel=dict(type='str', default=None),
            device=dict(type='str', default=None),
            push_type=dict(type='str', default='note', choices=['note', 'link']),
            title=dict(type='str', required=True),
            body=dict(type='str', default=None),
            url=dict(type='str', default=None),
        ),
        mutually_exclusive=(
            ['channel', 'device'],
        ),
        supports_check_mode=True
    )
    
        def testSetDictionary(self):
        jieba.set_dictionary('foobar.txt')
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test SetDictionary Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test SetDictionary error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testSetDictionary', file=sys.stderr)
    
    t2 = time.time()
tm_cost = t2-t1
    
    jieba.enable_parallel(4)