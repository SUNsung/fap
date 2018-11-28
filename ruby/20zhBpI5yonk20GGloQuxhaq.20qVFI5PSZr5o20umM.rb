
        
        desc 'Open an irb session preloaded with this library'
task :console do
  sh 'irb -rubygems -r ./lib/#{name}.rb'
end

    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
            def initialize(_opts)
          # If EventMachine SSL support on Windows ever gets better, the code below will
          # set up the reactor to handle SSL
          #
          # @ssl_enabled = opts['ssl_cert'] && opts['ssl_key']
          # if @ssl_enabled
          #   em_opts[:tls_options] = {
          #   :private_key_file => Jekyll.sanitized_path(opts['source'], opts['ssl_key']),
          #   :cert_chain_file  => Jekyll.sanitized_path(opts['source'], opts['ssl_cert'])
          #   }
          #   em_opts[:secure] = true
          # end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
          private
    
          private
    
    if defined?(::ActionDispatch::Request::Session) &&
    !::ActionDispatch::Request::Session.method_defined?(:each)
  # mperham/sidekiq#2460
  # Rack apps can't reuse the Rails session store without
  # this monkeypatch, fixed in Rails 5.
  class ActionDispatch::Request::Session
    def each(&block)
      hash = self.to_hash
      hash.each(&block)
    end
  end
end

    
        def initialize(env, block)
      @_erb = false
      @env = env
      @block = block
      @@files ||= {}
    end
    
    Given /^I comment out lines that contain '([^']+)' in '([^']+)'$/ do |contains, glob|
  cd('.') do
    Dir.glob(glob).each do |file|
      transform_file(file) do |content|
        content.gsub(/^(.*?#{contains}.*?)$/) { |line| '# #{line}' }
      end
    end
  end
end
    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
    After do
  ORIGINAL_BUNDLE_VARS.each_pair do |key, value|
    ENV[key] = value
  end
end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        def self.register(klass, attachment_name, attachment_options)
      instance.register(klass, attachment_name, attachment_options)
    end
    
        def define_query
      name = @name
      @klass.send :define_method, '#{@name}?' do
        send(name).file?
      end
    end
    
        # Returns the fingerprint of the instance.
    def fingerprint attachment, style_name
      attachment.fingerprint
    end