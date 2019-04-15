
        
            def absolute_url_string?(str)
      str =~ SCHEME_RGX
    end
    
        attr_reader :filters
    
        def process_response?(response)
      if response.error?
        raise <<~ERROR
          Error status code (#{response.code}): #{response.return_message}
          #{response.url}
          #{JSON.pretty_generate(response.headers).slice(2..-3)}
        ERROR
      elsif response.blank?
        raise 'Empty response body: #{response.url}'
      end
    
            occisect = Isect.new
        @spheres[0].intersect(ray, occisect)
        @spheres[1].intersect(ray, occisect)
        @spheres[2].intersect(ray, occisect)
        @plane.intersect(ray, occisect)
        if occisect.hit then
          occlusion = occlusion + 1.0
        else
          0.0
        end
      end
    end
    
      # staged_path not available in Installer/Uninstall Stanza, workaround by nesting with preflight/postflight
  # see https://github.com/Homebrew/homebrew-cask/pull/8887
  # and https://github.com/Homebrew/homebrew-cask-versions/pull/296
    
    module Sidekiq
  module Generators # :nodoc:
    class WorkerGenerator < ::Rails::Generators::NamedBase # :nodoc:
      desc 'This generator creates a Sidekiq Worker in app/workers and a corresponding test'
    
            names.inject(Object) do |constant, name|
          constant.const_defined?(name) ? constant.const_get(name) : constant.const_missing(name)
        end
      rescue NameError
        super
      end
    end
  end
end
    
    module Sidekiq
  module Extensions
    ##
    # Adds 'delay', 'delay_for' and `delay_until` methods to ActionMailer to offload arbitrary email
    # delivery to Sidekiq.  Example:
    #
    #    UserMailer.delay.send_welcome_email(new_user)
    #    UserMailer.delay_for(5.days).send_welcome_email(new_user)
    #    UserMailer.delay_until(5.days.from_now).send_welcome_email(new_user)
    class DelayedMailer
      include Sidekiq::Worker
    
          Sidekiq.logger.debug { 'Re-queueing terminated jobs' }
      jobs_to_requeue = {}
      inprogress.each do |unit_of_work|
        jobs_to_requeue[unit_of_work.queue_name] ||= []
        jobs_to_requeue[unit_of_work.queue_name] << unit_of_work.job
      end
    
          def insert_after(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || entries.count - 1
        entries.insert(i+1, new_entry)
      end