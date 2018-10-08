
        
            test_suite = 'tests',
    
    if __name__ == '__main__':
    main()

    
        if not info_only and not dry_run:
        if not kwargs['caption']:
            print('Skipping danmaku.')
            return
        try:
            title = get_filename(title)
            print('Downloading %s ...\n' % (title + '.cmt.json'))
            cmt = get_srt_json(vid)
            with open(os.path.join(output_dir, title + '.cmt.json'), 'w', encoding='utf-8') as x:
                x.write(cmt)
        except:
            pass
    
            self.prepare(vid = vid, title = title, **kwargs)
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
            print_info(site_info, title, type, size)
        if not info_only:
            download_urls([real_url], title, ext, size, output_dir, merge = merge)