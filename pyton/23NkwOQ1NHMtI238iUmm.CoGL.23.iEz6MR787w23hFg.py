
        
        EXAMPLES = '''
  - name: create web ACL
    aws_waf_web_acl:
      name: my_web_acl
      rules:
        - name: my_rule
          priority: 1
          action: block
      default_action: block
      purge_rules: yes
      state: present
    
        desc_log_group_result = dict(changed=False, log_groups=final_log_group_snake)
    module.exit_json(**desc_log_group_result)
    
        if last_snapshot_min_age > 0:
        try:
            current_snapshots = ec2.get_all_snapshots(filters={'volume_id': volume_id})
        except boto.exception.BotoServerError as e:
            module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
    
if __name__ == '__main__':
    main()

    
        if not HAS_BOTO3:
        module.fail_json(msg='boto3 required for this module')
    
      - name: show results
    debug:
      var: lambda_facts
    
        function_name = module.params.get('function_name')
    if function_name:
        params = dict()
        if module.params.get('max_items'):
            params['MaxItems'] = module.params.get('max_items')
    
        def __init__(self):
        super().__init__()
        self.api_data = None
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        type, ext, size = url_info(video_url, headers=fake_headers)