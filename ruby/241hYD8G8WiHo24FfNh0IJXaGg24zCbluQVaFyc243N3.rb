
        
        gem 'redis', '>= 3', '< 5'
require 'redis'
    
        def env_for(url)
      Rack::MockRequest.env_for(url)
    end
  end
    
        rescue_from StandardError, with: :handle_exception_with_mailer_class
    
        # Access the message instance.
    def message
      @_message
    end
    
      before do
    Spaceship::Portal::Key.client = mock_client
  end
    
            if params[:default_keychain]
          # if there is no default keychain - setting the original will fail - silent this error
          begin
            Actions.lane_context[Actions::SharedValues::ORIGINAL_DEFAULT_KEYCHAIN] = Fastlane::Actions.sh('security default-keychain', log: false).strip
          rescue
          end
          commands << Fastlane::Actions.sh('security default-keychain -s #{keychain_path}', log: false)
        end
    
          it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
          it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
        # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy

    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')
    
      describe 'role_properties()' do
    before do
      dsl.role :redis, %w[example1.com example2.com], redis: { port: 6379, type: :slave }
      dsl.server 'example1.com', roles: %w{web}, active: true, web: { port: 80 }
      dsl.server 'example2.com', roles: %w{web redis}, web: { port: 81 }, redis: { type: :master }
      dsl.server 'example3.com', roles: %w{app}, primary: true
    end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end
    
    module LogStash::Api::AppHelpers
  # This method handle both of the normal flow *happy path*
  # and the display or errors, if more custom logic is added here
  # it will make sense to separate them.
  #
  # See `#error` method in the `LogStash::Api::Module::Base`
  def respond_with(data, options={})
    as     = options.fetch(:as, :json)
    filter = options.fetch(:filter, '')
    
          elsif download =~ /.tgz/
        prefix = download.gsub('.tgz', '').gsub('#{target}/', '')
        untar(download) do |entry|
          next unless out = eval_file(entry, file['files'], prefix)
          File.join(target, out)
        end
    
        private
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
            def in range
          @low, @high = range.first, range.last
          self
        end