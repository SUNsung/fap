
        
                status, long_video_id, key = params[2], params[5], params[6]
        status = remove_start(status, 'PRODUCT_')
    
                    for caption in asset.get('caption_metadata', []):
                    caption_url = caption.get('source_url')
                    if not caption_url:
                        continue
                    subtitles.setdefault(caption.get('language', 'en'), []).append({
                        'url': caption_url,
                        'ext': determine_ext(caption_url, 'vtt'),
                    })
            elif asset.get('type') == 'image':
                asset_location = asset.get('location')
                if not asset_location:
                    continue
                thumbnails.append({
                    'url': asset_location,
                    'width': int_or_none(asset.get('width')),
                    'height': int_or_none(asset.get('height')),
                })
        self._sort_formats(formats)
    
    import sys
import os
import textwrap
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
            return [package.split()[0] for package in packages]
    except subprocess.CalledProcessError as err:
        if err.returncode == 1 and err.output == '':
            return []
        else:
            raise err
    
        @pytest.mark.parametrize('key, value', [
        ('TF_OVERRIDDEN_ALIASES', 'cut,git,sed'),  # legacy
        ('THEFUCK_OVERRIDDEN_ALIASES', 'cut,git,sed'),
        ('THEFUCK_OVERRIDDEN_ALIASES', 'cut, git, sed'),
        ('THEFUCK_OVERRIDDEN_ALIASES', ' cut,\tgit,sed\n'),
        ('THEFUCK_OVERRIDDEN_ALIASES', '\ncut,\n\ngit,\tsed\r')])
    def test_get_overridden_aliases(self, shell, os_environ, key, value):
        os_environ[key] = value
        overridden = shell._get_overridden_aliases()
        assert set(overridden) == {'cd', 'cut', 'git', 'grep',
                                   'ls', 'man', 'open', 'sed'}
    
        @pytest.mark.parametrize('side_effect, expected_version, call_args', [
        ([b'''Major  Minor  Build  Revision
-----  -----  -----  --------
5      1      17763  316     \n'''], 'PowerShell 5.1.17763.316', ['powershell.exe']),
        ([IOError, b'PowerShell 6.1.2\n'], 'PowerShell 6.1.2', ['powershell.exe', 'pwsh'])])
    def test_info(self, side_effect, expected_version, call_args, shell, Popen):
        Popen.return_value.stdout.read.side_effect = side_effect
        assert shell.info() == expected_version
        assert Popen.call_count == len(call_args)
        assert all([Popen.call_args_list[i][0][0][0] == call_arg for i, call_arg in enumerate(call_args)])
    
        assert not match(Command(script, output))
    
        # Load image file and find face locations
    X_img = face_recognition.load_image_file(X_img_path)
    X_face_locations = face_recognition.face_locations(X_img)
    
        face_names = []
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces(known_faces, face_encoding, tolerance=0.50)
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
            # empty numpy list
        faces_to_compare = np.array([])
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_frame = frame[:, :, ::-1]
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
        # 获得所有人脸的位置以及它们的编码
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
    
def main():
    '''
    >>> molly = User('Molly')
    >>> mark = User('Mark')
    >>> ethan = User('Ethan')
    
    
def on_sale_discount(order):
    return order.price * 0.25 + 20
    
    *TL;DR
Defines the skeleton of a base algorithm, deferring definition of exact
steps to subclasses.
    
    
if __name__ == '__main__':
    rm1 = Borg()
    rm2 = Borg()
    
    *What does this example do?
In this example queue.Queue is used to create the pool (wrapped in a
custom ObjectPool object to use with the with statement), and it is
populated with strings.
As we can see, the first string object put in 'yam' is USED by the
with statement. But because it is released back into the pool
afterwards it is reused by the explicit call to sample_queue.get().
Same thing happens with 'sam', when the ObjectPool created insided the
function is deleted (by the GC) and the object is returned.
    
    '''
Reference: https://en.wikipedia.org/wiki/Delegation_pattern
Author: https://github.com/IuryAlves
    
        def __init__(self):
        self.business_logic = BusinessLogic()