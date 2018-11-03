
        
        
def ensure_web_acl_absent(client, module):
    web_acl_id = get_web_acl_by_name(client, module, module.params['name'])
    if web_acl_id:
        web_acl = get_web_acl(client, module, web_acl_id)
        if web_acl['Rules']:
            remove_rules_from_web_acl(client, module, web_acl_id)
        try:
            run_func_with_change_token_backoff(client, module, {'WebACLId': web_acl_id}, client.delete_web_acl, wait=True)
            return True, {}
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not delete Web ACL')
    return False, {}
    
    version_added: '2.2'
author: 'Jose Armesto (@fiunchinho)'
options:
  region:
    description:
      - The AWS region to use.
    required: true
    aliases: ['aws_region', 'ec2_region']
  name_regex:
    description:
      - A Launch Configuration to match
      - It'll be compiled as regex
    required: True
  sort_order:
    description:
      - Order in which to sort results.
    choices: ['ascending', 'descending']
    default: 'ascending'
  limit:
    description:
      - How many results to show.
      - Corresponds to Python slice notation like list[:limit].
requirements:
  - 'python >= 2.6'
  - boto3
extends_documentation_fragment:
    - aws
'''
    
    
if __name__ == '__main__':
    main()

    
        if not HAS_BOTO:
        module.fail_json(msg='boto required for this module')
    
                try:
                if not module.check_mode:
                    results = client.delete_alias(**api_params)
                changed = True
            except (ClientError, ParamValidationError, MissingParametersError) as e:
                module.fail_json(msg='Error deleting function alias: {0}'.format(e))
    
        noarch_lib = os.path.abspath( os.path.join(python_path, 'lib', 'noarch'))
    sys.path.append(noarch_lib)
    
    noarch_lib = os.path.abspath( os.path.join(python_path, 'lib', 'noarch'))
sys.path.append(noarch_lib)
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
            if isinstance(types, (int, long)):
            # called with a single type, wrap into set
            types = set([types])
            
        filteredTokens = [
            token for token in self.tokens[start:stop]
            if types is None or token.type in types
            ]
    
            # here s the parser...
        stream_types = dilidili_parser_data_to_stream_types(typ, vid, hd2, sign, tmsign, ulk)
        
        #get best
        best_id = max([i['id'] for i in stream_types])
        
        parse_url = 'http://player.005.tv/parse.php?xmlurl=null&type={typ}&vid={vid}&hd={hd2}&sign={sign}&tmsign={tmsign}&userlink={ulk}'.format(typ = typ, vid = vid, hd2 = best_id, sign = sign, tmsign = tmsign, ulk = ulk)
        
        another_url = 'https://newplayer.jfrft.com/parse.php?xmlurl=null&type={typ}&vid={vid}&hd={hd2}&sign={sign}&tmsign={tmsign}&userlink={ulk}'.format(typ = typ, vid = vid, hd2 = hd2, sign = sign, tmsign = tmsign, ulk = ulk)
    
        if int(html['status']) != 100000:
        raise Exception('API error!')
    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
    # (api_key, method, ext, page)
tmpl_api_call = (
    'https://api.flickr.com/services/rest?'
    '&format=json&nojsoncallback=1'
    # UNCOMMENT FOR TESTING
    #'&per_page=5'
    '&per_page=500'
    # this parameter CANNOT take control of 'flickr.galleries.getPhotos'
    # though the doc said it should.
    # it's always considered to be 500
    '&api_key=%s'
    '&method=flickr.%s'
    '&extras=url_sq,url_q,url_t,url_s,url_n,url_m,url_z,url_c,url_l,url_h,url_k,url_o,media'
    '%s&page=%d'
)
    
    def check_live_url(url):