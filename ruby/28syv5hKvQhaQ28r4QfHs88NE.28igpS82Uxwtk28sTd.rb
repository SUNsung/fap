
        
          def evernote_consumer_key
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_key
  end
    
        def run!
      @thread = Thread.new do
        Thread.current[:name] = '#{id}-#{Time.now}'
        begin
          run
        rescue SignalException, SystemExit
          stop!
        rescue StandardError => e
          message = '#{id} Exception #{e.message}:\n#{e.backtrace.first(10).join('\n')}'
          AgentRunner.with_connection do
            agent.error(message)
          end
        end
      end
    end
    
      def destroy
    @event.destroy
    
      before_action :upgrade_warning, only: :index