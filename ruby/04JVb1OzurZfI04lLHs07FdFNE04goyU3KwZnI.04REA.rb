    # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
        # Releases a local lock on a machine. This does not acquire any locks
    # so make sure to lock around it.
    #
    # @param [String] id
    def unlocked_release(id)
      lock_file = @machine_locks[id]
      if lock_file
        lock_file.close
        begin
          File.delete(lock_file.path)
        rescue Errno::EACCES
          # Another process is probably opened it, no problem.
        end
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
    module Vagrant
  module Plugin
    module V2
      # This is the superclass for all V2 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
        # Converts this registry to a hash
    def to_hash
      result = {}
      self.each do |key, value|
        result[key] = value
      end
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
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
    
          def assert_value_or_block_not_both(value, block)
        return if value.nil? || block.nil?
        raise Capistrano::ValidationError,
              'Value and block both passed to Configuration#set'
      end
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end
    
    class SinatraWorker
  include Sidekiq::Worker
    
          def create_worker_test
        template_file = File.join(
            'test/workers',
            class_path,
            '#{file_name}_worker_test.rb'
        )
        template 'worker_test.rb.erb', template_file
      end
    
        def initialize(options)
      @strictly_ordered_queues = !!options[:strict]
      @queues = options[:queues].map { |q| 'queue:#{q}' }
      if @strictly_ordered_queues
        @queues = @queues.uniq
        @queues << TIMEOUT
      end
    end
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @credential = @server.credentials.find_by_key!(params[:id]) }
    
      def verify
    if @domain.verified?
      redirect_to [organization, @server, :domains], :alert => '#{@domain.name} has already been verified.'
      return
    end
    
      before_action :require_organization_admin, :only => [:new, :create, :delete, :destroy]
  before_action :admin_required, :only => [:advanced, :suspend, :unsuspend]
  before_action { params[:id] && @server = organization.servers.present.find_by_permalink!(params[:id]) }