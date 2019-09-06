
        
        
def add_error(line_num, message):
    '''adds an error to the dynamic error list'''
    err = '(L{:03d}) {}'.format(line_num + 1, message)
    errors.append(err)
    
    
def main():
    '''
    The main function.  Instantiates the module and calls process_request.
    :return: none
    '''
    module = AnsibleModule(
        argument_spec=ClcAntiAffinityPolicy._define_module_argument_spec(),
        supports_check_mode=True)
    clc_aa_policy = ClcAntiAffinityPolicy(module)
    clc_aa_policy.process_request()
    
        Attributes:
       msg (str): Exception message.
       oneview_response (dict): OneView rest response.
   '''
    
        module.exit_json(changed=ldap.passwd_set())
    
        # Report success
    result['elapsed'] = (datetime.datetime.utcnow() - start).seconds
    module.exit_json(**result)
    
        # --- run command ---
    try:
        ipmi_cmd = command.Command(
            bmc=name, userid=user, password=password, port=port
        )
        module.debug('ipmi instantiated - name: '%s'' % name)
    
    def message_html(title, banner, detail=''):
    MESSAGE_TEMPLATE = '''
    <html><head>
    <meta http-equiv='content-type' content='text/html;charset=utf-8'>
    <title>$title</title>
    <style><!--
    body {font-family: arial,sans-serif}
    div.nav {margin-top: 1ex}
    div.nav A {font-size: 10pt; font-family: arial,sans-serif}
    span.nav {font-size: 10pt; font-family: arial,sans-serif; font-weight: bold}
    div.nav A,span.big {font-size: 12pt; color: #0000cc}
    div.nav A {font-size: 10pt; color: black}
    A.l:link {color: #6f6f6f}
    A.u:link {color: green}
    //--></style>
    </head>
    <body text=#000000 bgcolor=#ffffff>
    <table border=0 cellpadding=2 cellspacing=0 width=100%>
    <tr><td bgcolor=#3366cc><font face=arial,sans-serif color=#ffffff><b>Message</b></td></tr>
    <tr><td> </td></tr></table>
    <blockquote>
    <H1>$banner</H1>
    $detail
    <p>
    </blockquote>
    <table width=100% cellpadding=0 cellspacing=0><tr><td bgcolor=#3366cc><img alt='' width=1 height=4></td></tr></table>
    </body></html>
    '''
    return string.Template(MESSAGE_TEMPLATE).substitute(title=title, banner=banner, detail=detail)
    
    from antlr3.constants import EOF, DEFAULT_CHANNEL, INVALID_TOKEN_TYPE
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
html_theme = 'default'
    
        :param model_save_path: (optional) path to save model on disk
    :param n_neighbors: (optional) number of neighbors to weigh in classification. Chosen automatically if not specified
    :param knn_algo: (optional) underlying data structure to support knn.default is ball_tree
    :param verbose: verbosity of training
    :return: returns knn classifier that was trained on the given data.
    '''
    X = []
    y = []
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    for face_landmarks in face_landmarks_list:
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
        if not info_only:
        download_url_ffmpeg(m3u8_url, title, 'm3u8', None, output_dir=output_dir, merge=merge)
    
        def test_as_json_table_type_categorical_dtypes(self):
        # TODO: I think before is_categorical_dtype(Categorical)
        # returned True, but now it's False. Figure out why or
        # if it matters
        assert as_json_table_type(pd.Categorical(['a'])) == 'any'
        assert as_json_table_type(CategoricalDtype()) == 'any'
    
            # overlapping
        tuples = [(start + n * shift, start + (n + 2) * shift) for n in range(3)]
        index = IntervalIndex.from_tuples(tuples, closed=closed)
        assert index.is_overlapping is True