
        
          # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
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
    
    require 'uri'
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^the current symlink points to that specific release$/) do
  specific_release_path = TestApp.releases_path.join(@rollback_release)
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def select?(options)
        options.each do |k, v|
          callable = v.respond_to?(:call) ? v : ->(server) { server.fetch(v) }
          result = \
            case k
            when :filter, :select
              callable.call(self)
            when :exclude
              !callable.call(self)
            else
              fetch(k) == v
            end
          return false unless result
        end
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
          class ValidatedQuestion < Question
        def initialize(validator)
          @validator = validator
        end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
          !File.exists?(File.join(LogStash::Environment::LOGSTASH_HOME, 'x-pack'))
    end
    
            return nil
      end
    end
  end
end end end

    
      def update_gems!
    # If any error is raise inside the block the Gemfile will restore a backup of the Gemfile
    previous_gem_specs_map = find_latest_gem_specs
    
      describe '#system?' do
    context 'when the pipeline is a system pipeline' do
      let(:settings) { mock_settings({ 'pipeline.system' => true })}
    
    task :spec    => 'spec:all'
task :default => :spec
    
          # Returns the delta between this pair's key and the argument pair's.
      #
      # @note Keys on the same line always return a delta of 0
      # @note Keyword splats always return a delta of 0 for right alignment
      #
      # @param [Symbol] alignment whether to check the left or right side
      # @return [Integer] the delta between the two keys
      def key_delta(other, alignment = :left)
        HashElementDelta.new(self, other).key_delta(alignment)
      end
    
          # Calls the given block for each condition node in the `when` branch.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_condition
        return conditions.to_enum(__method__) unless block_given?