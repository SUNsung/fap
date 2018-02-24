
        
          test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
          # Calls this block after #reset is called on the instance. Used for resetting external collaborators, like Time.zone.
      def resets(&block)
        set_callback :reset, :after, &block
      end
    
          def set_body
        self.response_body = 'Success'
      end
    end
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
    module ActionMailer
  # Implements the ActiveSupport::LogSubscriber for logging notifications when
  # email is delivered or received.
  class LogSubscriber < ActiveSupport::LogSubscriber
    # An email was delivered.
    def deliver(event)
      info do
        recipients = Array(event.payload[:to]).join(', ')
        'Sent mail to #{recipients} (#{event.duration.round(1)}ms)'
      end
    
    # Emulate AV railtie
require 'action_view'
ActionMailer::Base.include(ActionView::Layouts)
    
          if cask_version.empty?
        raise CaskError, 'Cannot create metadata path with empty version.'
      end
    
    desc 'Initial setup for Octopress: copies the default theme into the path of Jekyll's generator. Rake install defaults to rake install[classic] to install a different theme run rake install[some_theme_name]'
task :install, :theme do |t, args|
  if File.directory?(source_dir) || File.directory?('sass')
    abort('rake aborted!') if ask('A theme is already installed, proceeding will overwrite existing files. Are you sure?', ['y', 'n']) == 'n'
  end
  # copy theme into working Jekyll directories
  theme = args.theme || 'classic'
  puts '## Copying '+theme+' theme into ./#{source_dir} and ./sass'
  mkdir_p source_dir
  cp_r '#{themes_dir}/#{theme}/source/.', source_dir
  mkdir_p 'sass'
  cp_r '#{themes_dir}/#{theme}/sass/.', 'sass'
  mkdir_p '#{source_dir}/#{posts_dir}'
  mkdir_p public_dir
end