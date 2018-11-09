
        
              def store_page?(page)
        page[:entries].present?
      end
    
        private
    
        private
    
        def on_response(&block)
      @on_response ||= []
      @on_response << block if block
      @on_response
    end
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
            css('pre.prettyprint').each do |node|
          node.content = node.content.strip
          node['data-language'] = 'dart' if node['class'].include?('dart')
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('class')
        end
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && vms.length != 1
            vm = @env.primary_vm
            raise Errors::MultiVMTargetRequired if !vm
            vms = [vm]
          end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            def initialize
          # The action hooks hash defaults to []
          @action_hooks = Hash.new { |h, k| h[k] = [] }
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def guests
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.guests)
            end
          end
        end
    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
          def allow_uploads
        @allow_uploads
      end
    
    Sidekiq.redis {|c| c.flushdb}
def handle_signal(launcher, sig)
  Sidekiq.logger.debug 'Got #{sig} signal'
  case sig
  when 'INT'
    # Handle Ctrl-C in JRuby like MRI
    # http://jira.codehaus.org/browse/JRUBY-4637
    raise Interrupt
  when 'TERM'
    # Heroku sends TERM and then waits 10 seconds for process to exit.
    raise Interrupt
  when 'TSTP'
    Sidekiq.logger.info 'Received TSTP, no longer accepting new work'
    launcher.quiet
  when 'TTIN'
    Thread.list.each do |thread|
      Sidekiq.logger.warn 'Thread TID-#{(thread.object_id ^ ::Process.pid).to_s(36)} #{thread['label']}'
      if thread.backtrace
        Sidekiq.logger.warn thread.backtrace.join('\n')
      else
        Sidekiq.logger.warn '<no backtrace available>'
      end
    end
  end
end