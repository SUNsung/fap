
        
              m1 = NumericData.find_by(
        bank_balance: BigDecimal('NaN'),
        big_bank_balance: BigDecimal('NaN')
      )
    
      def test_touching_a_record_updates_its_timestamp
    previous_salary = @developer.salary
    @developer.salary = previous_salary + 10000
    @developer.touch
    
            private
    
              super(base_dir)
        end
    
        Projects::CleanupService.new(project, user).execute
    
      class_methods do
    def chronic_duration_attr_reader(virtual_attribute, source_attribute)
      define_method(virtual_attribute) do
        chronic_duration_attributes[virtual_attribute] || output_chronic_duration_attribute(source_attribute)
      end
    end
    
          desc 'Get single deploy key' do
        success Entities::DeployKeysProject
      end
      params do
        requires :key_id, type: Integer, desc: 'The ID of the deploy key'
      end
      get ':id/deploy_keys/:key_id' do
        key = find_by_deploy_key(user_project, params[:key_id])
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
          def add_fragment_back_to_path(uri, path)
        [path, uri.fragment].compact.join('#')
      end
    end
  end
end

    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
    require 'devise/models/authenticatable'

    
          b = $count
      assert_equal a, b
      assert_equal false, p.thread.status
      refute mgr.latest_error, mgr.latest_error.to_s
    end
  end
end

    
        assert_equal dead_set.find_job('123123').value, serialized_job
  end
    
        describe 'when the exception does not have a backtrace' do
      it 'does not fail' do
        exception = ExceptionHandlerTestException.new
        assert_nil exception.backtrace
    
      it 'allows delay of any ole class method' do
    q = Sidekiq::Queue.new
    assert_equal 0, q.size
    SomeClass.delay.doit(Date.today)
    assert_equal 1, q.size
  end
    
    require 'stringex'
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
      # Checks for excerpts (helpful for template conditionals)
  def has_excerpt(input)
    input =~ /<!--\s*more\s*-->/i ? true : false
  end
    
    module Jekyll