
        
        def normalize_bullets(markdown)
  markdown.gsub(%r!\n\s{2}\*{1}!, '\n-')
end
    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
      all_files       = `git ls-files -z`.split('\x0')
  s.files         = all_files.grep(%r!^(exe|lib|rubocop)/|^.rubocop.yml$!)
  s.executables   = all_files.grep(%r!^exe/!) { |f| File.basename(f) }
  s.bindir        = 'exe'
  s.require_paths = ['lib']
    
            def create_sample_files(path)
          FileUtils.cp_r site_template + '/.', path
          FileUtils.chmod_R 'u+w', path
          FileUtils.rm File.expand_path(scaffold_path, path)
        end
    
    # TODO:
# group :mongoid do
#   gem 'mongoid', '~> 4.0.0'
# end

    
      def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
        # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
    require 'uri'
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
    def attach_attachment(name, definition = nil)
  snippet = 'has_attached_file :#{name}'
  if definition
    snippet += ', \n'
    snippet += definition
  end
  snippet += '\ndo_not_validate_attachment_file_type :#{name}\n'
  cd('.') do
    transform_file('app/models/user.rb') do |content|
      content.sub(/end\Z/, '#{snippet}\nend')
    end
  end
end
    
      argument :attachment_names, :required => true, :type => :array, :desc => 'The names of the attachment(s) to add.',
           :banner => 'attachment_one attachment_two attachment_three ...'