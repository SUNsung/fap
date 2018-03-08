
        
        error_msg = None
    
        :param args: parsed args (argparse.Namespace)
    :type env: Environment
    :param log_error: error log function
    :return: status code
    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
        long_description = README,
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
        title = r1(r'<meta name='description' content='([^']*)'', html)
    flashvars = r1(r'flashvars='(type=[^']*)'', html)