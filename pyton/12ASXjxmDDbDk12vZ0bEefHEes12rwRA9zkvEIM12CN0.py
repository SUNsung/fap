
        
                        ffmpeg.ffmpeg_concat_audio_and_video([loop_file_path, single_file_path], title + '_full', 'mp4')
                cleanup_files([video_file_path, audio_file_path, loop_file_path])
            except EnvironmentError as err:
                print('Error preparing full coub video. {}'.format(err))
    except Exception as err:
        print('Error while downloading files. {}'.format(err))
    
    '''
refer to http://open.youku.com/tools
'''
youku_embed_patterns = [ 'youku\.com/v_show/id_([a-zA-Z0-9=]+)',
                         'player\.youku\.com/player\.php/sid/([a-zA-Z0-9=]+)/v\.swf',
                         'loader\.swf\?VideoIDS=([a-zA-Z0-9=]+)',
                         'player\.youku\.com/embed/([a-zA-Z0-9=]+)',
                         'YKU.Player\(\'[a-zA-Z0-9]+\',{ client_id: \'[a-zA-Z0-9]+\', vid: \'([a-zA-Z0-9]+)\''
                       ]
    }
    
    def facebook_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
                    code = hit.group(1)
                base = hit.group(2)
                size = hit.group(3)
                names = hit.group(4).split('|')