
        
        
class HStoreExtension(CreateExtension):
    
        def exists(self, session_key):
        return session_key and (self.cache_key_prefix + session_key) in self._cache or super().exists(session_key)
    
        objects = BaseSessionManager()
    
    In the second benchmark, we increase the number of dimensions of the
training set, classify a sample and plot the time taken as a function
of the number of dimensions.
'''
import numpy as np
import matplotlib.pyplot as plt
import gc
from datetime import datetime
    
        in_exercise_region = False
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston
    
    fit_data = data[np.argsort(model.row_labels_)]
fit_data = fit_data[:, np.argsort(model.column_labels_)]
    
        # Resize frame of video to 1/4 size for faster face detection processing
    small_frame = cv2.resize(frame, (0, 0), fx=0.25, fy=0.25)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # Load some sample pictures and learn how to recognize them.
lmm_image = face_recognition.load_image_file('lin-manuel-miranda.png')
lmm_face_encoding = face_recognition.face_encodings(lmm_image)[0]
    
    
    # Display the results
    for (top, right, bottom, left), name in zip(face_locations, face_names):
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
    # Load an image with an unknown face
unknown_image = face_recognition.load_image_file('two_people.jpg')
    
        def test_command_line_interface_options(self):
        target_string = 'Show this message and exit.'
        runner = CliRunner()
        help_result = runner.invoke(face_recognition_cli.main, ['--help'])
        self.assertEqual(help_result.exit_code, 0)
        self.assertTrue(target_string in help_result.output)
    
    print('I found {} face(s) in this photograph.'.format(len(face_landmarks_list)))
    
    setup(
    name='face_recognition',
    version='1.2.3',
    description='Recognize faces from Python or from the command line',
    long_description=readme + '\n\n' + history,
    author='Adam Geitgey',
    author_email='ageitgey@gmail.com',
    url='https://github.com/ageitgey/face_recognition',
    packages=[
        'face_recognition',
    ],
    package_dir={'face_recognition': 'face_recognition'},
    package_data={
        'face_recognition': ['models/*.dat']
    },
    entry_points={
        'console_scripts': [
            'face_recognition=face_recognition.face_recognition_cli:main',
            'face_detection=face_recognition.face_detection_cli:main'
        ]
    },
    install_requires=requirements,
    license='MIT license',
    zip_safe=False,
    keywords='face_recognition',
    classifiers=[
        'Development Status :: 4 - Beta',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
    ],
    test_suite='tests',
    tests_require=test_requirements
)

    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
            if file.filename == '':
            return redirect(request.url)
    
    
def cityscapes_to_coco_with_rider(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: 1,  # person
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: 1,  # rider ('person', *rider has human right!*)
    }
    return lookup[cityscapes_id]
    
            if model.train:
            loss_gradients = {}
            for lg in head_loss_gradients.values():
                if lg is not None:
                    loss_gradients.update(lg)
            return loss_gradients
        else:
            return None
    
        # ==========================================================================
    # cls loss - depends on softmax/sigmoid outputs
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        suffix = 'fpn{}'.format(lvl)
        cls_lvl_logits = 'retnet_cls_pred_' + suffix
        if not cfg.RETINANET.SOFTMAX:
            cls_focal_loss = model.net.SigmoidFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes - 1
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))
        else:
            cls_focal_loss, gated_prob = model.net.SoftmaxFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix), 'retnet_prob_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))
    
        points: Nx2xK
    boxes: Nx4
    output: NxK
    '''
    x_within = np.logical_and(
        points[:, 0, :] >= np.expand_dims(boxes[:, 0], axis=1),
        points[:, 0, :] <= np.expand_dims(boxes[:, 2], axis=1)
    )
    y_within = np.logical_and(
        points[:, 1, :] >= np.expand_dims(boxes[:, 1], axis=1),
        points[:, 1, :] <= np.expand_dims(boxes[:, 3], axis=1)
    )
    return np.logical_and(x_within, y_within)

    
            # Fg label: for each gt use anchors with highest overlap
        # (including ties)
        gt_inds = anchor_to_gt_argmax[anchors_with_max_overlap]
        labels[anchors_with_max_overlap] = gt_classes[gt_inds]
        # Fg label: above threshold IOU
        inds = anchor_to_gt_max >= cfg.RETINANET.POSITIVE_OVERLAP
        gt_inds = anchor_to_gt_argmax[inds]
        labels[inds] = gt_classes[gt_inds]