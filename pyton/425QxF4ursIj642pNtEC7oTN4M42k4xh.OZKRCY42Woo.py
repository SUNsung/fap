
        
                vid = int(video_id)
        video_data = list(filter(
            lambda episode: episode.get('video_id') == vid, response['data']))[0]
        formats = []
    
            formats = [
            {'url': format_url}
            for format_url in orderedSet(format_urls)]
    
    
class SouthParkIE(MTVServicesInfoExtractor):
    IE_NAME = 'southpark.cc.com'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.cc\.com/(?:clips|(?:full-)?episodes|collections)/(?P<id>.+?)(\?|#|$))'
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    import io
import sys
import re
    
            # Display results overlaid on an image
        show_prediction_labels_on_image(os.path.join('knn_examples/test', image_file), predictions)

    
    
def print_result(filename, location):
    top, right, bottom, left = location
    print('{},{},{},{},{}'.format(filename, top, right, bottom, left))
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
        # Only process every other frame of video to save time
    if process_this_frame:
        # Find all the faces and face encodings in the current frame of video
        face_locations = face_recognition.face_locations(rgb_small_frame)
        face_encodings = face_recognition.face_encodings(rgb_small_frame, face_locations)
    
    # Convert the image to a PIL-format image so that we can draw on top of it with the Pillow library
# See http://pillow.readthedocs.io/ for more about PIL/Pillow
pil_image = Image.fromarray(unknown_image)
# Create a Pillow ImageDraw Draw instance to draw with
draw = ImageDraw.Draw(pil_image)
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
    
def softsign(x):
    '''
    o = x / (1 + abs(x))
    '''
    return tf.nn.softsign(x)
    
    
def relu6(x):
    '''
    `o = min(max(x, 0), 6)`
    '''
    return tf.nn.relu6(x)
    
        Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
            # h_tilde(h~): question to context attended query vectors
        b = tf.reduce_max(S, axis=2)  # [N, T]
        b = softmax(b, axis=-1)  # [N, T]
        b = tf.expand_dims(b, axis=1)  # [N, 1, T]
        h_tilde = tf.matmul(b, h)  # [N, 1, d]
        h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]