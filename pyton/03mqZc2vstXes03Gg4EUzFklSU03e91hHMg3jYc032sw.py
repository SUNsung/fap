
        
        # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
            editor = self.settings['EDITOR']
        try:
            spidercls = self.crawler_process.spider_loader.load(args[0])
        except KeyError:
            return self._err('Spider not found: %s' % args[0])
    
        def process_spider_arguments(self, opts):
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
        # For a definition of each point index, see https://cdn-images-1.medium.com/max/1600/1*AbEg31EgkbXSQehuNJBlWg.png
    if model == 'large':
        return [{
            'chin': points[0:17],
            'left_eyebrow': points[17:22],
            'right_eyebrow': points[22:27],
            'nose_bridge': points[27:31],
            'nose_tip': points[31:36],
            'left_eye': points[36:42],
            'right_eye': points[42:48],
            'top_lip': points[48:55] + [points[64]] + [points[63]] + [points[62]] + [points[61]] + [points[60]],
            'bottom_lip': points[54:60] + [points[48]] + [points[60]] + [points[67]] + [points[66]] + [points[65]] + [points[64]]
        } for points in landmarks_as_tuples]
    elif model == 'small':
        return [{
            'nose_tip': [points[4]],
            'left_eye': points[2:4],
            'right_eye': points[0:2],
        } for points in landmarks_as_tuples]
    else:
        raise ValueError('Invalid landmarks model type. Supported models are ['small', 'large'].')
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, model) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), cpus, model)
    else:
        test_image(image_to_check, model)
    
                face_names.append(name)
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
    # Loop through each face found in the unknown image
for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
    # See if the face is a match for the known face(s)
    matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
            if True in result:
            [print_result(image_to_check, name, distance, show_distance) for is_match, name, distance in zip(result, known_names, distances) if is_match]
        else:
            print_result(image_to_check, 'unknown_person', None, show_distance)
    
    # 你需要一个2代以上的树莓派，并在树莓派上安装face_recognition，并连接上picamera摄像头
# 并确保picamera这个模块已经安装（树莓派一般会内置安装）
# 你可以参考这个教程配制你的树莓派：
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65