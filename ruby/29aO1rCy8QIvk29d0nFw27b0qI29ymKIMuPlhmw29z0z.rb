
        
              def handle_prompt_none
        if params[:prompt] == 'none'
          if user_signed_in?
            handle_prompt_with_signed_in_user
          else
            handle_params_error('login_required', 'User must already be logged in when `prompt` is `none`')
          end
        else
          handle_params_error('invalid_request', 'The 'none' value cannot be used with any other prompt value')
        end
      end
    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end