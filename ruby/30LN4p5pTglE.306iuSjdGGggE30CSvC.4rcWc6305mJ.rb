
        
              if valid_type?(type)
        type.constantize.new(attributes).tap do |instance|
          instance.user = user if instance.respond_to?(:user=)
        end
      else
        const_get(:BASE_CLASS_NAME).constantize.new(attributes).tap do |instance|
          instance.type = type
          instance.user = user if instance.respond_to?(:user=)
        end
      end
    end
  end
end
    
        def log(message, options = {})
      return super unless dry_run?
      case options[:level] || 3
      when 0..2
        sev = Logger::DEBUG
      when 3
        sev = Logger::INFO
      else
        sev = Logger::ERROR
      end
    
      def working?
    last_receive_at && last_receive_at > options['expected_receive_period_in_days'].to_i.days.ago && !recent_error_logs?
  end
    
      def evernote_client
    EvernoteOAuth::Client.new(
      token:           evernote_oauth_token,
      consumer_key:    evernote_consumer_key,
      consumer_secret: evernote_consumer_secret,
      sandbox:         use_sandbox?
    )
  end
    
      def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
          class << self
        # Mark a given block of code as a 'busy' block of code, which will
        # register a SIGINT handler for the duration of the block. When a
        # SIGINT occurs, the `sig_callback` proc will be called. It is up
        # to the callback to behave properly and exit the application.
        def busy(sig_callback)
          register(sig_callback)
          return yield
        ensure
          unregister(sig_callback)
        end
    
          def []=(key, value)
        super(convert_key(key), value)
      end
    
                  # Read!
              data << io.readpartial(READ_CHUNK_SIZE).encode('UTF-8', Encoding.default_external)
            else
              # Do a simple non-blocking read on the IO object
              data << io.read_nonblock(READ_CHUNK_SIZE)
            end
          rescue Exception => e
            # The catch-all rescue here is to support multiple Ruby versions,
            # since we use some Ruby 1.9 specific exceptions.
    
        #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
        if extension_pathname.readable?
      ENV['BUNDLE_GEMFILE'] = extension_pathname.to_path
      break
    end
  end
end
    
    if (ip == nil || port == nil)
  puts 'Syntax: test.rb <ip> [port]\n'
  exit
end
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end
    
        # The type of the query (e.g. `'screen'` or `'print'`).
    #
    # When parsed as Sass code, this contains strings and SassScript nodes. When
    # parsed as CSS, it contains a single string (accessible via
    # \{#resolved_type}).
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    attr_accessor :type
    
          def all_gem_names
        core_gem_names + plugin_gem_names
      end
    
    # IMPORTANT: The Capistrano::Plugin system is not yet considered a stable,
# public API, and is subject to change without notice. Eventually it will be
# officially documented and supported, but for now, use it at your own risk.
#
# Base class for Capistrano plugins. Makes building a Capistrano plugin as easy
# as writing a `Capistrano::Plugin` subclass and overriding any or all of its
# three template methods:
#
# * set_defaults
# * register_hooks
# * define_tasks
#
# Within the plugin you can use any methods of the Rake or Capistrano DSLs, like
# `fetch`, `invoke`, etc. In cases when you need to use SSHKit's backend outside
# of an `on` block, use the `backend` convenience method. E.g. `backend.test`,
# `backend.execute`, or `backend.capture`.
#
# Package up and distribute your plugin class as a gem and you're good to go!
#
# To use a plugin, all a user has to do is install it in the Capfile, like this:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy
#
# Or, to install the plugin without its hooks:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy, load_hooks: false
#
class Capistrano::Plugin < Rake::TaskLib
  include Capistrano::DSL
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy

    
        it 'yields the properties for multiple roles' do
      recipient = mock('recipient')
      recipient.expects(:doit).with('example1.com', :redis, port: 6379, type: :slave)
      recipient.expects(:doit).with('example2.com', :redis, port: 6379, type: :master)
      recipient.expects(:doit).with('example3.com', :app, nil)
      dsl.role_properties(:redis, :app) do |host, role, props|
        recipient.doit(host, role, props)
      end
    end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end

    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
    module RuboCop
  module Cop
    class VariableForce
      # This class represents each assignment of a variable.
      class Assignment
        include Branchable
    
            # Construct annotated source string (like what we parse)
        #
        # Reconstruct a deterministic annotated source string. This is
        # useful for eliminating semantically irrelevant annotation
        # ordering differences.
        #
        # @example standardization
        #
        #     source1 = AnnotatedSource.parse(<<-RUBY)
        #     line1
        #     ^ Annotation 1
        #      ^^ Annotation 2
        #     RUBY
        #
        #     source2 = AnnotatedSource.parse(<<-RUBY)
        #     line1
        #      ^^ Annotation 2
        #     ^ Annotation 1
        #     RUBY
        #
        #     source1.to_s == source2.to_s # => true
        #
        # @return [String]
        def to_s
          reconstructed = lines.dup