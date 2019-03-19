
        
              def self.authors
        ['lmirosevic', 'maschall']
      end
    
    exec_arr = ['fastlane', tool_name] + ARGV
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Environment] env Vagrant::Environment object of the
        #   environment that this configuration has been loaded into. This
        #   gives you convenient access to things like the the root path
        #   and so on.
        # @param [ErrorRecorder] errors
        def validate(env, errors)
        end
      end
    end
  end
end

    
      private
    
      def show
    if subscription.valid?(params['hub.topic'])
      @account.update(subscription_expires_at: future_expires)
      render plain: encoded_challenge, status: 200
    else
      head 404
    end
  end
    
      def update
    setting.data = params[:data]
    setting.save!
    
      private
    
        context 'multiple arguments' do
      before do
        subject.instance_eval do
          env :userpaths, :std
        end
      end
    
            if Rake::Task.task_defined?('deploy:set_current_revision')
          before 'deploy:set_current_revision',
                 '#{scm_name}:set_current_revision'
        end
      end
      # rubocop:enable Style/GuardClause
    
          def delete(key)
        values.delete(key)
      end
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
          def self.default_generator_root
        File.dirname(__FILE__)
      end
    
        def self.with_context(msg)
      Thread.current[:sidekiq_context] ||= []
      Thread.current[:sidekiq_context] << msg
      yield
    ensure
      Thread.current[:sidekiq_context].pop
    end
    
        class Entry
      attr_reader :klass
    
    module Sidekiq
  ##
  # This module is part of Sidekiq core and not intended for extensions.
  #
  module Util
    include ExceptionHandler