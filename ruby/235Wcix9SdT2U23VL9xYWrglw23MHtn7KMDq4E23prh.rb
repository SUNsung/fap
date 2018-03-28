
        
        require 'abstract_unit'
    
          def index
        @text ||= nil
        self.response_body = @text.to_s
      end
    end
    
      def test_register_and_use_json_simple
    with_test_route_set do
      with_params_parsers Mime[:json] => Proc.new { |data| ActiveSupport::JSON.decode(data)['request'].with_indifferent_access } do
        post '/',
          params: '{'request':{'summary':'content...','title':'JSON'}}',
          headers: { 'CONTENT_TYPE' => 'application/json' }
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        find_union(segments, Group).order_id_desc
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
    
        def form_configurable_fields
      self._form_configurable_fields
    end
    
        # Validates that {#boundary} is {#valid_ip_or_range? a valid IP address or
    # IP address range}. Due to this not being tested before it was moved here
    # from Mdm, the default workspace does not validate. We always validate boundaries
    # and a workspace may have a blank default boundary.
    #
    # @return [void]
    def boundary_must_be_ip_range
      unless boundary.blank?
        begin
          boundaries = Shellwords.split(boundary)
        rescue ArgumentError
          boundaries = []
        end
    
        end
    
          case matched
    
    	def dump_all
		block.each do |block|
			block.each do |line|
				print '#{line}\n'
			end
		end
	end
    
        # See \{#type}.
    # @return [String]
    def resolved_type
      # type should contain only a single string
      type.first || ''
    end
    
    module Sass
  # Runs a SassScript read-eval-print loop.
  # It presents a prompt on the terminal,
  # reads in SassScript expressions,
  # evaluates them,
  # and prints the result.
  class Repl
    # @param options [{Symbol => Object}] An options hash.
    def initialize(options = {})
      @options = options
    end
    
        begin
      create_scaffold(source, @target_path)
    rescue Errno::EACCES => exception
      report_exception('Permission denied when executing the plugin manager', exception)
    rescue => exception
      report_exception('Plugin creation Aborted', exception)
    end
  end