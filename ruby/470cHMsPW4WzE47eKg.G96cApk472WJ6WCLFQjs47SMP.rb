
        
          def self.clear(user, key, sequence)
    d = find_draft(user, key)
    d.destroy if d && d.sequence <= sequence
  end
    
        def <<(extension)
      return unless valid_extension?(extension)
    
        def script_assets(base = base_url, s3_cdn = GlobalSetting.s3_cdn_url, cdn = GlobalSetting.cdn_url)
      SCRIPT_ASSET_DIRECTORIES.map do |dir, can_use_s3_cdn, can_use_cdn|
        if can_use_s3_cdn && s3_cdn
          s3_cdn + dir
        elsif can_use_cdn && cdn
          cdn + dir
        else
          base + dir
        end
      end
    end
    
          return response unless html_response?(headers)
      ContentSecurityPolicy.base_url = request.host_with_port if Rails.env.development?
    
      def update_time_read!
    UserStat.update_time_read!(id)
  end
    
            # Parses the options given an OptionParser instance.
        #
        # This is a convenience method that properly handles duping the
        # originally argv array so that it is not destroyed.
        #
        # This method will also automatically detect '-h' and '--help'
        # and print help. And if any invalid options are detected, the help
        # will be printed, as well.
        #
        # If this method returns `nil`, then you should assume that help
        # was printed and parsing failed.
        def parse_options(opts=nil)
          # Creating a shallow copy of the arguments so the OptionParser
          # doesn't destroy the originals.
          argv = @argv.dup
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
    module Vagrant
  module Plugin
    module V1
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
              # Register a new guest class only if a name was given
          data[:guests].register(name.to_sym, &block) if name != UNSET_VALUE
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # This method will split the argv given into three parts: the
        # flags to this command, the subcommand, and the flags to the
        # subcommand. For example:
        #
        #     -v status -h -v
        #
        # The above would yield 3 parts:
        #
        #     ['-v']
        #     'status'
        #     ['-h', '-v']
        #
        # These parts are useful because the first is a list of arguments
        # given to the current command, the second is a subcommand, and the
        # third are the commands given to the subcommand.
        #
        # @return [Array] The three parts.
        def split_main_and_subcommand(argv)
          # Initialize return variables
          main_args   = nil
          sub_command = nil
          sub_args    = []
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
            def initialize(argv)
          @use_regex = argv.flag?('regex')
          @show_all = argv.flag?('show-all')
          @query = argv.shift_argument
          @query = @query.gsub('.podspec', '') unless @query.nil?
          super
        end
    
    def prev_version
  return prev_feature + '.0' if source_version.end_with? '.0'
  source_version.gsub(/\d+$/) { |s| s.to_i - 1 }
end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
      # fetch data
  fields = {
    :authors => `git shortlog -sn`.force_encoding('utf-8').scan(/[^\d\s].*/),
    :email   => ['mail@zzak.io', 'konstantin.haase@gmail.com'],
    :files   => %w(License README.md Rakefile Gemfile rack-protection.gemspec) + Dir['lib/**/*']
  }
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
      it 'sets a new csrf token for the session in env, even after a 'safe' request' do
    get('/', {}, {})
    expect(env['rack.session'][:csrf]).not_to be_nil
  end