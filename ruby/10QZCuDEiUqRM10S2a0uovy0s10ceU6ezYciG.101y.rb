
        
        def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
          attr_accessor :page, :layout, :content, :paginator
      attr_accessor :highlighter_prefix, :highlighter_suffix
    
            # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
            # This contains all the synced folder implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Integer>>]
        attr_reader :synced_folders
    
              # Persist through the set of invalid methods
          this_invalid  = @__invalid_methods || Set.new
          other_invalid = other.instance_variable_get(:'@__invalid_methods') || Set.new
          result.instance_variable_set(:'@__invalid_methods', this_invalid + other_invalid)
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is installed. This should return true or false.
        #
        # If the provider is not installed and Vagrant determines it is
        # able to install this provider, then it will do so. Installation
        # is done by calling Environment.install_provider.
        #
        # If Environment.can_install_provider? returns false, then an error
        # will be shown to the user.
        def self.installed?
          # By default return true for backwards compat so all providers
          # continue to work.
          true
        end
    
    # Get the version string. If this is being installed from Git,
# this includes the proper prerelease version.
def get_version
  File.read(scope('VERSION').strip)
end
    
    require 'sass/logger'
require 'sass/util'
    
        def parse_if_directive(parent, line, root, value, offset)
      raise SyntaxError.new('Invalid if directive '@if': expected expression.') unless value
      Tree::IfNode.new(parse_script(value, :offset => offset))
    end
    
        # Returns a string representation of the Sass backtrace.
    #
    # @param default_filename [String] The filename to use for unknown files
    # @see #sass_backtrace
    # @return [String]
    def sass_backtrace_str(default_filename = 'an unknown file')
      lines = message.split('\n')
      msg = lines[0] + lines[1..-1].
        map {|l| '\n' + (' ' * 'Error: '.size) + l}.join
      'Error: #{msg}' +
        sass_backtrace.each_with_index.map do |entry, i|
          '\n        #{i == 0 ? 'on' : 'from'} line #{entry[:line]}' +
            ' of #{entry[:filename] || default_filename}' +
            (entry[:mixin] ? ', in `#{entry[:mixin]}'' : '')
        end.join
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
    module Sass
  module Importers
    # The default importer, used for any strings found in the load path.
    # Simply loads Sass files from the filesystem using the default logic.
    class Filesystem < Base
      attr_accessor :root
    
        worker_count.times do |count|
      template '/data/#{app}/shared/config/sidekiq_#{count}.yml' do
        owner node[:owner_name]
        group node[:owner_name]
        mode 0644
        source 'sidekiq.yml.erb'
        variables({
          :require => '/data/#{app}/current'
        })
      end
    end
    
    
    end
  end
end

    
          Sidekiq.redis do |conn|
        conn.pipelined do
          jobs_to_requeue.each do |queue, jobs|
            conn.rpush('queue:#{queue}', jobs)
          end
        end
      end
      Sidekiq.logger.info('Pushed #{inprogress.size} jobs back to Redis')
    rescue => ex
      Sidekiq.logger.warn('Failed to requeue #{inprogress.size} jobs: #{ex.message}')
    end
    
        def self.logger
      defined?(@logger) ? @logger : initialize_logger
    end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end