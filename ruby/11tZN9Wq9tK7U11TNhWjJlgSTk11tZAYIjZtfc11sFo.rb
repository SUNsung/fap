
        
                  def add_options(option_tags, options, value = nil)
            if options[:include_blank]
              option_tags = tag_builder.content_tag_string('option', options[:include_blank].kind_of?(String) ? options[:include_blank] : nil, value: '') + '\n' + option_tags
            end
            if value.blank? && options[:prompt]
              tag_options = { value: '' }.tap do |prompt_opts|
                prompt_opts[:disabled] = true if options[:disabled] == ''
                prompt_opts[:selected] = true if options[:selected] == ''
              end
              option_tags = tag_builder.content_tag_string('option', prompt_text(options[:prompt]), tag_options) + '\n' + option_tags
            end
            option_tags
          end
    
              def checked?(value)
            case value
            when TrueClass, FalseClass
              value == !!@checked_value
            when NilClass
              false
            when String
              value == @checked_value
            else
              if value.respond_to?(:include?)
                value.include?(@checked_value)
              else
                value.to_i == @checked_value.to_i
              end
            end
          end
    
              def select_type
            self.class.select_type
          end
    
        def render
      raise NotImplementedError
    end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
        def default_failure_app(options)
      @failure_app = options[:failure_app] || Devise::FailureApp
      if @failure_app.is_a?(String)
        ref = Devise.ref(@failure_app)
        @failure_app = lambda { |env| ref.get.call(env) }
      end
    end
    
            selected_modules.each do |m|
          mod = Devise::Models.const_get(m.to_s.classify)
    
    module Admin
  class ConfirmationsController < BaseController
    before_action :set_user
    before_action :check_confirmation, only: [:resend]
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
    # when launched as a script, not require'd, (currently from bin/logstash and bin/logstash-plugin) the first
# argument is the path of a Ruby file to require and a LogStash::Runner class is expected to be
# defined and exposing the LogStash::Runner#main instance method which will be called with the current ARGV
# currently lib/logstash/runner.rb and lib/pluginmanager/main.rb are called using this.
if $0 == __FILE__
  LogStash::Bundler.setup!({:without => [:build, :development]})
  require_relative 'patches/jar_dependencies'
    
        def self.find_by_name_with_wildcards(pattern)
      re = transform_pattern_into_re(pattern)
      ::Gem::Specification.find_all.select do |specification|
        specification.name =~ re
      end
    end
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
        after :each do
      logstash.uninstall
    end