
        
          ActiveSupport.run_load_hooks(:devise_controller, self)
end

    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
                    if provider_to_use && provider_to_use != active_provider
                  # We found an active machine with a provider that doesn't
                  # match the requested provider. Show an error.
                  raise Errors::ActiveMachineWithDifferentProvider,
                    name: active_name.to_s,
                    active_provider: active_provider.to_s,
                    requested_provider: provider_to_use.to_s
                else
                  # Use this provider and exit out of the loop. One of the
                  # invariants [for now] is that there shouldn't be machines
                  # with multiple providers.
                  @logger.info('Active machine found with name #{active_name}. ' +
                               'Using provider: #{active_provider}')
                  provider_to_use = active_provider
                  break
                end
              end
            end
    
        # Register a key with a lazy-loaded value.
    #
    # If a key with the given name already exists, it is overwritten.
    def register(key, &block)
      raise ArgumentError, 'block required' if !block_given?
      @items[key] = block
    end
    
            it 'does not use two's complement form for negative numbers for formats bBoxX' do
          format('%+b', -10).should == '-1010'
          format('%+B', -10).should == '-1010'
          format('%+o', -87).should == '-127'
          format('%+x', -196).should == '-c4'
          format('%+X', -196).should == '-C4'
        end
      end
    end
    
      if config.log_to.include? 'file'
    # Configure an appender that will write log events to a file.
    if AppConfig.environment.logging.logrotate.enable?
      # The file will be rolled on a daily basis, and the rolled files will be kept
      # the configured number of days. Older files will be deleted. The default pattern
      # layout is used when formatting log events into strings.
      Logging.appenders.rolling_file('file',
                                     filename:      config.paths['log'].first,
                                     keep:          AppConfig.environment.logging.logrotate.days.to_i,
                                     age:           'daily',
                                     truncate:      false,
                                     auto_flushing: true,
                                     layout:        layout
                                    )
    else
      # No file rolling, use logrotate to roll the logfile.
      Logging.appenders.file('file',
                             filename:      config.paths['log'].first,
                             truncate:      false,
                             auto_flushing: true,
                             layout:        layout
                            )
    end
  end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
        context 'on a post from a contact' do
      before do
        aspect_to_post = bob.aspects.where(:name => 'generic').first
        @post = bob.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
      describe '#index' do
    context 'with a private post' do
      before do
        @alices_aspect = alice.aspects.where(name: 'generic').first
        @post = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
      end
    
      desc <<END
Run a profile of sass.
  TIMES=n sets the number of runs. Defaults to 1000.
  FILE=str sets the file to profile. Defaults to 'complex'.
  OUTPUT=str sets the ruby-prof output format.
    Can be Flat, CallInfo, or Graph. Defaults to Flat. Defaults to Flat.
END
  task :profile do
    times  = (ENV['TIMES'] || '1000').to_i
    file   = ENV['FILE']
    
      # Compile a file on disk to CSS.
  #
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  #
  # @overload compile_file(filename, options = {})
  #   Return the compiled CSS rather than writing it to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @return [String] The compiled CSS.
  #
  # @overload compile_file(filename, css_filename, options = {})
  #   Write the compiled CSS to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @param css_filename [String] The location to which to write the compiled CSS.
  def self.compile_file(filename, *args)
    options = args.last.is_a?(Hash) ? args.pop : {}
    css_filename = args.shift
    result = Sass::Engine.for_file(filename, options).render
    if css_filename
      options[:css_filename] ||= css_filename
      open(css_filename, 'w') {|css_file| css_file.write(result)}
      nil
    else
      result
    end
  end
end
    
    module Sass
  module CacheStores
    # A backend for the Sass cache using the filesystem.
    class Filesystem < Base
      # The directory where the cached files will be stored.
      #
      # @return [String]
      attr_accessor :cache_location
    
    Backtrace:\n#{e.backtrace.join('\n').gsub('*/', '*\\/')}
*/
body:before {
  white-space: pre;
  font-family: monospace;
  content: '#{header.gsub(''', '\'').gsub('\n', '\\A ')}'; }
END
      end
    
        # Processes the options set by the command-line arguments. In particular,
    # sets `@options[:input]` and `@options[:output]` to appropriate IO streams.
    #
    # This is meant to be overridden by subclasses
    # so they can run their respective programs.
    def process_result
      input, output = @options[:input], @options[:output]
      args = @args.dup
      input ||=
        begin
          filename = args.shift
          @options[:filename] = filename
          open_file(filename) || $stdin
        end
      @options[:output_filename] = args.shift
      output ||= @options[:output_filename] || $stdout
      @options[:input], @options[:output] = input, output
    end
    
        # @param args [Array<String>] The command-line arguments
    def initialize(args, default_syntax)
      super(args)
      @options[:sourcemap] = :auto
      @options[:for_engine] = {
        :load_paths => default_sass_path
      }
      @default_syntax = default_syntax
    end
    
          # If a full uri is passed, this removes the root from it
      # otherwise returns the name unchanged
      def remove_root(name)
        if name.index(@root + '/') == 0
          name[(@root.length + 1)..-1]
        else
          name
        end
      end
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
      class ImageTag < Liquid::Tag
    @img = nil
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end
    
      def output(output_path)
    # See https://github.com/jordansissel/fpm/issues/1090
    # require xz later, because this triggers a load of liblzma.so.5 that is
    # unavailable on older CentOS/RH distros.
    require 'xz'
    output_check(output_path)
    
        # do channel-update if requested
    if attributes[:pear_channel_update?]
      channel = attributes[:pear_channel] || 'pear'
      logger.info('Updating the channel', :channel => channel)
      safesystem('pear', '-c', config, 'channel-update', channel)
    end
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split