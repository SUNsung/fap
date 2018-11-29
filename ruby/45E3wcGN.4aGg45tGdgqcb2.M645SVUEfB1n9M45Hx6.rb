
        
              URL_HELPERS[key] ||= []
      URL_HELPERS[key].concat(value)
      URL_HELPERS[key].uniq!
    
            if uri 
          path = remove_domain_from_uri(uri)
          path = add_fragment_back_to_path(uri, path)
    
        def execute_bundler(options)
      ::Bundler.reset!
      ::Bundler::CLI.start(bundler_arguments(options))
    end
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
      def update_gems!
    # If any error is raise inside the block the Gemfile will restore a backup of the Gemfile
    previous_gem_specs_map = find_latest_gem_specs
    
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
    
    module Sidekiq
  module Generators # :nodoc:
    class WorkerGenerator < ::Rails::Generators::NamedBase # :nodoc:
      desc 'This generator creates a Sidekiq Worker in app/workers and a corresponding test'
    
          def deliver(msg)
        if msg.respond_to?(:deliver_now)
          # Rails 4.2/5.0
          msg.deliver_now
        else
          # Rails 3.2/4.0/4.1
          msg.deliver
        end
      end
    end
    
          def insert_after(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || entries.count - 1
        entries.insert(i+1, new_entry)
      end