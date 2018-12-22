
        
            classifiers = proj_info['classifiers'],
    
            return link_list
    
        def prepare(self, vid = '', title = None, **kwargs):
        assert vid
    
        try:
        json_data = get_coub_data(html)
        title, video_url, audio_url = get_title_and_urls(json_data)
        video_file_name, video_file_path = get_file_path(merge, output_dir, title, video_url)
        audio_file_name, audio_file_path = get_file_path(merge, output_dir, title, audio_url)
        download_url(audio_url, merge, output_dir, title, info_only)
        download_url(video_url, merge, output_dir, title, info_only)
        if not info_only:
            try:
                fix_coub_video_file(video_file_path)
                audio_duration = float(ffmpeg.ffprobe_get_media_duration(audio_file_path))
                video_duration = float(ffmpeg.ffprobe_get_media_duration(video_file_path))
                loop_file_path = get_loop_file_path(title, output_dir)
                single_file_path = audio_file_path
                if audio_duration > video_duration:
                    write_loop_file(int(audio_duration / video_duration), loop_file_path, video_file_name)
                else:
                    single_file_path = audio_file_path
                    write_loop_file(int(video_duration / audio_duration), loop_file_path, audio_file_name)
    
        mime, ext, size = url_info(real_url)
    
    __all__ = ['facebook_download']
    
    _LOGGER = logging.getLogger(__name__)
    
    image = face_recognition.load_image_file('{}')
face_locations = face_recognition.face_locations(image)
'''
    
    3. Call 'predict' and pass in your trained model to recognize the people in an unknown image.
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
    # This is a demo of running face recognition on live video from your webcam. It's a little more complicated than the
# other example, but it includes some basic performance tweaks to make things run a lot faster:
#   1. Process each video frame at 1/4 resolution (though still display it at full resolution)
#   2. Only detect faces in every other frame of video.
    
    from setuptools import setup
    
    # 你需要一个2代以上的树莓派，并在树莓派上安装face_recognition，并连接上picamera摄像头
# 并确保picamera这个模块已经安装（树莓派一般会内置安装）
# 你可以参考这个教程配制你的树莓派：
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
        if len(unknown_face_encodings) > 0:
        face_found = True
        # 看看图片中的第一张脸是不是奥巴马
        match_results = face_recognition.compare_faces([known_face_encoding], unknown_face_encodings[0])
        if match_results[0]:
            is_obama = True
    
    
def main(path):