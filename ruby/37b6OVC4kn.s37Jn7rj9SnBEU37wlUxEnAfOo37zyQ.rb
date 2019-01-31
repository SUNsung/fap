
        
                private
    
    module ActionView
  # = Action View Railtie
  class Railtie < Rails::Engine # :nodoc:
    config.action_view = ActiveSupport::OrderedOptions.new
    config.action_view.embed_authenticity_token_in_remote_forms = nil
    config.action_view.debug_missing_translation = true
    config.action_view.default_enforce_utf8 = nil
    config.action_view.finalize_compiled_template_methods = true
    
          redirect_to admin_report_path(@report)
    end
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
end

    
      def save_file(path, content, mode='w')
    dir = File.dirname(path)
    FileUtils.mkdir_p(dir) unless File.directory?(dir)
    File.open(path, mode) { |file| file.write(content) }
  end
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
    Given(/^a custom task to run in the event of a failure$/) do
  safely_remove_file(TestApp.shared_path.join('failed'))
  TestApp.copy_task_to_test_app('spec/support/tasks/failed.rake')
end
    
        extend Forwardable
    attr_reader :variables
    def_delegators :variables,
                   :set, :fetch, :fetch_for, :delete, :keys, :validate
    
          private
    
        def prefers_plain_text?(env)
      !(Request.new(env).preferred_type('text/plain','text/html') == 'text/html') &&
      [/curl/].index { |item| item =~ env['HTTP_USER_AGENT'] }
    end
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
      it 'sets a new csrf token for the session in env, even after a 'safe' request' do
    get('/', {}, {})
    expect(env['rack.session'][:csrf]).not_to be_nil
  end