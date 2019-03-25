
        
        
class SessionStore(SessionBase):
    '''
    Implement database session store.
    '''
    def __init__(self, session_key=None):
        super().__init__(session_key)
    
    from django.contrib.sites.shortcuts import get_current_site
from django.core.paginator import EmptyPage, PageNotAnInteger
from django.http import Http404
from django.template.response import TemplateResponse
from django.urls import reverse
from django.utils.http import http_date
    
            This property is cached so that only one database query occurs when
        rendering ModelChoiceFields.
        '''
        id_ = self.field.widget.attrs.get('id') or self.auto_id
        attrs = {'id': id_} if id_ else {}
        attrs = self.build_widget_attrs(attrs)
        return [
            BoundWidget(self.field.widget, widget, self.form.renderer)
            for widget in self.field.widget.subwidgets(self.html_name, self.value(), attrs=attrs)
        ]
    
            if state == 'absent':
            if exists:
                conn.delete_cache_subnet_group(group_name)
                changed = True
        else:
            if not exists:
                new_group = conn.create_cache_subnet_group(group_name, cache_subnet_group_description=group_description, subnet_ids=group_subnets)
                changed = True
            else:
                changed_group = conn.modify_cache_subnet_group(group_name, cache_subnet_group_description=group_description, subnet_ids=group_subnets)
                changed = True
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    
def validate_fw_rules(fw_rules):
    for rule in fw_rules:
        for k in rule.keys():
            if k not in VALID_RULE_KEYS:
                raise VcaError('%s is not a valid key in fw rules, please '
                               'check above..' % k, valid_keys=VALID_RULE_KEYS)
    
        gateway = vca.get_gateway(vdc_name, gateway_name)
    if not gateway:
        module.fail_json(msg='Not able to find the gateway %s, please check '
                             'the gateway_name param' % gateway_name)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        module_hbacrule = get_hbacrule_dict(description=module.params['description'],
                                        hostcategory=hostcategory,
                                        ipaenabledflag=ipaenabledflag,
                                        servicecategory=servicecategory,
                                        sourcehostcategory=sourcehostcategory,
                                        usercategory=usercategory)
    ipa_hbacrule = client.hbacrule_find(name=name)
    
        context['show_on_github_url'] = show_url
    context['edit_on_github_url'] = edit_url
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'home-assistant.tex', 'Home Assistant Documentation',
     'Home Assistant Team', 'manual'),
]
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
        :param img_path: path to image to be recognized
    :param predictions: results of the predict function
    :return:
    '''
    pil_image = Image.open(img_path).convert('RGB')
    draw = ImageDraw.Draw(pil_image)
    
    
def batch_face_locations(images, number_of_times_to_upsample=1, batch_size=128):
    '''
    Returns an 2d array of bounding boxes of human faces in a image using the cnn face detector
    If you are using a GPU, this can give you much faster results since the GPU
    can process batches of images at once. If you aren't using a GPU, you don't need this function.
    
    # You can also save a copy of the new image to disk if you want by uncommenting this line
# pil_image.save('image_with_boxes.jpg')

    
            self.assertEqual(len(detected_faces), 1)
        self.assertAlmostEqual(detected_faces[0].rect.top(), 144, delta=25)
        self.assertAlmostEqual(detected_faces[0].rect.bottom(), 389, delta=25)