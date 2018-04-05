
        
            @notification_setting = current_user.notification_settings_for(resource)
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end
    
          attr_reader :agent
    
        i0, s0 = index, []
    if has_terminal?('[', false, index)
      r1 = instantiate_node(SyntaxNode,input, index...(index + 1))
      @index += 1
    else
      terminal_parse_failure('[')
      r1 = nil
    end
    s0 << r1
    if r1
      s2, i2 = [], index
      loop do
        if has_terminal?('\G[^\\],]', true, index)
          r3 = true
          @index += 1
        else
          r3 = nil
        end
        if r3
          s2 << r3
        else
          break
        end
      end
      if s2.empty?
        @index = i2
        r2 = nil
      else
        r2 = instantiate_node(SyntaxNode,input, i2...index, s2)
      end
      s0 << r2
      if r2
        if has_terminal?(']', false, index)
          r4 = instantiate_node(SyntaxNode,input, index...(index + 1))
          @index += 1
        else
          terminal_parse_failure(']')
          r4 = nil
        end
        s0 << r4
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::SelectorElement,input, i0...index, s0)
      r0.extend(SelectorElement0)
    else
      @index = i0
      r0 = nil
    end