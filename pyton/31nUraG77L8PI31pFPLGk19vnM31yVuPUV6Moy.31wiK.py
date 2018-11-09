
        
            def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
    
class State(Enum):
    unvisited = 0
    visited = 1
    
        def __init__(self, key, value):
        self.key = key
        self.value = value
    
    RETURN = '''
wafs:
  description: The WAFs that match the passed arguments
  returned: success
  type: complex
  contains:
    name:
      description: A friendly name or description of the WebACL
      returned: always
      type: string
      sample: test_waf
    default_action:
      description: The action to perform if none of the Rules contained in the WebACL match.
      returned: always
      type: int
      sample: BLOCK
    metric_name:
      description: A friendly name or description for the metrics for this WebACL
      returned: always
      type: string
      sample: test_waf_metric
    rules:
      description: An array that contains the action for each Rule in a WebACL , the priority of the Rule
      returned: always
      type: complex
      contains:
        action:
          description: The action to perform if the Rule matches
          returned: always
          type: string
          sample: BLOCK
        metric_name:
          description: A friendly name or description for the metrics for this Rule
          returned: always
          type: string
          sample: ipblockrule
        name:
          description: A friendly name or description of the Rule
          returned: always
          type: string
          sample: ip_block_rule
        predicates:
          description: The Predicates list contains a Predicate for each
            ByteMatchSet, IPSet, SizeConstraintSet, SqlInjectionMatchSet or XssMatchSet
            object in a Rule
          returned: always
          type: list
          sample:
            [
              {
                'byte_match_set_id': '47b822b5-abcd-1234-faaf-1234567890',
                'byte_match_tuples': [
                  {
                    'field_to_match': {
                      'type': 'QUERY_STRING'
                    },
                    'positional_constraint': 'STARTS_WITH',
                    'target_string': 'bobbins',
                    'text_transformation': 'NONE'
                  }
                ],
                'name': 'bobbins',
                'negated': false,
                'type': 'ByteMatch'
              }
            ]
'''
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        autoscaling = boto3_conn(module, conn_type='client', resource='autoscaling', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
    RETURN = '''
gateway.customer_gateways:
    description: details about the gateway that was created.
    returned: success
    type: complex
    contains:
        bgp_asn:
            description: The Border Gateway Autonomous System Number.
            returned: when exists and gateway is available.
            sample: 65123
            type: string
        customer_gateway_id:
            description: gateway id assigned by amazon.
            returned: when exists and gateway is available.
            sample: cgw-cb6386a2
            type: string
        ip_address:
            description: ip address of your gateway device.
            returned: when exists and gateway is available.
            sample: 1.2.3.4
            type: string
        state:
            description: state of gateway.
            returned: when gateway exists and is available.
            state: available
            type: string
        tags:
            description: any tags on the gateway.
            returned: when gateway exists and is available, and when tags exist.
            state: available
            type: string
        type:
            description: encryption type.
            returned: when gateway exists and is available.
            sample: ipsec.1
            type: string
'''
    
        volume_id = module.params.get('volume_id')
    snapshot_id = module.params.get('snapshot_id')
    description = module.params.get('description')
    instance_id = module.params.get('instance_id')
    device_name = module.params.get('device_name')
    wait = module.params.get('wait')
    wait_timeout = module.params.get('wait_timeout')
    last_snapshot_min_age = module.params.get('last_snapshot_min_age')
    snapshot_tags = module.params.get('snapshot_tags')
    state = module.params.get('state')
    
        elif state == 'absent':
    
    def get_srt_json(id):
    url = 'http://danmu.aixifan.com/V2/%s' % id
    return get_content(url)
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
        vids = matchall(content, tudou_embed_patterns)
    for vid in set(vids):
        found = True
        tudou_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)