
        
                  def invoke_callback(*)
            @event_loop.post { super }
          end
    
    class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
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
    
    class MyCustomDelivery
end
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      # Helper for use in before_actions where no authentication is required.
  #
  # Example:
  #   before_action :require_no_authentication, only: :new
  def require_no_authentication
    assert_is_devise_resource!
    return unless is_navigational_format?
    no_input = devise_mapping.no_input_strategies
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
        # .btn { ... } -> @mixin btn { ... }; .btn { @include btn }
    def extract_mixins_from_selectors(file, selectors_to_mixins)
      selectors_to_mixins.each do |selector, mixin|
        file = replace_rules file, Regexp.escape(selector), prefix: false do |selector_css|
          log_transform '#{selector} { ... } -> @mixin #{mixin} { ... }; #{selector} { @include #{mixin} } ', from: 'extract_mixins_from_selectors'
          <<-SCSS
// [converter] extracted from `#{selector}` for libsass compatibility
@mixin #{mixin} {#{unwrap_rule_block(selector_css)}
}
// [converter] extracted as `@mixin #{mixin}` for libsass compatibility
#{selector} {
  @include #{mixin};
}
          SCSS
        end
      end
      file
    end
    
      # Code is not reloaded between requests.
  config.cache_classes = true
    
    lib_path = root.join('lib').to_path
    
              # Extract the form
          res = '<form'
          form.attributes.each do |attr|
            res << ' #{attr[0]}='#{attr[1].gsub(''', '')}''
          end
          res << '> '
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    require 'rubygems'
require 'rjb'
    
      belongs_to :status_message
  has_many :poll_answers, -> { order 'id ASC' }, dependent: :destroy
  has_many :poll_participations, dependent: :destroy
  has_one :author, through: :status_message
    
      desc 'Release all gems to rubygems'
  task release: :build do
    sh 'git tag -a -m \'Version #{version}\' v#{version}'
    
    module LogStash::Api::AppHelpers
  # This method handle both of the normal flow *happy path*
  # and the display or errors, if more custom logic is added here
  # it will make sense to separate them.
  #
  # See `#error` method in the `LogStash::Api::Module::Base`
  def respond_with(data, options={})
    as     = options.fetch(:as, :json)
    filter = options.fetch(:filter, '')
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end