
        
                def content_tag_string(name, content, options, escape = true)
          tag_options = tag_options(options, escape) if options
          content     = ERB::Util.unwrapped_html_escape(content) if escape
          '<#{name}#{tag_options}>#{PRE_CONTENT_STRINGS[name]}#{content}</#{name}>'.html_safe
        end
    
      def test_check_parameters
    with_test_route_set do
      get '/'
      assert_equal '', @controller.response.body
    end
  end
    
          add_delivery_method :test, Mail::TestMailer
    end
    
            def set_expected_mail
          @expected = Mail.new
          @expected.content_type ['text', 'plain', { 'charset' => charset }]
          @expected.mime_version = '1.0'
        end
    
          def warnings
        @template.warnings
      end
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
          def auth_user_unless_prompt_none!
        prompt = params[:prompt]
        if prompt && prompt.include?('none')
          handle_prompt_none
        elsif prompt && prompt.include?('login')
          new_params = params.except('controller', 'action').permit!.to_h.merge(prompt: prompt.remove('login'))
          reauthenticate(new_params)
        else
          authenticate_user!
        end
      end