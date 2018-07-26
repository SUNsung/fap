
        
          class FeatureTopicUsers < Jobs::Base
    
        sidekiq_options queue: 'critical'
    
      test 'error message is configurable by resource name' do
    store_translations :en, devise: { failure: { admin: { invalid: 'Invalid credentials' } } } do
      sign_in_as_admin do
        fill_in 'password', with: 'abcdef'
      end
    
      # PUT /resource/password
  def update
    self.resource = resource_class.reset_password_by_token(resource_params)
    yield resource if block_given?
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        version '4' do
      self.release = '4.1.1'
      self.base_url = 'https://getbootstrap.com/docs/4.1/'
      self.root_path = 'getting-started/introduction/'
    
          html_filters.push 'coffeescript/clean_html_v1', 'coffeescript/entries_v1', 'title'
    
        version 'PHP' do
      self.base_url = 'https://api.haxe.org/php/'
    end
    
          def delete(key)
        super(convert_key(key))
      end
    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
        # See \{#modifier}.
    # @return [String]
    def resolved_modifier
      # modifier should contain only a single string
      modifier.first || ''
    end
    
          before_string_or_interp =
        if interp.before
          to_string_interpolation(interp.before)
        else
          string_literal('')
        end
      if interp.before && interp.whitespace_before
        before_string_or_interp = concat(before_string_or_interp, string_literal(' '))
      end
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
    
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
      it 'accepts requests with the same Accept-Language header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    expect(session).not_to be_empty
  end
    
      # Removes trailing forward slash from a string for easily appending url segments
  def strip_slash(input)
    if input =~ /(.+)\/$|^\/$/
      input = $1
    end
    input
  end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def description
          'have an attachment named #{@attachment_name}'
        end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} should not be required'
        end
        alias negative_failure_message failure_message_when_negated