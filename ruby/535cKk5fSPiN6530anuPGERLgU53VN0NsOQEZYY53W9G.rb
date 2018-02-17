
        
        module ActionView
  # = Action View Tag Helpers
  module Helpers #:nodoc:
    # Provides methods to generate HTML tags programmatically both as a modern
    # HTML5 compliant builder style and legacy XHTML compliant tags.
    module TagHelper
      extend ActiveSupport::Concern
      include CaptureHelper
      include OutputSafetyHelper
    
    module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
          def self.make_tree(associations)
        hash = {}
        walk_tree associations, hash
        hash
      end
    
        test 'head :no_content (204) does not return a content-type header' do
      headers = HeadController.action(:no_content).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
            s += ', ' unless s.empty?
        s += '#{k}#{value}'
      end
    end
  end
    
    require 'active_job'
    
          def wrap_delivery_behavior(mail, method = nil, options = nil) # :nodoc:
        method ||= delivery_method
        mail.delivery_handler = self
    
            def charset
          'UTF-8'
        end
    
    module Rails
  module Generators
    class MailerGenerator < NamedBase
      source_root File.expand_path('templates', __dir__)
    
      def translation_scope
    'devise.omniauth_callbacks'
  end
end

    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
      # The default method used while signing out
  mattr_accessor :sign_out_via
  @@sign_out_via = :delete
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
        # It doesn't make sense to send authenticate headers in AJAX requests
    # or if the user disabled them.
    def http_auth_header?
      scope_class.http_authenticatable && !request.xhr?
    end
    
      before_action :upgrade_warning, only: :index