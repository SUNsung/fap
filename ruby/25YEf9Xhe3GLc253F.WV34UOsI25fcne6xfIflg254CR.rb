      protected
    
          def stored_location_key_for(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        '#{scope}_return_to'
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
            if Devise.activerecord51?
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:will_save_change_to_encrypted_password?) && will_save_change_to_encrypted_password?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('will_save_change_to_#{attribute}?') && send('will_save_change_to_#{attribute}?')
            end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
    World(RemoteCommandHelpers)

    
            def to_h
          @properties
        end
    
    module Capistrano
  class Configuration
    # Holds the variables assigned at Capistrano runtime via `set` and retrieved
    # with `fetch`. Does internal bookkeeping to help identify user mistakes
    # like spelling errors or unused variables that may lead to unexpected
    # behavior.
    class Variables
      CAPISTRANO_LOCATION = File.expand_path('../..', __FILE__).freeze
      IGNORED_LOCATIONS = [
        '#{CAPISTRANO_LOCATION}/configuration/variables.rb:',
        '#{CAPISTRANO_LOCATION}/configuration.rb:',
        '#{CAPISTRANO_LOCATION}/dsl/env.rb:',
        '/dsl.rb:',
        '/forwardable.rb:'
      ].freeze
      private_constant :CAPISTRANO_LOCATION, :IGNORED_LOCATIONS
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
      after(:each) do
    logstash.uninstall
  end
    
            until(data.length == record_length)
          data << file.read(TAR_CHUNK_SIZE)
        end
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
      def build!(params)
    # TODO(sissel): Support these somehow, perhaps with execs and files.
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
        when 'post-install'
        when 'pre-uninstall'
        when 'post-uninstall'
      end # case name
    end # self.scripts.each
    
            # dependency name prefixing is optional, if enabled, a name 'foo' will
        # become 'python-foo' (depending on what the python_package_name_prefix
        # is)
        name = fix_name(name) if attributes[:python_fix_dependencies?]
    
      # Generate the proper tar flags based on the path name.
  def tar_compression_flag(path)
    case path
      when /\.tar\.bz2$/
        return '-j'
      when /\.tar\.gz$|\.tgz$/
        return '-z'
      when /\.tar\.xz$/
        return '-J'
      else
        return nil
    end
  end # def tar_compression_flag
end # class FPM::Package::Tar

    
          @io.write header