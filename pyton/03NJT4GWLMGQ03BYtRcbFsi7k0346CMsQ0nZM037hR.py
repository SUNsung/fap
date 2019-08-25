
        
        flags.DEFINE_boolean(
    'train_vggish', True,
    'If True, allow VGGish parameters to change during training, thus '
    'fine-tuning VGGish. If False, VGGish parameters are fixed, thus using '
    'VGGish as a fixed feature extractor.')
    
      def DetectorFn(images):
    '''Receives an image and returns detected boxes.
    
        # If the image is too small, returns empty features.
    if resized_image.shape[0] < _MIN_HEIGHT or resized_image.shape[
        1] < _MIN_WIDTH:
      return np.array([]), np.array([]), np.array([]), np.array([])
    
            self._request_webpage(
            HEADRequest(embed_url), video_id, headers={'Referer': url})
        video_id, sig, _, access_token = self._get_cookies(embed_url)['video_ext'].value.split('%3A')
        item = self._download_json(
            'https://api.vk.com/method/video.get', video_id,
            headers={'User-Agent': 'okhttp/3.4.1'}, query={
                'access_token': access_token,
                'sig': sig,
                'v': 5.44,
                'videos': video_id,
            })['response']['items'][0]
        title = item['title']
    
            if not raw_item_ids:
            return self._build_video_result(
                video_id,
                'Downloading just video %s because no playlist was found'
                % video_id)
    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
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
    
        def __repr__(self):
        return '<%s %s>' % (self.__class__.__name__, dict.__repr__(self))

    
            This checks if the object is an instance of :attr:`null_session_class`
        by default.
        '''
        return isinstance(obj, self.null_session_class)
    
        #: The canonical way to decorate class-based views is to decorate the
    #: return value of as_view().  However since this moves parts of the
    #: logic from the class declaration to the place where it's hooked
    #: into the routing system.
    #:
    #: You can place one or more decorators in this list and whenever the
    #: view function is created the result is automatically decorated.
    #:
    #: .. versionadded:: 0.8
    decorators = ()
    
        #: The internal URL rule that matched the request.  This can be
    #: useful to inspect which methods are allowed for the URL from
    #: a before/after handler (``request.url_rule.methods``) etc.
    #: Though if the request's method was invalid for the URL rule,
    #: the valid list is available in ``routing_exception.valid_methods``
    #: instead (an attribute of the Werkzeug exception
    #: :exc:`~werkzeug.exceptions.MethodNotAllowed`)
    #: because the request was never internally bound.
    #:
    #: .. versionadded:: 0.6
    url_rule = None
    
        response, info = fetch_url(module=module, url=url, headers=headers, data=rawdata, method=method)
    status = info['status']
    content = ''
    if response:
        content = response.read()
    if status == 204:
        return True, content
    elif status == 200 or status == 201:
        return True, json.loads(content)
    else:
        return False, str(status) + ': ' + content
    
        def _create_policy(self, p):
        '''
        Create an Anti Affinity Policy using the CLC API.
        :param p: datacenter to create policy in
        :return: response dictionary from the CLC API.
        '''
        try:
            return self.clc.v2.AntiAffinity.Create(
                name=p['name'],
                location=p['location'])
        except CLCException as ex:
            self.module.fail_json(msg='Failed to create anti affinity policy : {0}. {1}'.format(
                p['name'], ex.response_text
            ))
    
    
def main():
    '''
    Main function
    :return: None
    '''
    module = AnsibleModule(
        argument_spec=ClcBlueprintPackage.define_argument_spec(),
        supports_check_mode=True
    )
    clc_blueprint_package = ClcBlueprintPackage(module)
    clc_blueprint_package.process_request()
    
    
DOCUMENTATION = '''
module: clc_group
short_description: Create/delete Server Groups at Centurylink Cloud
description:
  - Create or delete Server Groups at Centurylink Centurylink Cloud
version_added: '2.0'
options:
  name:
    description:
      - The name of the Server Group
    required: True
  description:
    description:
      - A description of the Server Group
    required: False
  parent:
    description:
      - The parent group of the server group. If parent is not provided, it creates the group at top level.
    required: False
  location:
    description:
      - Datacenter to create the group in. If location is not provided, the group gets created in the default datacenter
        associated with the account
    required: False
  state:
    description:
      - Whether to create or delete the group
    default: present
    choices: ['present', 'absent']
  wait:
    description:
      - Whether to wait for the tasks to finish before returning.
    type: bool
    default: True
    required: False
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
    
        def create_loadbalancerpool(
            self, alias, location, lb_id, method, persistence, port):
        '''
        Creates a pool on the provided load balancer
        :param alias: the account alias
        :param location: the datacenter the load balancer resides in
        :param lb_id: the id string of the load balancer
        :param method: the load balancing method
        :param persistence: the load balancing persistence type
        :param port: the port that the load balancer will listen on
        :return: result: The result from the create API call
        '''
        result = None
        try:
            result = self.clc.v2.API.Call(
                'POST', '/v2/sharedLoadBalancers/%s/%s/%s/pools' %
                (alias, location, lb_id), json.dumps(
                    {
                        'port': port, 'method': method, 'persistence': persistence
                    }))
        except APIFailedResponse as e:
            self.module.fail_json(
                msg='Unable to create pool for load balancer id '{0}'. {1}'.format(
                    lb_id, str(e.response_text)))
        return result
    
            if matching_issue_list_len == 0:
            # The issue does not exist in the project
            if state == 'present':
                # This implies a change
                changed = True
                if not check_mode:
                    # Create the issue
                    new_issue = project.add_issue(issue_subject, priority_id, status_id, type_id, severity_id, tags=issue_tags, description=issue_description)
                    if issue_attachment:
                        new_issue.attach(issue_attachment, description=issue_attachment_description)
                        issue['attachment'] = issue_attachment
                        issue['attachment_description'] = issue_attachment_description
                return (True, changed, 'Issue created', issue)
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(required=True),
            port=dict(default=623, type='int'),
            state=dict(required=True, choices=['on', 'off', 'shutdown', 'reset', 'boot']),
            user=dict(required=True, no_log=True),
            password=dict(required=True, no_log=True),
            timeout=dict(default=300, type='int'),
        ),
        supports_check_mode=True,
    )
    
    
    def traceOut(self, ruleName, ruleIndex, inputSymbol):
        sys.stdout.write('exit %s %s' % (ruleName, inputSymbol))
        
##         if self._state.failed:
##             sys.stdout.write(' failed=%s' % self._state.failed)
    
            params = apigateway_listener.extract_path_params('/foo/bar/baz', '/foo/{proxy+}')
        self.assertEqual(params, {'proxy+': 'bar/baz'})