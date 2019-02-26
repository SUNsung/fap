
        
            with gzip.open(paths[0], 'rb') as lbpath:
        y_train = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loaded_model = keras.models.load_model(model_filename)
        loaded_model.predict(np.random.rand(128, 2))
    
    from keras.models import Sequential, Model
from keras.layers import Dense, Input, Average
from keras.utils import np_utils
from keras.utils import test_utils
from keras import regularizers
from keras import backend as K
    
    Gets to 99.25% test accuracy after 12 epochs
(there is still a lot of margin for parameter tuning).
16 seconds per epoch on a GRID K520 GPU.
'''
    
    loss, acc = test_model.evaluate(x_test, y_test, num_classes)
print('\nTest accuracy: {0}'.format(acc))

    
    
def binary_crossentropy(y_true, y_pred):
    return K.mean(K.binary_crossentropy(y_true, y_pred), axis=-1)
    
    
def get_cloudwatchevents_client(module):
    '''Returns a boto3 client for accessing CloudWatch Events'''
    region, ec2_url, aws_conn_kwargs = get_aws_connection_info(module, boto3=True)
    return boto3_conn(module, conn_type='client',
                      resource='events',
                      region=region, endpoint=ec2_url,
                      **aws_conn_kwargs)
    
        if not region:
        module.fail_json(msg=str('Either region or AWS_REGION or EC2_REGION environment variable or boto config aws_region or ec2_region must be set.'))
    
        fw_rules = module.params.get('fw_rules')
    gateway_name = module.params.get('gateway_name')
    vdc_name = module.params['vdc_name']
    
            if service is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('memberservice_hbacsvc', []), service,
                                            client.hbacrule_add_service,
                                            client.hbacrule_remove_service, 'hbacsvc') or changed
    
            if hostgroup is not None:
            changed = client.modify_if_diff(name, ipa_role.get('member_hostgroup', []), hostgroup,
                                            client.role_add_hostgroup,
                                            client.role_remove_hostgroup) or changed
    
        params['api_key'] = module.params['token']
    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
    if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001, debug=True)

    
    # Create an output movie file (make sure resolution/frame rate matches input video!)
fourcc = cv2.VideoWriter_fourcc(*'XVID')
output_movie = cv2.VideoWriter('output.avi', fourcc, 29.97, (640, 360))
    
    
@click.command()
@click.argument('known_people_folder')
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel (can speed up processing lots of images). -1 means 'use all in system'')
@click.option('--tolerance', default=0.6, help='Tolerance for face comparisons. Default is 0.6. Lower this if you get multiple matches for the same person.')
@click.option('--show-distance', default=False, type=bool, help='Output face distance. Useful for tweaking tolerance setting.')
def main(known_people_folder, image_to_check, cpus, tolerance, show_distance):
    known_names, known_face_encodings = scan_known_people(known_people_folder)
    
        def test_cnn_raw_face_locations(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        detected_faces = api._raw_face_locations(img, model='cnn')
    
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

    
    # 你需要在sudo raspi-config中把camera功能打开
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)