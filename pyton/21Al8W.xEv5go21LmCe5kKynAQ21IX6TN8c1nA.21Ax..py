
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        def __init__(self, operators, supervisors, directors):
        self.operators = operators
        self.supervisors = supervisors
        self.directors = directors
        self.queued_calls = deque()
    
    print 'POTFILE := ' + os.path.join(I18N_PATH, 'r2.pot')
    
        paths = {
        'root': root_path,
        'controllers': os.path.join(root_path, 'controllers'),
        'templates': [os.path.join(root_path, 'templates')],
    }
    
    def set_extension(environ, ext):
    environ['extension'] = ext
    environ['render_style'], environ['content_type'] = extension_mapping[ext]

    
    # patch out SSRFable/XSSable endpoints in older versions of weberror
import weberror.evalexception
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)
    
            To request a new CAPTCHA,
        use [/api/new_captcha](#POST_api_new_captcha).
        '''
        image = captcha.get_image(iden)
        f = StringIO.StringIO()
        image.save(f, 'PNG')
        response.content_type = 'image/png;'
        return f.getvalue()
    

    
        @validate(
        container_id=VGTMContainerId('id')
    )
    def GET_gtm(self, container_id):
        return GoogleTagManager(container_id=container_id).render()

    
    
# Magic Number，不设置可能无法正常执行，请根据具体截图从上到下按需设置
under_game_score_y = config['under_game_score_y']
# 长按的时间系数，请自己根据实际情况调节
press_coefficient = config['press_coefficient']
# 二分之一的棋子底座高度，可能要调节
piece_base_height_1_2 = config['piece_base_height_1_2']
# 棋子的宽度，比截图中量到的稍微大一点比较安全，可能要调节
piece_body_width = config['piece_body_width']
time_coefficient = config['press_coefficient']