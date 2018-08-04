
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.SUPERVISOR)
    
            Emit key value pairs of the form:
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        def move_to_front(self, node):
        ...
    
    
def process_images_in_process_pool(images_to_check, known_names, known_face_encodings, number_of_cpus, tolerance, show_distance):
    if number_of_cpus == -1:
        processes = None
    else:
        processes = number_of_cpus
    
        if os.path.isdir(image_to_check):
        if cpus == 1:
            [test_image(image_file, model) for image_file in image_files_in_folder(image_to_check)]
        else:
            process_images_in_process_pool(image_files_in_folder(image_to_check), cpus, model)
    else:
        test_image(image_to_check, model)