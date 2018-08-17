
        
            packages = find_packages('src'),
    package_dir = {'' : 'src'},
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    
    {
def extract_json_data(url, **params):
    url = construct_url(url, **params)
    html = get_content(url, headers=fake_headers)
    json_string = match1(html, r'app.page\['board'\] = (.*?});')
    json_data = json.loads(json_string)
    return json_data