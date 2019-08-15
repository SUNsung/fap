
        
            # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]
    
    # 你需要一个2代以上的树莓派，并在树莓派上安装face_recognition，并连接上picamera摄像头
# 并确保picamera这个模块已经安装（树莓派一般会内置安装）
# 你可以参考这个教程配制你的树莓派：
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
    
if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001, debug=True)

    
    # The training data would be all the face encodings from all the known images and the labels are their names
encodings = []
names = []
    
        # Remove escaped characters first to make quote/single quote collapsing
    # basic.  Things that look like escaped characters shouldn't occur
    # outside of strings and chars.
    elided = _RE_PATTERN_CLEANSE_LINE_ESCAPES.sub('', elided)